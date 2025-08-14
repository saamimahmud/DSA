#include<iostream>
using namespace std;
//Reverse an array;

void Print_Array(int arr [],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void Reverse_Array(int arr[],int n){//reversing an array using an auxilary array (iterative method);
    int a[5];
    for(int i=n-1;i>=0;i--){
        a[i]=arr[n-i-1];
    }
    Print_Array(a,n);
}

void Reverse_Array1(int arr[],int n){
    //: Reversing an Array using Space-optimized iterative method
   int p1=0;
   int p2=n-1;
   int store=0;
   while(p1<=p2&&p2>=p1){

    store=arr[p1];
    arr[p1]=arr[p2];
    arr[p2]=store;
    p1++;
    p2--;
   }
}
void Reverse_Array2(int arr[],int start,int end){
    //Recursive method
    int store=0;
    if(start<=end&&end>=start){
    store=arr[start];
    arr[start]=arr[end];
    arr[end]=store;
    Reverse_Array2(arr,start+1,end-1);

    }
}

int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    Print_Array(arr,n);
    cout<<endl;
   // Reverse_Array(arr,n);
    //Reverse_Array1(arr,n);
    Reverse_Array2(arr,0,n-1);
    Print_Array(arr,n);
    return 0;


}
