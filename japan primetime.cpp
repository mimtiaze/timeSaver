#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string PrimeTime(int num) {

    int loop = sqrt(num);
    for(int i=2;i<loop;i++){
        if(num%i==0) return "false";
    }
    return "true";
}

int main() {

  // keep this function call here
  cout << PrimeTime(gets(stdin));
  return 0;

}
