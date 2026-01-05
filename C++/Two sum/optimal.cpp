#include<iostream>
using namespace std;

int main(){
    //if sorted
    int arr[4] = {2,7,11,15};
    int target = 17;
    int i = 0, j = 3,Psum;
    while(i<j){
        Psum = arr[i]+arr[j];
        if(Psum<target){
            i++;
        }
        else if(Psum > target){
            j--;
        }
        else{
            cout<<i<<" "<<j;
            break;
        }
    }
    
    return 0;
}