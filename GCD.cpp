/*
GCD Brute Force Method
*/

#include<iostream>
using namespace std;
//brute force method
int GCD(int a,int b){
    int gcd=0;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    return gcd;   
}
//better approach
void GCD2(int a,int b){
    for(int i=min(a,b);i>=1;i--){
        int gcd=0;
        if(a%i==0&&b%i==0){
            gcd=i;
            cout<<gcd;
            break;
        }
    }
}
int main(){
    int a=5;
    int b=25;
    int result = GCD(a,b);
    cout<<result<<endl;
    GCD2(25,5);
    return 0;
}

