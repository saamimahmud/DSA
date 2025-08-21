#include<iostream>
using namespace std;

void selectionSort(int arr[],int length){
    int selected=0;
for(int i=0;i<=length-1;i++){
    for(int j=i+1;j<=length-1;j++){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }

    }
    cout<<arr[i]<<" ";
}
}

int main(){
int arr[]={5,4,3,2,1};
int length=sizeof(arr)/sizeof(arr[0]);
selectionSort(arr,length);

    return 0;
}