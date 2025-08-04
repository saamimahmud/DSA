/*
GCD Brute Force Method
*/

#include<iostream>
using namespace std;

int GCD(int a,int b){
    int gcd=0;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    return gcd;
    
}
int main(){
    int a=5;
    int b=25;
    int result = GCD(a,b);
    cout<<result;
    return 0;
}