#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;



void fourSum(vector<int> &nums){

int n=nums.size();
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;j<n;j++){
                for(int l=k+1;l<n;l++){
                    int sum =nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum==0){
                        vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                    }
                }
               
            }
        }
    }
}

int main(){


    return 0;
}