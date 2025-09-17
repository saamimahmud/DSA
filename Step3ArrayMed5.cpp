#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//Brute Force
void stock1(vector<int> &nums){
    int n=nums.size();
    int maxProfit=0;
    int profit=0;
    int buy=0;
    int sell=0;
    int start=0;
    int end=0;
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        buy=nums[i];
        sell=nums[j];
        if(sell>buy){
            profit=sell-buy;
            
        }
        
        if(profit>maxProfit){
            start=i;
            end=j;
            maxProfit=profit;
        }
        

        }
         
    }
    cout<<maxProfit;
cout<<start+1;
cout<<end+1;
}

//Optimal solution..
//T.C-> O(N) & S.C-> O(1)....
int stock2(vector<int> &nums){
int n=nums.size();
int cost=0;
int minimum=nums[0];
int profit=0;
    for(int i=1;i<n;i++){

        cost=nums[i]-minimum;
        minimum=min(nums[i],minimum);
        profit=max(profit,cost);
    }
    return profit;
}

int main(){
vector<int> arr={7,1,5,3,6,4};
//stock1(arr);
cout<<stock2(arr);
    return 0;
}