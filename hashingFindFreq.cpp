#include<iostream>
#include<map>
using namespace std;
//Problem Statement: Given an array of size N. Find the highest and lowest frequency element.

//Input: array[] = {10,5,10,15,10,5};
int main(){
int n;
cout<<"Enter the number of elements you would like : "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements  : "<<endl;
//taking array from user ;
for(int i=0;i<=n;i++){
    cin>>arr[i];
}
map<int,int> mpp;

        int maxElem=0;
        int maxCount=0;
        int minElem=0;
        int minCount=n;
        
for(int i=0;i<=n;i++)
    mpp[arr[i]]++;

    for(auto it:mpp){
        int count=it.second;
        int element=it.first;

        if(count>maxCount){
            maxCount=count;
            maxElem=element;
        }
        if(count<minCount){
            minCount=count;
            minElem=element;
        }
    }

    cout<<" highest frequency is "<<maxCount<<" of number "<<maxElem<<endl;
    cout<<" lowest frequency is "<<minCount<<" of number "<<minElem<<endl;




    return 0;
}