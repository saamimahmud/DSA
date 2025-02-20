/*

QUESTION-> print the following pattern :

12345
1234
123
12
1

*/
#include<iostream>
using namespace std;

    void pattern6(int n){
        for(int i=1;i<=n;i++){
            for(int j=n;j>=i;j--){
                cout<<n-j+1;
            }
            cout<<endl;
        }
    }

int main(){
    int n;
    cout<<"Enter the number of rows : "<<endl;
    cin>>n;
    pattern6(n);


    return 0;
}