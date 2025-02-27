/*
QUESTION-> create the following pattern :

A 
B B
C C C
D D D D
E E E E E

*/

#include<iostream>
using namespace std;

void pattern16(int n){
     char m='A';
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            cout<<m<<" ";
            
            
        }   
        m=m+1; 
        cout<<endl;
    }
}
int main(){
int n;
cout<<"Enter the no. of rows: "<<endl;
cin>>n;
pattern16(n);
    return 0;
}