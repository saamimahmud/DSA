/*
QUESTION-> create the following pattern :


    
    

*/

#include<iostream>
using namespace std;

void pattern10(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }    
    
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=n-i+1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}



int main(){
int n;
cout<<"Enter the no. of rows: "<<endl;
cin>>n;
pattern10(n);


    return 0;
}