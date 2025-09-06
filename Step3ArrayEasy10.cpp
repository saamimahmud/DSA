#include<iostream>
#include<vector>
using namespace std;

//Find the missing number in an array of size n containing numbers from 0 to n
//Brute force approach
//T.C -> O(n^2) & S.C-> O(1);
int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int flag=0;
        int f=0;
        for(int i=0;i<n;i++){
            flag=0;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    flag=1;
                    break;
                }
                
                }
                if(flag==0){
                    return i;
                }
                f=i;

            }
            if(flag!=0){
                return f+1;
            }
        return 0;
    }
    // Better approach using Hashing ......
    //T.C-> O(2n);
    int missingNum2(vector<int> &arr){
        int n=arr.size();
        vector<int> hash(n+1,0);
        for(int i=0;i<n;i++){
            hash[arr[i]]+=1;
        }
        for(int i=0;i<n;i++){
            if(hash[i]==0){
                return i;
            }
        }
        return n;
    }

//Optimal approach using Gauss Formula(sum of N numbers)
//T.C-> O(n);
//S.C-> O(1);
int missingNum3(vector<int> arr){
    int n=arr.size();
    int sum_n=0;
    int sum=0;
    
    sum_n=(n*(n+1))/2;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum_n-sum;
}
// Optimal Solution using XOR ;
//O(n) slightly better optimal solution;;;;
int missingNum4(vector<int> arr){
int xoR1=0;
int xoR2=0;
int n=arr.size();


for(int i=0;i<n;i++){
    xoR2=xoR2^arr[i];
    xoR1=xoR1^(i+1);
}

return xoR1^xoR2;




}

int main (){
vector <int> arr={0,1,2,4,5};

cout<<"Missing number is :  "<<missingNumber(arr);
cout<<endl;
cout<<"Missing number using hashing is :  "<<missingNum2(arr);
cout<<endl;
cout<<"Missing Num using sum of n is : "<<missingNum3(arr);
cout<<endl;
cout<<missingNum4(arr);
    return 0;
}