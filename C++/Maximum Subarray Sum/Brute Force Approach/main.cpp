#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n = 5,Csum,maxSum = INT_MIN,s,e;
    int arr[5] = {1,2,3,4,5};
    for(int start = 0; start<n;start++){
        Csum = 0;
        for(int end = start;end<n;end++){
            Csum += arr[end];
            maxSum = max(Csum,maxSum);
        }
        
    }
    cout<<maxSum<<endl;
    
    return 0;
}