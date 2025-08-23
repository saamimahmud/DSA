#include<iostream>
using namespace std;
//T.C -> NlogN;

int pIndex(int arr[],int low,int high){
int i=low;
int j=high;
int pivot=arr[low];
    while(i<j){
        while(arr[i]<=pivot&&i<=high-1){
            i++;
        }

        while(arr[j]>arr[pivot]&&j>=low+1){
            j--;
        }
        if(i<j)
        {swap(arr[i],arr[j]);
        }
    }
swap(arr[low],arr[j]);
    return j;

}

void QuickSort(int arr[],int low,int high){


int pivIndex;

if(low<high){
 pivIndex=pIndex(arr,low,high);
 QuickSort(arr,low,pivIndex);
QuickSort(arr,pivIndex+1,high);
}





}




int main(){

int arr[]={3,1,4,2,5,6,0};
int n=7;
QuickSort(arr,0,n-1);
for(int i=0;i<=n-1;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}