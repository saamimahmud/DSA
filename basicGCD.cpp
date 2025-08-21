/*
GCD Brute Force Method
*/

#include<iostream>
using namespace std;
//brute force method
//TC -> O(min(a,b))
void GCD(int a,int b){
    int gcd=0;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    cout<< gcd<<endl;   
}
//better approach
//TC -> O(min(a,b))
void GCD2(int a,int b){
    for(int i=min(a,b);i>=1;i--){
        int gcd=0;
        if(a%i==0&&b%i==0){
            gcd=i;
            cout<<gcd<<endl;
            break;
        }
    }
}
//optimal approach
// using euclideon algorithm also insted of gcd(a,b)=gcd(a-b,b)........ we will do Greater%Smaller.
//TC => O(logphi(min(a,b)))
void GCD3(int a,int b){
    int gcd=0;
    while(a!=0&&b!=0){
        if(a>b){//a=52,b=10
            a=a%b;//a=52%10=>a=2
        }
        else{
            b=b%a;//b=10%2=b=0
        }
    }
    if(b==0){
        cout<<a<<endl;
    }
    if(a==0){
        cout<<b<<endl;
    }
   
}
int main(){
    GCD(52,10);
    GCD2(25,5);
    GCD3(52,10);
return 0;
}

