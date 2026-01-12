#include<iostream>
using namespace std;

int binSearch(int arr[],int size, int target,int st, int ep){
    if(st > ep){
        return -1;
    }
    int mid = (st + ep) / 2;;
    if(arr[mid] == target){
        return mid;
    }
    else if(target<arr[mid]){
        return binSearch(arr,size,target,st,mid-1);
    }
    else{
        return binSearch(arr,size,target,mid+1,ep);
    }
}

int main(){
    int arr[7] = {2,4,6,8,10,12,14};
    int result = binSearch(arr,7,10,0,6);
    cout<<result<<endl;
    return 0;
}