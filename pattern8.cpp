/*
QUESTION-> create the following pattern :

*********
 *******
  *****
   ***
    *

*/

#include<iostream>
using namespace std;

void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
        cout<<" ";
    }
        for(int k=0;k<2*n-(2*i+1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
int n; 
cout<<"Enter the no. of rows : ";
cin>>n;
pattern8(n);


    return 0;
}