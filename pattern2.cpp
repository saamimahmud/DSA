/*
QUESTION-> print the following pattern :

* 
* *
* * *
* * * *
* * * * *


*/

#include<iostream>
using namespace std;
    void pattern2(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }



int main(){
    int n;
    cout<<"Enter the number of rows : "<<endl;
    cin>>n;
    pattern2(5);
    return 0;
}