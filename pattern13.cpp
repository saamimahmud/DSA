/*
QUESTION-> create the following pattern :

1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include<iostream>
using namespace std;

void pattern13(int n){
    int m=1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            cout<<m<<" ";
            m=m+1;
        }    
        cout<<endl;
    }
}
int main(){
int n;
cout<<"Enter the no. of rows: "<<endl;
cin>>n;
pattern13(n);
    return 0;
}