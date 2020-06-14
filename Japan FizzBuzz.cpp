#include <iostream>
#include <string>
#include <sstream>
using namespace std;

template <typename T>
std::string NumberToString ( T Number )
{
    std::ostringstream ss;
    ss << Number;
    return ss.str();
}


string FizzBuzz(int num) {

  // code goes here
  string str = "";
  for(int i=1;i<num;i++){
    if(i%3==0 && i%5==0) str+="FizzBuzz";
    else if(i%3==0) str+="Fizz";
    else if(i%5==0) str+="Buzz";
    else str+=NumberToString(i);
    str+=" ";

  }

  return str;

}

int main() {

  // keep this function call here
  cout << FizzBuzz(gets(stdin));
  return 0;

}



