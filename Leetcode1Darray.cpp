/*
1480. Running Sum of 1d Array
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        vector<int> runningSum(vector<int>& nums) {
            int length=nums.size();
            int sum = 0;
            for(int i=0;i<=length-1;i++){
                sum=sum+nums[i];
                nums[i]=sum;
            }
            return nums;
        }
    };
    void Print(vector<int> nums){
        int length=nums.size();
        for(int i=0;i<=length-1;i++){
            cout<<nums[i];
            cout<<" ";
        }
    };

int main(){
    Solution Sol;
    vector <int> Input ={1,2,3,4,5};
    vector <int> Result=Sol.runningSum(Input);
    Print(Result);
}