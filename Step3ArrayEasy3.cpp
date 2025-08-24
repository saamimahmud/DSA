#include<iostream>
using namespace std;


//Is array Sorted ?

bool IsSorted(int arr[],int n){

    for (int i=1;i<=n-1;i++)
    {
        if(arr[i]<arr[i-1]){
            return false;
        }
        
    }
    return true;
}

int main(){

int arr[]={1,1,1,2,2,3};
int n=sizeof(arr)/sizeof(arr[0]);

bool var=IsSorted(arr,n);
if(var==true){
    cout<<"Array is sorted"<<endl;
}
else{
    cout<<"Array is not sorted";
}
    return 0;
}