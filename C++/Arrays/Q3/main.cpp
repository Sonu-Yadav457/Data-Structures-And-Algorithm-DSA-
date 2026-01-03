#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2,3,2,6,4};
    int n,found = 0,index;
    cin>>n;
    for(int i = 0;i<5;i++){
        if(arr[i] == n){
            found = 1;
            index = i;
            break;
        }
    }
    found?cout<<n<<" found at index "<<index:cout<<n<<" Does not found";
    return 0;
}