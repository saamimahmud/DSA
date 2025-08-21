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
        cout<<"Number is not Prime"<<endl;
    }
    else {
        cout<<"Number is Prime."<<endl;
    }
}
//Optimal approach
void Check_Prime2(int n){
    int count=0;
    for(int i=2;i*i<=n;i++){
        if (n%i==0)
        {
            count =count+1;
        }
    }
    if(count>0){
        cout<<"Number is not Prime"<<endl;
    }
    else{
        cout<<"Number is  Prime"<<endl;
    }
}

int main(){
int n;
cout<<"Enter the number you want to check for Prime :"<<endl;
cin>>n;
Check_Prime1(n);
Check_Prime2(n);
return 0;
}