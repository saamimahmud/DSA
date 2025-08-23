#include<iostream>
using namespace std;

void RecInsert(int arr[],int j,int n){
if(j==n){return;
}
if(arr[j]<arr[j-1]){
    swap(arr[j],arr[j-1]);

}
RecInsert(arr,j+1,n);

}


int main(){



    return 0;
}