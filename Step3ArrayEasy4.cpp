#include<iostream>
#include <vector>
#include<set>
using namespace std;
//Del Dupes in a sorted array and then prints the number of elemnts present in the array 


//Compares adjacent elements for dupes;
void  RemDups(vector<int> arr){
int n= arr.size();
vector<int> nums;
int count=0;
for(int i=0;i<n;i++){
    if(arr[i]==arr[i+1]){

    }
    else{
        nums.push_back(arr[i]);
        count=count+1;
    }
}

for(int val:nums){
    cout<<val<<" ";
}
cout<<"Number of elements in the array after del of dupes : "<<count;

}
//using sset(Brute force approach);
//T.C-> O(N*log(N)+O(N))
void remDupesSet(vector<int> arr){
set<int> st;
int n=arr.size();
int count=0;
for(int i=0;i<n;i++){
    st.insert(arr[i]);
}
int j=0;
for(int val: st){
    arr[j+=1]=val;
}
for(auto it:st){
    cout<<arr[it]<<" ";
    count=it;
}
cout<<"Number of elements in the array after del of dupes : "<<count;

}

//Optimal approach using two pointers.
//T.C -> O(N);
//f(x) returns the number of unique elements in the array
void uniqNums(vector<int> arr){
int n=arr.size();
int i=0;
for(int j=1;j<n;j++){
    if(arr[i]!=arr[j]){
        arr[i+1]=arr[j];
        i++;
    }

}
for(int j=0;j<=i;j++){
    cout<<arr[j]<<" ";
}
cout<<" The number of elements unique in the array are : "<<i+1;
}



int main (){
vector<int> arr={1,2,2,2,2,3,3,4,4,4,4,4,4};
RemDups(arr);
cout<<endl;
remDupesSet(arr);
cout<<endl;
uniqNums(arr);
    return 0;
}