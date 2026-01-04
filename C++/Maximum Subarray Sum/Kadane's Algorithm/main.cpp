#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n = 5, Csum = 0, maxSum = INT_MIN;
    int arr[5] = {1,2,3,4,5};
    for(int i = 0; i<n;i++){
        Csum += arr[i];
        maxSum = max(Csum,maxSum);
        if(Csum<0){
            Csum = 0;
        }
    }
    cout<<maxSum<<endl;

    return 0;
}