#include<iostream>
using namespace std;

int main(){
    int arr[4] = {2,7,11,5};
    int target = 12;
    for(int i = 0;i<3;i++){
        for(int j = i+1;j<4;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                break;
            }
        }
    }
    return 0;
}