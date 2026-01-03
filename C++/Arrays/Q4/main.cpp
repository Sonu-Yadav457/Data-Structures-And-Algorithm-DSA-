#include<iostream>
using namespace std;

void revArray(int arr[],int size){
    int temp;
    for(int i = 0;i<(size/2);i++){
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }

}

int main(){
    int arr[5] = {2,3,1,4,5};
    revArray(arr,5);
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}