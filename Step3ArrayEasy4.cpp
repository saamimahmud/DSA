#include<iostream>
#include <vector>
using namespace std;
//Del Dupes
vector<int>  RemDups(vector<int> arr){
int n= arr.size();
vector<int> nums;
for(int i=1;i<n;i++){
    if(arr[i-1]==arr[i]){

    }
    else{
        nums.push_back(arr[i-1]);
    }
    cout<<nums[i];
}


}

int main (){
vector<int> arr={1,2,3,3,4};
RemDups(arr);
    return 0;
}