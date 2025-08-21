#include<iostream>
using namespace std;
//Bubble Sort;
//N = 6, array[] = {13,46,24,52,20,9}
//T.C -> O(n*n) |||| to better its T.C we can add a condition that if the first iteration goes without any swapping that means the array is already sorted.
// giving a T.c of O(n),
void bubbleSort(int n,int arr[]){
int count =0;
    for(int i=n-1;i>=0;i--){
        for (int j = 1; j <=i; j++)
        {
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                count ++;
            }
        }
        if(count ==0){
            break;
        }
    }
}


int main(){
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
//calling the bubble sort fn which takes the array size and the array that the user gave as its parameter and the array becomes sorted;
bubbleSort(n,arr);
//Printing the sorted array;
for(int i=0;i<=n-1;i++){
    cout<<arr[i]<<" " ;
}


    return 0;

}
