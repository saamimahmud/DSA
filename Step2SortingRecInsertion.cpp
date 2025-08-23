#include<iostream>
using namespace std;
//T.C -> Best - O(n) otherwise - O(n*n);
void Insert(int arr[],int j){

    if(j>0 &&arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
    }
    Insert(arr,j-1);
}


void Rec(int arr[],int j,int n){
    if(j==n){
        return ;
    }
    Insert(arr,j);
    Rec(arr,j+1,n);

}


int main(){

int arr[]={3,1,4,2,5};
int n=5;
Rec(arr,1,n);
for(int i=0;i<=n-1;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}