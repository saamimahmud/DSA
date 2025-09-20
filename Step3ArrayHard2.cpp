//Majority Elements(&gt;N/3 times) | Find the elements that appears more than N/3 times in the array

#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
using namespace std;

//Better Solution using Hashing
//T.C-> O(N)*O(1) or O(N)*logN & S.C-> O(N).. 
vector<int> func(vector<int> &nums){
unordered_map <int,int> mpp;
vector<int> temp;
int n=nums.size();
for(int i=0;i<n;i++){
    mpp[nums[i]]+=1;
    if(mpp[nums[i]]==n/3+1){
        temp.push_back(nums[i]);
    }
}

return temp;

}


int main(){
vector<int> arr={1,2};
vector<int> res=func(arr);
for(int val: res){
    cout<<val<<" ";
}

    return 0;
}