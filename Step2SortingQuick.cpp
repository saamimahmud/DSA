#include<iostream>
using namespace std;
//T.C -> Best - O(n) otherwise - O(n*n);

int pIndex(int arr[],int low,int high){
int i=low;
int j=high;
    while()


}

void QuickSort(int arr[],int low,int high){

int pivot=arr[low];
int pivIndex;

if(low<high){
 pivIndex=pIndex();
}

QuickSort(arr,low,pivIndex);
QuickSort(arr,pivIndex+1,high);



}




int main(){

int arr[]={3,1,4,2,5,6,0};
int n=7;
QuickSort(arr,0,n,2);
for(int i=0;i<=n-1;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}