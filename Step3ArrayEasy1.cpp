//Largest Element in an Array
#include <iostream>
using namespace std;
//T.C -> O(n);
int LargestNum(int arr[],int length){
    int maxVal =arr[0];
    for(int i=1;i<=length-1;i++){
        if(arr[i]>maxVal){
            maxVal=arr[i];
        }

    }
    
    return maxVal;

}

int main(){
int arr[]={5,2,1,1,2};
int length=sizeof(arr)/sizeof(arr[0]);
cout<<LargestNum(arr,length);

return 0;

}