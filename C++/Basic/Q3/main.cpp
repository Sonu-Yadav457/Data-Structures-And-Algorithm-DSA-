#include<iostream>
using namespace std;
int main(){
    int n;
    bool flag = true;
    cin>>n;
    if(n<2) return 0;
    for(int i = 2;i<n;i++){  //optimization --> i*i<=n;
        if(n%i == 0){
            flag = false;
            break;
        }
    }
    if(flag) cout<<"Prime";
    else cout<<"Not Prime";
    return 0;
}