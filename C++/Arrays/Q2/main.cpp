#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[5] = {3,4,1,6,9};
    int minIndex = 0,maxIndex = 0;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i = 0;i<5;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            minIndex = i;
        }
        if(arr[i]>largest){
            largest = arr[i];
            maxIndex = i;
        }
    }
    cout<<minIndex<<endl;
    cout<<maxIndex<<endl;
    return 0;
}