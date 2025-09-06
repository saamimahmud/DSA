//Find the number that appears once, and other numbers twice.
#include<iostream>
#include<vector>
using namespace std;

void func(vector<int> &nums,int n){
    int hashArr[n]={0};
 for(int i=0;i<n;i++){
    hashArr[nums[i]]+=1;
 }
 for(int i=0;i<n;i++){
    if(hashArr[i]==1){
        cout<<hashArr[i];
    }
 }

    }



int main(){
    vector<int> nums={3,3,1,2,2,6,6,7,7};
    int n=nums.size();
    func(nums,n);

    return 0;
}