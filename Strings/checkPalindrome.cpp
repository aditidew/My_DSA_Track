#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

bool isPalindrome(string str){
    string temp= str;
    reverse(temp.begin(), temp.end());
    if(str== temp){
       cout<< "it is palindrome";
       return 1;
    }

    else{
         return 0;
    }
}



int main(){
    string str1= "aditi";
    isPalindrome(str1);
   

    return 0;
}