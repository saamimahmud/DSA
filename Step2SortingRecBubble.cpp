#include<iostream>
using namespace std;

void RecBubble(int arr[],int j,int n){
if(n==1){return ;
}
if(j<n-1){

    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
       
    }
     RecBubble(arr,j+1,n);
}
else{
    RecBubble(arr,0,n-1);
}

}

int main(){
int arr[]={3,1,4,2,5};
int n=5;
RecBubble(arr,0,n);
for(int i=0;i<=n-1;i++){
    cout<<arr[i]<<" ";
}


    return 0;
}