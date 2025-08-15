#include<iostream>
using namespace std;
//Check if a string is a palindrome or not;

bool Check_Palindrome(string s){
int start=0;
int end= s.length();
    while (start<=end&&end>=start)
    {
        if(s[start]==s[end]){
            return true;
            start++;
            end--;
        }
        else return false;
    }
    
}



int main(){
    string s;
cout<<"Enter the String : ";
cin>>s;
if(Check_Palindrome(s)==true){
    cout<<"The input string is a palindrome.";
}
else{
    cout<<"Not a palindrom.";
}
    return 0;

}