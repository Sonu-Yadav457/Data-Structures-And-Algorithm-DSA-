#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec = {1,2,3,4};
    cout<<vec.size()<<endl;
    vec.push_back(5);  //push 5 at the end of vector
    cout<<vec.size()<<endl;
    vec.pop_back(); //delete last element
    vec.front(); //return first element
    vec.back(); //return last element
    cout<<vec.at(2)<<endl;   //vec[2]


    // for(int val : vec){  //for each loop - accessing element not index.
    //     cout<<val<<endl;
    // }
    return 0;
}