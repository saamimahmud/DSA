#include<iostream>
using namespace std;
//Fibonacci series ..... 0 1 1 2 3 5 8 13;
void Fibo(int x){
int arr[x];
arr[0]=0;
arr[1]=1;
int i=0;
while(i!=x){
    arr[i+2]=arr[i]+arr[i+1];
    i++;
}
for(int i=0;i<=x;i++){
    cout<<arr[i];
}


}
void PrintSeries(int arr[],int x){
    for(int i=0;i<=x;i++){
        cout<<arr[i];
    }
}
void Fib_Rec(int x,int p1,int p2,int count){
    
    
   int p3=p1+p2;
   if (p1==0&&p2==1){
    cout<<p1;
   cout<<p2;
   }
    if(count<x){
   
   
   cout<<p3;
   count=count+1;;
   
   Fib_Rec(x,p2,p3,count);
    }
   
}
int main(){
int x=5;
Fibo(x);
cout<<endl;
Fib_Rec(x,0,1,1);

    return 0;
}