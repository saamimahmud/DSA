#include<iostream>
#include<set>
#include<vector>
using namespace std;
//Find the union of two sorted arrays;
void unionOfArrays(vector<int> &arr1,vector<int> &arr2){
    set<int> s;
    for(int val:arr1){
        s.insert(val);
    }
    for(int val:arr2){
        s.insert(val);
    }

    for(int val:s){
        cout<<val<<" ";
    }
}


int main(){
vector<int> arr1={1,2,3,4,5};
vector<int> arr2={2,3,4,5,6,7,8,9};

    unionOfArrays(arr1,arr2);

    return 0;
}

