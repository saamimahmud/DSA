#include<iostream>
#include<map>
using namespace std;

void Hmap(int arr[],int n){
    map<int,int> mpp;
    for(int i=0;i<=n;i++){
        mpp[arr[i]]+=1;
    }
    


}


int main(){
int n;
cout<<"Enter the number of elements you would like to have as input : "<<endl;
cin>>n;
int arr[n];
cout<<"Now enter the elements : "<<endl;
for(int i=0;i<=n;i++){
    cin>>arr[i];
}

    return 0;

}