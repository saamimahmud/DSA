#include<iostream>
using namespace std;

//print 1 to n.

void fn(int n,int count){
if(count<n){
    cout<<count<<endl;
    count++;
    fn(n,count);
}
}

int main(){
int n;
int count =0;
cout<<"Enter the last number till you want to print : ";

cin>>n;
fn(n,count);
    return 0;
}