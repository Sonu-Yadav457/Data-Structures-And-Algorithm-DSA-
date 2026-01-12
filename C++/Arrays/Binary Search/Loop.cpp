#include<iostream>
using namespace std;

int binSearch(int arr[],int size,int target){
    int st = 0, ep = size-1,mid;
    while(st<=ep){
        mid = (st+ep)/2;
        if(arr[mid] ==  target){
            return mid;
        }
        else if(target<arr[mid]){
            ep = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[7] = {2,4,6,8,10,12,14};
    int result = binSearch(arr,7,10);
    cout<<result<<endl;
    return 0;
}