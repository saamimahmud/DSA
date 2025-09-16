//Kadane's Algorithm : Maximum Subarray Sum in an Array
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
//Question : Given an integer array arr, find the contiguous subarray (containing at least one number) which
//has the largest sum and returns its sum and prints the subarray.


//Brute Force approach is T.C-> O(N*N*N)
// and this code is better with
//T.C-> O(N*N)
void kadane_1 (vector<int> &nums){
    int n=nums.size();
    int sum=0;
    int maxSum=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum=sum+nums[j];
            maxSum=max(sum,maxSum);
        }

    }
    cout<<maxSum;
}

//Optimal approach using Kadane's Algorithm
//T.C->O(n)...
//S.C->O(1)...
void kadaneOPT(vector<int> &nums){
   int n=nums.size();
    int start=-1;
    int end=-1;
    int sum=nums[0];
    int maxSum=nums[0];
    int tempStart=0;
for(int i=1;i<n;i++){
    if(sum+nums[i]<nums[i]){
        sum=nums[i];
        tempStart=i;

    }
    else{
        sum=sum+nums[i];
    }
    if(sum>maxSum){
        maxSum=sum;
        start=tempStart;
        end=i;
    }
}
cout<<"Max Sum : " <<maxSum<<endl;
cout<<" Subarray indices : ["<<start<<", "<<"]"<<endl;

}





int main (){
vector<int> arr={-3,-2,-2,-3} ;
//kadane_1(arr);
kadaneOPT(arr);

    return 0;
}