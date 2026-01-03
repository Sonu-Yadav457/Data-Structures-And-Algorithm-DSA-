#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n = 5;
    int arr[n];
    for(int i = 0;i<n;i++){
            cin>>arr[i];
    }
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i= 0;i<n;i++){
        smallest = min(arr[i],smallest);
        largest  = max(arr[i],largest);
    }
    cout<<smallest<<endl;
    cout<<largest<<endl;
    return 0;
}