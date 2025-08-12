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
//optimal approach
void GCD3(int a,int b){
    int gcd=0;
    int left_var;
    int right_var;
    int result;
    left_var=max(a,b);
    right_var=min(a,b);
    while(a!=0&&b!=0){
        
        a=max(a,b)-min(a,b);
        b=min(a,b);
    }
    cout<<a,b;
}
int main(){
    int a=5;
    int b=25;
    int result = GCD(a,b);
    cout<<result<<endl;
    GCD2(25,5);
    GCD3(25,5);
    return 0;
}

