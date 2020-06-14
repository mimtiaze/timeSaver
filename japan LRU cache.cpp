#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> v;
int exist(string s){
    for(int i=0; i<v.size(); i++){
        if(v[i]==s) return i;
    }
    return -1;
}

void del(int index){
    v.erase(v.begin()+index);
}
string LRUCache(string strArr[]){

    // code goes here
    int sizee = *(&strArr + 1) - strArr;

    for(int i=0; i<sizee; i++){
        int res = exist(strArr[i]);
        if(res==-1) v.push_back(strArr[i]);
        else{
            del(res);
            v.push_back(strArr[i]);
        }
    }
    string str="";
    int s;
    if(v.size()<=5) s=0;
    else s=v.size()-5;

    for(int i=s; i<v.size(); i++){
        str+=v[i];
        if(i!=v.size()-1)str+="-";
    }
    return str;
}

int main(){
    // keep this function call here
    /* Note: In C++ you first have to initialize an array and set
       it equal to the stdin to test your code with arrays. */

    string A[] = gets(stdin);
    cout << LRUCache(A);
    return 0;

}
