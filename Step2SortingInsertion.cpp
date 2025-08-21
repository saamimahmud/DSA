#include<iostream>
using namespace std;
//{3,15,6,9,2,8}

void insertionSort(int n,int arr[]){
int j=0;
for(int i=1;i<=n-1;i++){
    j=i;
    while(j>0&&arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
    }
}

}


int main() {
//Size of array;
int n;
cout<<"Enter the size of array : "<<endl;
cin>>n;
int arr[n];
//Taking elements of array from the user;
cout<<"Enter the elements of array one by one : "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
insertionSort(n,arr);
for(int i=0;i<=n-1;i++){
    cout<<arr[i]<<" " ;
}
    return 0;
}