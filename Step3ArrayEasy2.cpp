#include<iostream>
#define INT_MIN (-2147483647 - 1)
#define INT_MAX (2147483647)
using namespace std;
//Find second largest num in array without sorting ;

/* T.C -> O(2N);
void SecLargNum(int arr[],int n,int maxVal){
int secLarg=INT_MIN;
    for(int i=1;i<n;i++){
   if(arr[i]>maxVal){
    maxVal=arr[i];
   }
}

for(int i=0;i<=n-1;i++){
if(arr[i]<maxVal&&arr[i]>secLarg){
    secLarg=arr[i];
}
}
cout<<secLarg;

}
*/
void SecSmallest(int arr[],int n, int maxVal){
    int sSmallest=INT_MAX;
    int smallest=maxVal;

    for(int i=1;i<=n-1;i++){
        if(arr[i]<smallest){
            sSmallest=smallest;
            smallest=arr[i];
            
        }
        else if(arr[i]>smallest&&arr[i]<sSmallest){
            sSmallest=arr[i];
        }
    }
    cout<<sSmallest;
}

void SecLargeNumbetter(int arr[],int n,int maxVal){
int secLarg=INT_MIN;
    for(int i=1;i<=n-1;i++){
        if(arr[i]>maxVal){
            secLarg=maxVal;
            maxVal=arr[i]; 
        }
        else if(arr[i]<maxVal&&arr[i]>secLarg){
            secLarg=arr[i];
        }
    }
    cout<<secLarg;
}


int main(){


int min=INT_MIN;
int arr[]={2,1,6,3,5};
int n=sizeof(arr)/sizeof(arr[0]);
int maxVal=arr[0];
//SecLargNum(arr,n,maxVal);
SecLargeNumbetter(arr,n,maxVal);
SecSmallest(arr,n,maxVal);

    return 0;
}
