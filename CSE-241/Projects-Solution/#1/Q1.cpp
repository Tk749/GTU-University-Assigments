#include <iostream>
using namespace std;

int main() {

  bool is_prime = true;

  for (int n = 3; n <= 100; ++n) {
      is_prime = true;

    for(int i=2 ; i<= n-1 ; ++i){
      
        if((n%i)== 0){
            is_prime = false;

        }
    }
    if (is_prime == true) {
      cout << n << "is a prime number" << endl;
      
    }
  }
  return 0;
}