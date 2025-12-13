#include<iostream>
using namespace std;

int sumOfDig(int n){
    int sum = 0,dig;
    while(n != 0){
        dig = n%10;
        sum += dig;
        n = n/10; 
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<"Sum of digits of "<<n<<" is "<<sumOfDig(n)<<endl;
    return 0;
}