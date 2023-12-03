#include "strFuncs.h"
#include <cctype>
#include <iostream>

using namespace std;


/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *
 * Palindromes are NOT case-sensitive - "RaCecaR" is a valid palindrome
 *
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
    //STUB: Replace the following with the correct code.
    int start = 0;
    int end = s1.length()-1;
    if(tolower(s1.at(start)) != tolower(s1.at(end))){
        return false;
    } else if(end == s1.length()/2){
        return true;
    }else{
        string temp = s1.substr(1, s1.length()-2);
        return isPalindrome(temp);
    }
}
