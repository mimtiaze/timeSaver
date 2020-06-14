#include <iostream>
#include <string>
using namespace std;

string MinWindowSubstring(string strArr[]){

    // code goes here
    int sizeN = strArr[0].length();
    int sizeK = strArr[1].length();
    string str = strArr[1];
    string str2 = strArr[1];

    int foundCount = 0;
    int lastIndex = sizeN-1;
    for(int i=0; i<sizeN; i++){
        for(int j=0;j<sizeK;j++){
            if(strArr[0][i]==str[j]){
                str[j]='*';
                foundCount++;
                break;
            }
        }
        if(foundCount==sizeK){
            lastIndex = i;
            break;
        }
    }
    int againFoundIndex = 0;
    int firstIndex = 0;
    for(int i=lastIndex;i>=0;i--){
        for(int j=0;j<sizeK;j++){
            if(strArr[0][i]==str2[j]){
                str2[j]='*';
                againFoundIndex++;
                //cout << str2 << endl;
                break;
            }
        }
        if(againFoundIndex==sizeK){
            firstIndex = i;
            break;
        }
    }
    //cout << firstIndex << "----" << lastIndex << endl;
    string s="";
    for(int i=firstIndex;i<=lastIndex;i++){
        s+=strArr[0][i];
    }
    return s;
}

int main(){
    // keep this function call here
    /* Note: In C++ you first have to initialize an array and set
       it equal to the stdin to test your code with arrays. */

    string A[] = gets(stdin);
    cout << MinWindowSubstring(A);
    return 0;

}
