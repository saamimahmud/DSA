/*

QUESTION-> print the following pattern :

* * * * * 
* * * *
* * *
* *
*

*/
#include<iostream>
using namespace std;

    void pattern5(int n){
        for(int i=n;i>=1;i--){
            for(int j=i;j>=1;j--){
                cout<<"* ";
            }
            cout<<endl;
        }
    }

    void pattern52(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }

int main(){
    int n;
    cout<<"Enter the number of rows : "<<endl;
    cin>>n;
    pattern5(n);


    return 0;
}