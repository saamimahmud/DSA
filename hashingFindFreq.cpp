#include<iostream>
using namespace std;


//Input: array[] = {10,5,10,15,10,5};
int main(){
int n;
cout<<"Enter the number of elements you would like : "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements  : "<<endl;
//taking array from user ;
for(int i=0;i<=n;i++){
    cin>>arr[i];
}
int hash[100]={0};
for(int i=0;i<=n;i++){
    hash[arr[i]]+=1;
}


    return 0;
}