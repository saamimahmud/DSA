// Move Zeros to end
#include<iostream>
#include<vector>
using namespace std;
//Brute Force approach 
//T.C -> O(2N)
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
//Optimal approach using two pointers

void moveZeroesOptimal(vector<int>& arr)
{
    int j=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}


int main(){
vector<int> arr={1,2,0,0,3,2,0,2,4};

moveZeroes(arr);
for(int val:arr){   
    cout<<val<<" ";
}
moveZeroesOptimal(arr);
cout<<endl;
for(int val:arr){   
    cout<<val<<" ";
}

    return 0;
}