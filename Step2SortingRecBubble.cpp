#include<iostream>
using namespace std;

void RecBubble(int arr[],int j,int n){
if(j<=n-1){

    if(arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
    }

RecBubble(arr,j++);
}
}




int main(){



    return 0;
}