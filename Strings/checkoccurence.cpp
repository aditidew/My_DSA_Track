#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;


string removeOccurence(string s, string part){
    while(s.length()> 0 && s.find(part)< s.length()){
        s.erase(s.find(part), part.length());
    }

    return s;
}

int main(){
    cout<< removeOccurence("abcuhabcnhagyaabcbs", "abc");
}