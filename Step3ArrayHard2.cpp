//Majority Elements(&gt;N/3 times) | Find the elements that appears more than N/3 times in the array

#include<iostream>
#include<vector>
#include<unordered_map>
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

//Brute force Solution 
//T.C-> O(N*N)  and S.C-> O(N)
vector<int> func2(vector<int> nums){
    int n=nums.size();
    int count;
    vector<int> temp;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j]){
                count++;
            }
            if(count==n/3+1){
                bool alreadyAdded= false;
                for(int k=0;k<temp.size();k++){
                    if(nums[i]==temp[k]){
                        alreadyAdded=true;
                    }
                }
                if(!alreadyAdded)
                {temp.push_back(nums[i]);
                }
            }
        }
    }
    return temp;
}


int main(){
vector<int> arr={2,2};
vector<int> res=func(arr);
for(int val: res){
    cout<<val<<" ";
}
cout<<endl;
vector<int> res1=func2(arr);
for(int val: res1){
    cout<<val<<" ";
}

    return 0;
}