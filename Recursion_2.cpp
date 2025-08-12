#include<iostream>
using namespace std;

//print name n times.

void fn(int n,string name,int count){
if(count<n){
    cout<<name<<endl;
    count++;
    fn(n,name,count);
}
}

int main(){
string name;
int n;
int count =0;
cout<<"Enter the name and the number of times you want to print it : ";
cin>>name;
cin>>n;
fn(n,name,count);
    return 0;
}