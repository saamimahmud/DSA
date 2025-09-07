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
    cout<<"The longest subarray is of length : "<<len<<endl;
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
    cout<<"The longest subarray is of length : "<<len<<endl;
}

//Better approach using HashMap;
//T.C-> O(NlogN) ....if we use unordered maps then -> O(N*1) || O(N*N).....
int longSubArr2(vector<int> arr,long long k){
int n=arr.size();
map <long long, int> hashMap;
int maxLen=0;
long long sum=0;
long long rem=0;

for(int i=0;i<n;i++){
sum=sum+arr[i];
if(sum==k){
    maxLen=max(maxLen,i+1);
}
rem=sum-k;
if(hashMap.find(rem)!=hashMap.end()){
   int len= i-hashMap[rem];
   maxLen=max(maxLen,len);
}
if(hashMap.find(sum)==hashMap.end()){//this means that the sum is not in hash map; this helps in case we have zeroes in the aray.....
hashMap[sum]=i;
}


}
return maxLen;

}


int main(){
int size;
cout<<" Enter the size of your array : "<<endl;
cin>>size;
vector<int> nums;
int q;
cout<<"Enter the elements of the array one by one : "<<endl;
while(size--){
    cin>>q;
    nums.push_back(q);
}
//{2,-2,1,0,3};
cout<<"Enter the key : "<<endl;
int key;
cin>>key;
longSubArr(nums,key);
longSubArr1(nums,key);
cout<<"The longest subarray is of length : "<<longSubArr2(nums,key);
    return 0;
}