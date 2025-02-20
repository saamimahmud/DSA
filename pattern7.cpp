/*

QUESTION-> print the following pattern :

    *
   ***
  *****
 *******
*********

*/
#include<iostream>
using namespace std;

    void pattern7(int n){
        for(int i=0;i<=n-1;i++){
            for(int j=1;j<=n-i-1;j++){
                cout<<" ";
                }
            for(int k=1;k<=2*i+1;k++){
                    cout<<"*";
                }
                
            
            cout<<endl;
        }
    }

int main(){
    int n;
    cout<<"Enter the number of rows : "<<endl;
    cin>>n;
    pattern7(n);


    return 0;
}