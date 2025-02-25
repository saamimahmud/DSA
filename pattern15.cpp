/*
QUESTION-> create the following pattern :

A B C D E 
A B C D
A B C
A B
A

*/

#include<iostream>
using namespace std;

void pattern15(int n){
     
    for(int i=1;i<=n;i++){
        char m='A';
        for(int j=1;j<=n-i+1;j++){
            cout<<m<<" ";
            m=m+1;
            char m='A';
        }    
        cout<<endl;
    }
}
int main(){
int n;
cout<<"Enter the no. of rows: "<<endl;
cin>>n;
pattern15(n);
    return 0;
}