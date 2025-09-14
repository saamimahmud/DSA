#include<iostream>
#include<vector>
using namespace std;



void sort012(vector<int> &nums){
int cnt0=0;
int cnt1=0;
int cnt2=0;
int n=nums.size();
for(int i=0;i<n;i++){
    if(nums[i]==0){
        cnt0++;
    }
    if(nums[i]==1){
        cnt1++;
    }
    if(nums[i]==2){
        cnt2++;
    }
}

for(int i=0;i<cnt0;i++){
    nums[i]=0;
}
for(int i=cnt0;i<cnt1+cnt0;i++){
    nums[i]=1;
}
for(int i=cnt1+cnt0;i<n;i++){
    nums[i]=2;
}
}


int main(){
vector<int> arr={2,2,0,1,1,0};
sort012(arr);
for(int val:arr){
    cout<<val<<" ";
}



    return 0;
}