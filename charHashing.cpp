#include<iostream>
using namespace std;
// Wokrs for lowercase as well as upper case;
void charHashing(string s,int hash[]){
    
    int length=s.length();
    for(int i=0;i<=length;i++){
        hash[s[i]]+=1;
    }
}
//works only for lower case....
void lowercharHashing(){
    int hash[26]={0};
    string s;
    int q;
    char ask;
    cout<<"Enter the string : "<<endl;
    cin>>s;
    
    int length=s.size();
    for(int i=0;i<=length;i++){
        hash[s[i]-'a']+=1;
    }
    cout<<" Enter the number off queries you would like to ask : "<<endl;
    cin>>q;
    while(q--){
        cout<<"Enter the char whose frequency you would like to know : "<<endl;
        cin>>ask;
       cout<<ask<<" occurs "<< hash[ask-'a']<<" times "<<endl;
        
}
}


int main(){
    int hash[256]={0};
    string s;
    int q;
    char ask;
    cout<<"Enter the string : "<<endl;
    cin>>s;
    
    charHashing(s,hash);

    cout<<" Enter the number off queries you would like to ask : "<<endl;
    cin>>q;
    while(q--){
        cout<<"Enter the char whose frequency you would like to know : "<<endl;
        cin>>ask;
       cout<<ask<<" occurs "<< hash[ask]<<" times "<<endl;
        
    }
    return 0;
}