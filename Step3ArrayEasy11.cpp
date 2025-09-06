#include<iostream>
#include<vector>
using namespace std;

// Return Maximum consecutive ones.


//Brute force approach 
void conOnes(vector<int> arr){
int count =0;
int p1=0;
int n=arr.size();
vector<int> arr2={0};
    for(int i=0;i<n;i++){
       if(arr[i]==1){
        count+=1;
       }
       if(p1<=count)
       {
        p1=count;
       }
        if(arr[i]!=1){   
        count=0;
       } 
    }
cout<<p1;

}

int main(){

vector<int> arr={1,1,1,0,1,1,1,1,1};
conOnes(arr);
    return 0;
}