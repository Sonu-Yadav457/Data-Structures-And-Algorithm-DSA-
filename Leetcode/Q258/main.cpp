#include<iostream>
using namespace std;

int sumDigit(int n){
    int sum = 0,dig;
    while(n>0){
        dig = n%10;
        sum += dig;
        n /= 10;
    }
    return sum;
}

int main(){
    int n = 249;
    int newSum = sumDigit(n);
    do{
        newSum = sumDigit(newSum);
    }while(newSum >= 10);
    cout<<newSum<<endl;

    return 0;
}