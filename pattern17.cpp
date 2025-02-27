/*
QUESTION-> create the following pattern :

     A     
    ABA    
   ABCBA   
  ABCDCBA  
 ABCDEDCBA 
ABCDEFEDCBA


*/

#include<iostream>
using namespace std;

void pattern17(int n){
    char var='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        for(int k=1;k<=n;k++){
            cout<<var;
            var++;
        }
        cout<<endl;
    }
    
}


int main (){
int n;
pattern17(5);
    return 0;
}