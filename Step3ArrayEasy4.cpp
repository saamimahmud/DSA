#include<iostream>
#include <vector>
using namespace std;
//Del Dupes
vector<int>  RemDups(vector<int> arr){
int n= arr.size();
vector<int> nums;
for(int i=0;i<n;i++){
    if(arr[i]==arr[i+1]){

    }
    else{
        nums.push_back(arr[i]);
    }
}

for(int val:nums){
    cout<<val<<" ";
}

}


int main (){
vector<int> arr={1,2,3,3,4};
RemDups(arr);
    return 0;
}