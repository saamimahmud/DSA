/*
QUESTION-> create the following pattern :
A 
A B
A B C
A B C D
A B C D E


*/

#include<iostream>
#include<string.h>
using namespace std;

void pattern14(int n){
     
    for(int i=1;i<=n;i++){
        char m='A';
        for(int j=1;j<=i;j++){
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
pattern14(n);
    return 0;
}