//Two Sum : Check if a pair with given sum exists in Array
#include<algorithm>
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int> arr,int k){
int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==k){
                return {i,j};

            }
        }
    }
    return {-1,-1};
}

//Using Hashing 
//T.C-> O(N) or O(N*N) for unodered_map AND O(NlogN) if ordered map is used
//S.C-> O(N)
vector<int> twoSum1(vector<int>& nums, int target) {
      int n=nums.size();
    unordered_map<int,int> mpp;
    int comp=0;
    
    for(int i=0;i<n;i++){
        comp=target-nums[i];
        if(mpp.find(comp)!=mpp.end()){
            return {i,mpp[comp]};
        }
        mpp[nums[i]]+=i;
    }
    return {-1,-1};
    }

//Using Two Pointe Approach;

string twoSum2(vector<int>& nums, int target) {
      int n=nums.size();
      int i=0;
      int j=n-1;
      sort(nums.begin(),nums.end());
      while(i<j){
        if(nums[i]+nums[j]==target){
            return "Yes";
        }
        if(nums[i]+nums[j]>target){
            j--;
        }
        if(nums[i]+nums[j]<target){
            i++;
        }
      }
      return "NO";
    }



int main(){
vector<int> arr={2,6,5,8,11};
int k=14;
vector<int> arr2=twoSum1(arr,k);
for(int val:arr2){
cout<<val<<" ";
}

cout<< twoSum2(arr,k);


    return 0;
}