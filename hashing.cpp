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
    int p1=0;
    int length=n-1;
    int count=0;
    hash[12]=0;
    //for(int i=0;i<12;i++){
      //      hash[i]=0;
       //}
    for(int i=0;i<=length;i++){
        hash[arr[i]]+=1;
        
    
    }
   // for(int i=0;i<=11;i++){
    //    cout<<hash[i];
   // }
  // cout<<hash[3];
}



int main(){
int arr[]={1,3,2,1,3};
int hash[13];
int n=5;
cout<<n<<endl;
hashing(arr,hash,n);
int q;
cin>>q;
while(q--){
    int num;
    cin>>num;
    cout<<hash[num]<<endl;
}
    return 0;
}