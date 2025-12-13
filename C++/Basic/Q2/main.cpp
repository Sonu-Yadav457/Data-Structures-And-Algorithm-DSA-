#include<iostream>
using namespace std;
//if we want to do sum  or count anything we have to take a variable initialized with zero.
int main(){
    int n,sum = 0;
    cin>>n;
    for(int i = 1;i<=n;i++){
        sum += i;
    }
    cout<<sum<<endl;
    return 0;
}