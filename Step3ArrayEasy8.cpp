#include<iostream>
#include<vector>
using namespace std;    
//Linear Search
int linearSearch(vector<int> arr, int num){
    int n=arr.size();
   for(int i=0;i<n;i++){
    if(arr[i]==num){
        return i;
    }
   }
   return -1;
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    int num;
    int key=0;
    cout<<"Enter the number to be searched : ";
    cin>>num;
    key=linearSearch(arr,num);
    cout<<"The number "<<num<<" is at index : "<<key;
}