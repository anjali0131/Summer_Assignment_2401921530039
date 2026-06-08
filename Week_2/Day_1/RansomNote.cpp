#include<iostream>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26] = {0};

        if(ransomNote.size() > magazine.size())
    return false;
      
        for(char ch : magazine)
        count[ch-'a']++;;

        for(char ch : ransomNote){
        if(--count[ch-'a']<0)
        return false;
        }

        return true;
        
    }
};