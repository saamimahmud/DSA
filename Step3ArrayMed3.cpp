//Find the Majority Element that occurs more than N/2 times.

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void majElem(vector<int> &nums){
int cnt;
int n=nums.size();
int maxElem=0;
    for(int i=0;i<n;i++){
        cnt=0;
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j]){
                cnt++;
            }
            if(cnt>n/2){
            maxElem=nums[i];
        }
        }
        
    }
    cout<<maxElem;
}

//Better solution using hashing....
//T.C-> O(N) or O(N*N)...
void maxElem1(vector<int> &nums){
    int n=nums.size();
    unordered_map <int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    for(auto it: mpp){
        if(it.second>n/2){
            cout<<it.first;
        }
    }

}

//Optimal Solution using Boyer-Moore's Algorithm..

void maxElem2(vector<int> &nums){
    int elem=0;
    int n=nums.size();
    int cnt=1;
    int i=0;
   
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            elem=nums[i];
        }

        else if(nums[i]==elem){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    int count=0;
    for(int i=0;i<n;i++){
        if(nums[i]==elem){
            count++;
        }
    }
    if(count>n/2){
        cout<<elem;
    }
}


int main(){
vector<int> arr={3,3,4};
majElem(arr);
maxElem1(arr);
maxElem2(arr);

    return 0;
}