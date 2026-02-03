#include<iostream>

using namespace std;

bool isPossible(int arr[], int n, int m, int maxAllowedTime){
    int painter = 1, time = 0;
    for(int i = 0; i<n; i++){
        if(time + arr[i]<= maxAllowedTime){
            time += arr[i];
        }
        else{
            painter++;
            time = arr[i];
        }
    }
    return painter<=m? true:false;
}

int main(){
    int arr[4] = {40,30,10,20};
    int m = 2;
    int arrMax = 0;
    int arrSum = 0;
    for(int i = 0; i<4; i++){
        if(arr[i] > arrMax){
            arrMax = arr[i];
        }
        arrSum += arr[i];
    }
    int st = arrMax, ep = arrSum,mid, ans = -1;
    while(st <= ep){
        mid = st + (ep - st)/2;
        if(isPossible(arr, 4, m, mid)){
            ans = mid;
            ep = mid - 1;
        }
        else{
            st = mid + 1;
        }

    }
    cout<<ans<<endl;


    return 0;
}