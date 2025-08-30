#include<iostream>
#include<vector>
using namespace std;    
//Linear Search

int linearSearch(vector<int> arr, int num){
    int i=0;
    int j=0;
    while(arr[i]!=num){
        i++;
        j=i;
        
    }
    return j;
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