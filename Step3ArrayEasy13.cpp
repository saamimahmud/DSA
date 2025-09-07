#include<iostream>
#include<vector>
#include<map>
using namespace std;

/*
............................................Longest Subarray with given Sum K(Positives).....................................
Input Format: N = 5, k = 10, array[] = {2,3,5,1,9}
Result: 3
Explanation: The longest subarray with sum 10 is {2, 3, 5}. And its length is 3.
*/
//Brute force approach 
//T.C-> O(n^3);
//S.C-> O(1)
void longSubArr(vector<int> &nums,int key){
int n=nums.size();
int sum=0;
int len=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+nums[k];
            }
            if (sum==key){
                len=max(len,j-i+1);
            }
        }
    }
    cout<<len;
}
//Brute fore with one less loop;
//T.C-> O(n^2);
//S.C(1);
void longSubArr1(vector<int> &nums,int key){
int n=nums.size();
int sum=0;
int len=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum=sum+nums[j];
           if(sum==key){
            len=max(len,j-i+1);
        }
        }
        
    }
    cout<<len;
}

//Better approach using HashMap;

void longSubArr2(vector<int> arr,long long k){
int n=arr.size();
map <long long, int> hashMap;
int len=0;
long long sum=0;

for(int i=0;i<n;i++){
sum=sum+arr[i];
}

}


int main(){
int size;
cin>>size;
vector<int> nums;
int q;
while(size--){
    cin>>q;
    nums.push_back(q);
}
//{2,3,5,1,9};
int key=10;
longSubArr(nums,key);
longSubArr1(nums,key);

    return 0;
}