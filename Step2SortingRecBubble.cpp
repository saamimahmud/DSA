#include<iostream>
using namespace std;

void RecBubble(int arr[],int j,int n){
int k=j;
if(j<=n-1){

    if(arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        RecBubble(arr,j++,n);
    }
RecBubble(arr,k+1,n);
}
}

int main(){
int arr[]={3,1,4,2,5};
int n=5;
RecBubble(arr,1,n);
for(int i=0;i<=n-1;i++){
    cout<<arr[i]<<" ";
}


    return 0;
}