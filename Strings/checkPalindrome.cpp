#include <iostream>
#include <algorithm>
#include <cctype>  // for isalnum and tolower
#include <string>
using namespace std;

bool isPalindrome(string str) {
    string temp = str;
    reverse(temp.begin(), temp.end());
    if (str == temp) {
        cout << "it is palindrome" << endl;
        return true;
    } else {
        cout << "not a palindrome" << endl;
        return false;
    }
}

bool alphaNumeric(char ch) {
    return isalnum(ch);  // correct and cleaner
}

bool checkPalindrome(string s) {
    int st = 0, end = s.length() - 1;

    while (st < end) {
        // skip non-alphanumeric characters
        while (st < end && !alphaNumeric(s[st])) st++;
        while (st < end && !alphaNumeric(s[end])) end--;

        if (tolower(s[st]) != tolower(s[end]))
            return false;

        st++;
        end--;
    }

    return true;
}

int main() {
    string str1 = "aditi";
    isPalindrome(str1);  // simple reverse check

    string str2 = "A man, a plan, a canal: Panama";
    if (checkPalindrome(str2))
        cout << "Valid palindrome (ignoring symbols, case)" << endl;
    else
        cout << "Not a valid palindrome" << endl;

    return 0;
}
