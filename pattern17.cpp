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
    
    for(int i=1;i<=n;i++){
        char var='A';
        for(int j=1;j<=n-i+1;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<var;
            
            if(k>=i){
                var--;
            }
            else{
                var++;
            }
        }
        cout<<endl;
    }
}

int main (){
int n;
cout<<"Enter the number of rows : ";
cin>>n;
pattern17(n);
    return 0;
}