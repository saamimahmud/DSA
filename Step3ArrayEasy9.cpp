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
//Optimal approach for Union using two pointers
//T.C -> O(n1+n2) & S.C-> O(1);
void unionOfArrays2Pointers(vector <int> &arr1,vector <int> &arr2){
    int n1=arr1.size();
    int n2=arr2.size();
    vector<int> unionArr;
int i=0,j=0;
    while(i<n1&&j<n2){
        if(arr1[i]<=arr2[j]){
            if(unionArr.empty() || unionArr.back()!=arr1[i])
            {unionArr.push_back(arr1[i]);
            }
            i++;
        
        }
        else{
                if(unionArr.empty()|| unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
     }
    while(i<n1){
        if(unionArr.empty()|| unionArr.back()!=arr2[j])
        {unionArr.push_back(arr1[i]);
        }
        i++;
    }
    while(j<n2){
        if(unionArr.empty()|| unionArr.back()!=arr2[j])
       { unionArr.push_back(arr2[j]);
        }
        j++;
    }
    
    for(int val:unionArr){
        cout<<val<<" ";
    }
}
//Brute force approach for intersection of two arrays
void intersectionOfArrays(vector<int> &arr1,vector<int> &arr2){
vector<int> intersection;
    int i=0,j=0;
    int n1=arr1.size();
    int n2=arr2.size();
    while(i<n1&&j<n2){
        
        for(int k=0;k<n2;k++){
            
            if(arr1[i]==arr2[k]){
                intersection.push_back(arr1[i]);
                break;
            }
        }
        i++;
    }
for(int val:intersection){
        cout<<val<<" ";
    }

}


//Brute force approach for intersection of two arrays
//T.C -> O(n1*n2) & S.C-> O(n1)
void intersectionOfArrays1(vector<int> &arr1,vector<int> &arr2){

vector<int> ans;
    int i=0,j=0;
    int n1=arr1.size();
    int n2=arr2.size();
    int intersection[n1]={0};
    
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){// && intersection[j]==0)
                ans.push_back(arr1[i]);
                intersection[j]+=1;
                break;
            }
            if(arr2[j]>arr1[i]){
                break;
            }
        }
    }
for(int val: ans)  {
    
        cout<<val<<" ";
    
}

}
//Optimal approach using two pointers for Intersection of arrays;
void intersectionUsing2Pointers(vector<int> &arr1,vector<int> &arr2){
    int n1=arr1.size();
    int i=0;
    int j=0;
    vector<int> intersectionAns;

    while(i<n1){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            intersectionAns.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(int val: intersectionAns){
        cout<<val<<" ";
    }

}

int main(){
vector<int> arr1={1,1,2,3,3,4,5};
vector<int> arr2={2,3,3,4,5,6,7,8,9};

    unionOfArrays(arr1,arr2);
    cout<<endl;
    unionOfArrays2Pointers(arr1,arr2);
    cout<<endl;
    intersectionOfArrays(arr1,arr2);
    cout<<endl;
    intersectionOfArrays1(arr1,arr2);
    cout<<endl;
    intersectionUsing2Pointers(arr1,arr2);
    return 0;
}

