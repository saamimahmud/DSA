#include<iostream>
using namespace std;
//brute force
void Check_Prime1(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count=count+1;
        }
    }
    if (count>0){
        cout<<"Number is not Prime";
    }
    else {
        cout<<"Number is Prime.";
    }
}

int main(){
int n;
cout<<"Enter the number you want to check for Prime :";
cin>>n;
Check_Prime1(n);

return 0;
}