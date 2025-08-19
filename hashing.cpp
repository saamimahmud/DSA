/*
5
13213

1
4
2
3
12
*/

#include<iostream>
using namespace std;

void hashing(int arr[],int hash[],int n){
    int length=n-1;
    
    for(int i=0;i<=n;i++){
        hash[arr[i]]++;
        
    }
 
}



int main(){
int hash[13]={0};
int n;
cout<<"Enter the number of elements you would like in the array : "<<endl;
cin>>n;

int arr[n];


cout<<" Enter the array elements : "<<endl;
for(int i=0;i<=n;i++){
    cin>>arr[i];
}
hashing(arr,hash,n);
cout<< "Enter number of queries you would like : "<<endl;

int q;
cin>>q;
cout<< "Enter queries now  : "<<endl;
while(q--){
    int num;
    cin>>num;
    cout<<"Frequency of the element "<<num<<" is equal to " <<hash[num];
}
    return 0;
}