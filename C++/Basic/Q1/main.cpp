#include<iostream>
using namespace std;
//Using the concept of ASCII value.
int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"UpperCase"<<endl;
    }
    else if(ch>=97 && ch <= 122){
        cout<<"Lowercase"<<endl;
    }
    else{
        cout<<"Invalid Input"<<endl;
    }
    return 0;
}