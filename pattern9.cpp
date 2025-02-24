/*
QUESTION-> create the following pattern :

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
    
    

*/

#include<iostream>
using namespace std;

 
void pattern9(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    
}
void pattern8(int n){
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i-1;k++){
            cout<<" ";
        }
        for(int j=1;j<=2*n-(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

int main(){
int n;
cout<<"Enter the no. o rows: ";
cin>>n;
pattern9(5);
pattern8(5);

    return 0;
}