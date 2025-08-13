#include<iostream>
using namespace std;

//print n to 1.

void fn(int n){
if(n>=0){
    cout<<n<<endl;
    n--;
    fn(n);
}
}

int main(){
int n=0;
int count=0;

cout<<"Enter the last number till you want to print : ";

cin>>n;


fn(n);
    return 0;
}