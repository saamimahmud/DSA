//Majority Elements(&gt;N/3 times) | Find the elements that appears more than N/3 times in the array

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


//Optimal Solution
//We analyse that the result array can only contain maximum of 2 elements for the case : n/3.
//We use the boyer moore's extended veriosn to solve this problem.
//T.C->  O(N) && S.C-> O(1)
vector<int> func3(vector<int> &nums){
int n=nums.size();
int cnt1=0;
int cnt2=0;
int el1;
int el2;
for(int i=0;i<n;i++){
    if(cnt1==0 && el2!=nums[i]){
        cnt1=1;
        el1=nums[i];
    }
    else if(cnt2==0 && el1!=nums[i]){
        cnt2=1;
        el2=nums[i];
    }

    else if(nums[i]==el1){
        cnt1++;
    }
    else if(nums[i]==el2){
        cnt2++;
    }
    else{
        cnt1--;
        cnt2--;
    }
}
cnt1=0;
cnt2=0;
vector<int> result;
for(int val:nums){
    if(el1==val){
        cnt1++;
    }
    else if(el2==val){
        cnt2++;
    }
}
if(cnt1>n/3){
    result.push_back(el1);
}
if(cnt2>n/3){
    result.push_back(el2);
}
return result;
}



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
vector<int> arr={2,1,1,3,1,4,5,6};
vector<int> res=func3(arr);
for(int val: res){
    cout<<val<<" ";
}


    return 0;
}