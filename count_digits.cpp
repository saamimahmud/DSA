#include<iostream>
using namespace std;
int count_digits(int n){
    int count=0;
    while(n!=0){
        
        n=n/10;
        count=count+1;

    }
    return count;
}
int main(){
    int p=count_digits(2354);
    cout<<"Number of digits == "<<p;
    return 0;
}
