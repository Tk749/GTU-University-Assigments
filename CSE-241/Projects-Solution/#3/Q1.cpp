#include <iostream>
#include <cstdlib>

using namespace std;

class HotDogStand{

public:
    HotDogStand();
    HotDogStand(int newID, int newNnumSold);
    int GetID();
    void SetID(int newID);
    void Justsold();
    int GetNumSold();
    static int GetTotalSold();

private:
    static int totalSold;
    int numSold;
    int ID;
};
int HotDogStand::totalSold = 0;

int HotDogStand::GetTotalSold(){

    return totalSold;
}

HotDogStand::HotDogStand(int newID, int newNnumSold){

    numSold = newNnumSold;
    ID = newID;
}

void HotDogStand::SetID(int newID){

    ID = newID;
}

void HotDogStand::Justsold(){

    numSold++;
    totalSold++;
}

int HotDogStand::GetID(){

    return ID;
}

int HotDogStand::GetNumSold(){

    return numSold;
}

int main(){

    HotDogStand s1(1,0),s2(2,0),s3(3,0);

    s1.Justsold();
    s2.Justsold();
    s3.Justsold();
    
    cout << "Stand " << s1.GetID() << " sold " << s1.GetNumSold() << endl;
    cout << "Stand " << s2.GetID() << " sold " << s2.GetNumSold() << endl;
    cout << "Stand " << s3.GetID() << " sold " << s3.GetNumSold() << endl;

    cout << "Total sold = " << s1.GetTotalSold() << endl;
    cout << "Total sold = " << HotDogStand::GetTotalSold() << endl;
    cout << endl;

    s3.Justsold();
    s1.Justsold();

    cout << "Stand " << s1.GetID() << " sold " << s1.GetNumSold() << endl;
    cout << "Stand " << s2.GetID() << " sold " << s2.GetNumSold() << endl;
    cout << "Stand " << s3.GetID() << " sold " << s3.GetNumSold() << endl;
    cout << "Total sold = " << s1.GetTotalSold() << endl;
    cout << endl;
}  
