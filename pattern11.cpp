/*
QUESTION-> create the following pattern :


    
    

*/

#include<iostream>
using namespace std;

void pattern12(int n){
    int m=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                
            }
            cout<<m;
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