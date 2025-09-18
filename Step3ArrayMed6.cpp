//  Rearrange Array Elements by Sign!
//arr[] = {1,2,-4,-5}, N = 4;
//     {1 -4 2 -5}



#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

//Brute force Approach
//T.C-> O(N+N/2)
//S.C-> O(N)
void func(vector<int> &nums){
int n=nums.size();
vector<int> pos;
vector<int>neg;

for(int i=0;i<n;i++){
    if(nums[i]>0){
        pos.push_back(nums[i]);
    }
    else if ( nums[i]<0){
        neg.push_back(nums[i]);
    }
}

for(int i=0;i<n/2;i++){
    nums[2*i]=pos[i];
    nums[2*i+1]=neg[i];
}

for(int val:nums){
    cout<<val;
}
}

//Optimal Approach 
//Variant 1 (no. of pos == no. of neg)
//T.C -> O(N)
//S.C-> O(N)
void func1(vector<int> nums){
    int posIndex=0;
    int negIndex=1;
    int n=nums.size();
    vector<int> result(n);
    
    for(int i=0;i<n;i++){
        if (nums[i]>0){
            result[posIndex]=nums[i];
            posIndex=posIndex+2;
        }
        else if ( nums[i]<0){
            result[negIndex]=nums[i];
            negIndex=negIndex +2;
        }
    }
    for(int val: result){
    cout<<val;        
    }
}

//variant 2 (no.of pos != no.of neg).
//T.C-> O(2N)
//S.C-> O(N)
void func2(vector<int> &nums){
    int n=nums.size();
    vector<int> pos;
    vector<int> neg;
    int index=0;
for(int i=0;i<n;i++){
if(nums[i]>0){
    pos.push_back(nums[i]);
}
else if(nums[i]<0){
    neg.push_back(nums[i]);
}
}
if(pos.size()>neg.size()){
    index=neg.size()*2;
    for(int i=0;i<neg.size();i++){
        nums[2*i]=pos[i];
        nums[i*2+1]=neg[i];
    }
    for(int i=neg.size();i<pos.size();i++){
    nums[index]=pos[i];
    index++;
}
}
else{
    index=pos.size()*2;
    for(int i=0;i<pos.size();i++){
        nums[2*i]=pos[i];
        nums[i*2+1]=neg[i];
    }
    for(int i=pos.size();i<neg.size();i++){
    nums[index]=neg[i];
    index++;
}
}

for(int val: nums){
    cout<<val;
}


}

int main(){
vector<int> arr={1,2,-4,-5};

//func(arr);
//func1(arr);
func2(arr);

    return 0;
}