#include<iostream>
#include<set>
#include<vector>
using namespace std;
//Find the union of two sorted arrays;

//Brute force method
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
//Optimal approach using two pointers
//T.C -> O(n1+n2) & S.C-> O(1);
void unionOfArrays2Pointers(vector <int> &arr1,vector <int> &arr2){
    int n1=arr1.size();
    int n2=arr2.size();
    vector<int> unionArr;
int i=0,j=0;
    while(i<n1&&j<n2){
        if(arr1[i]<arr2[j]){
         if(i<n1)  { 
            if(unionArr.empty() || unionArr.back()!=arr1[i])
            {unionArr.push_back(arr1[i]);}
            i++;
        }
        }
        if(arr2[j]<arr1[i]){
            
            if(j<n2)
            {
                if(unionArr.empty()|| unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;}
        }
     if(arr1[i]==arr2[j]){
        
            unionArr.push_back(arr1[i]);
            i++;
            j++;
    }}
    while(i<n1){
        unionArr.push_back(arr1[i]);
        i++;
    }
    while(j<n2){
        unionArr.push_back(arr2[j]);
        j++;
    }
    
    for(int val:unionArr){
        cout<<val<<" ";
    }
}

int main(){
vector<int> arr1={1,1,2,3,3,4,5};
vector<int> arr2={2,3,4,5,6,7,8,9};

    unionOfArrays(arr1,arr2);
    cout<<endl;
    unionOfArrays2Pointers(arr1,arr2);
    
    return 0;
}

