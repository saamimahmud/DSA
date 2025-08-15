#include<iostream>
using namespace std;
//Check if a string is a palindrome or not;

string Check_Palindrome(string s){
int start=0;
int end= s.length()-1;
    while (start<=end&&end>=start)
    {
        if(s[start]==s[end]){
            
            start++;
            end--;
        }
        else{
           return "Not a palindrom.";
        }
        
    }
    return "The input string is a palindrome.";
       
}



int main(){
    string s;
cout<<"Enter the String : ";
cin>>s;

  cout<<Check_Palindrome(s);

    

    return 0;

}