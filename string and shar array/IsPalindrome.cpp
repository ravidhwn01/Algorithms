#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char toLowerCase(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        return ch + 32;
    }
    return ch;
    // if(ch>='a'&&cg,='z')
    // {
    //     return 0;
    // }
    // else
    // {char temp = ch -'A' +'a';
    // return temp;
    // }
}
bool isPalindrome(string s ,int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(toLowerCase(s[i])!=toLowerCase(s[j])){
            return 0;
        }
        i++;
        j--;
    }
    return 1;

}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    cout<<isPalindrome(s,n);
    return 0;
}