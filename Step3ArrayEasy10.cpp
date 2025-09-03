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

int main (){
vector <int> arr1={1,5,0,3,4};


cout<<"Missing number is :  "<<missingNumber(arr1);


    return 0;
}