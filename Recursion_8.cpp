#include<iostream>
using namespace std;
//Check if a string is a palindrome or not;

string Check_Palindrome(string s){//Normal loop approach
int start=0;
int end= s.length()-1;
    while (start<=end&&end>=start)
    {
        if(tolower(s[start])==tolower(s[end])){
            
            start++;
            end--;
        }
        else{
           return "Not a palindrom.";
        }
        
    }
    return "The input string is a palindrome.";
       
}

string CheckPalindrome_rec(string s,int start,int end){
    if(start<=end&&end>=start){
        if(s[start]==s[end]){
            CheckPalindrome_rec(s,start+1,end-1);
        }else {
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

  cout<<CheckPalindrome_rec(s,0,s.length()-1);
    

    return 0;

}