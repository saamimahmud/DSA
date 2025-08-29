// Move Zeros to end
#include<iostream>
#include<vector>
using namespace std;
//Brute Force approach 

void moveZeroes(vector<int>& arr)
{
    int n=arr.size();
    int j=0;
    int count=0;
    //counting no of zeroes
    for(int val : arr){
        if(val!=0){
            arr[j]=val;
            j++;
            count++;
        }
    }
    for(int i=count;i<n;i++){
        arr[i]=0;
    }
    



}


int main(){
vector<int> arr={1,2,0,0,3,2,0,2,4};

moveZeroes(arr);
for(int val:arr){   
    cout<<val<<" ";
}

    return 0;
}