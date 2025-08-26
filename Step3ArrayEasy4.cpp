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
void remDupesSet(vector<int> arr){
set<int> st;
int n=arr.size();

for(int i=0;i<n;i++){
    st.insert(arr[i]);
}

}


int main (){
vector<int> arr={1,2,2,2,2,3,3,4,4,4,4,4,4};
RemDups(arr);
    return 0;
}