#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

const int MAX_DIGITS = 20;

void input(int number[],int& numbersize);
void output(const int number[],int numbersize);
void add(int first[], int firstsize, int second[], int secondsize, int sum[], int& sumSize);


int main(){
    int first[MAX_DIGITS+1];
    int firstsize;
    int second[MAX_DIGITS+1];
    int secondsize;
    int sum[MAX_DIGITS+1];
    int sumsize;

    cout << "large integer summing program " << endl;
    cout << "please an integer, 20 digits or less" << endl;
    input (first , firstsize);
    cout << "you entered" << endl;
    output(first , firstsize);

    cout << endl;

    cout << "Enter another integer, 20 digits or less "<< endl;

    input( second, secondsize) ;
    cout << "you entered" << endl;
    output (second, secondsize);
    cout << endl << endl ;
    
    cout << " the sum is " << endl;
    output(first,firstsize);
    cout << endl;
    output(second,secondsize);
    cout << endl;
    cout << "--------------" << endl;
    add ( first , firstsize,second , secondsize,sum ,sumsize);
    output(sum ,sumsize);
    cout << endl ;
    return 0;



}


void input(int number[],int& numbersize){

    char ch;
    int check;
    int i = 0;
    numbersize =0;
    cin.get(ch);
    while('\n' != ch)
    {       
        check = isdigit(ch);

        if( check )
        {
            number[i] = int(ch) - int('0');
         numbersize ++;
         i ++;
           cin.get(ch);


        }
    else{

            cout << " non digit entered. abortingg" << endl;
            

        
            exit(1);

    }





    }

    if(numbersize > 20){
        cout << "input number size too large. aborting" << endl;

        exit(1);

    }

    for(int k = 0 ; k < numbersize/2 ; k++){

        int temp = number[k];
        number [k] = number[numbersize-1-k];

        number[numbersize -1 -k ]= temp;





    }

}

void output(const int number[],int numbersize){
    int i;

    for ( i = 20 ; i >= numbersize; i-- )
        cout << " " ;
        for(i = numbersize -1  ; i >= 0 ; i-- )
        cout << number[i];






}

void add(int first[], int firstsize, int second[], int secondsize, int sum[], int& sumSize){

    int carry = 0;

    int largersize;

    if(firstsize > secondsize){
        for(int i = secondsize ; i < firstsize ; i++)
            second[i] = 0;
        largersize = firstsize;


        
    }

    else{
        for(int i = firstsize ; i < secondsize ; i++  )
            first[i]= 0;
        largersize = secondsize;
    }
    
    for(int i = 0; i < largersize ; i++ ){
        sum[i] = first[i] + second[i] + carry ;

        if(sum[i] > 9 ){

            carry = 1;
            sum[i] = sum[i] - 10;

        }
    else 
        carry = 0;
        

    }

if (1 == carry){

    if(largersize == 20 ){
        cout << "an overflow has occured " << "result is set to 0 " << endl;
        sumSize = 1;
        sum[0];

    }
else {
    sum[largersize] = carry;
    sumSize = largersize +1;    
}

}
else 
    sumSize = largersize;

}
