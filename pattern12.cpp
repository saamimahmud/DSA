/*
QUESTION-> create the following pattern :

1          1
12        21
123      321
1234    4321
12345  54321
123456654321

*/

#include<iostream>
using namespace std;

void pattern12(int n){
    
    for(int i=1;i<=n;i++){
        int m=i;
        for(int j=1;j<=i;j++){
            cout<<j;
        }    
    
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
           
            cout<<m;
            m=m-1;            
        }  
        cout<<endl;
    }
}
int main(){
int n;
cout<<"Enter the no. of rows: "<<endl;
cin>>n;
pattern12(n);
    return 0;
}