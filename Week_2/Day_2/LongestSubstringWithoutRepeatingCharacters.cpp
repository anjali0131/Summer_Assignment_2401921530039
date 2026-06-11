#include <iostream>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count[256]={0};
        int maxLen = 0;
        int i = 0;
        for(int j=0; j<s.size(); j++){
            count[s[j]]++;

            while(count[s[j]]>1){
                count[s[i]]--;
                i++;
            }

            maxLen = max(maxLen, j-i+1);

        }
        return maxLen ;
        
    }
};