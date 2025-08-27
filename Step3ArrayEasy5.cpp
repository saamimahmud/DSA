#include<iostream>
#include<vector>
using namespace std;

//Left rotate an array by one place;
//T.C-> O(N)
void leftRot(vector<int> arr){
int temp=0;
int n=arr.size();
temp=arr[0];
for(int i=0;i<n;i++){
    swap(arr[i],arr[i+1]);
}
arr[n-1]=temp;

for(int val:arr){
    cout<<val<<" ";
}

}


int main(){
vector<int> arr={1,2,3,4,5};
leftRot(arr);

    return 0;
}