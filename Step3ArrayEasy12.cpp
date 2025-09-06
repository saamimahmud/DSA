//Find the number that appears once, and other numbers twice.
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

//brute approach using linear search 
//T.C-> O(n*n)...
//S.C-> O(1);;;;
void func2(vector<int> &nums,int n){
    int count=0;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j]){
                count++;
            }
            
        }
        if(count==1){
            cout<<nums[i];
            break;
        }
        
    }
}


//solution using unordered maps 
//T.C-> O(n);
void func1(vector<int> &nums,int n){
    unordered_map<int,int> hashArr;
 for(int i=0;i<n;i++){
    hashArr[nums[i]]+=1;
 }
 for(auto it:hashArr){
    if(it.second==1){
        cout<<it.first;
    }
 }

    }

//solutin using hash array
//T.C-> O(3n) & S.C-> O(maxi)
//For negatives of high power like 10^7 they cannot be handled with hash array so for that we use maps<long long,int>
void func(vector<int> &nums,int n){
    int maxi=nums[0];
for(int i=0;i<n;i++){
    maxi=max(maxi,nums[i]);
}
 int hashArr[maxi]={0};
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
    func1(nums,n);
    func2(nums,n);

    return 0;
}