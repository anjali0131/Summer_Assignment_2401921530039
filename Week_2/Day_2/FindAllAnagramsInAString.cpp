#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> pCount(26,0);
        vector<int> windowCount(26,0);

        if(s.length()<p.length())
        return {};

        for(char ch:p){
            pCount[ch-'a']++;
        }

        int k = p.length();
        for(int i =0; i<k; i++){
            windowCount[s[i]-'a']++;
        }

        vector<int> ans;

        if(pCount==windowCount){
            ans.push_back(0);
        }


        int left=0;
        int right = k;
        while(right < s.length()){

        windowCount[s[left]-'a']--;
        windowCount[s[right]-'a']++;
        left++;
        right++;

        if(pCount == windowCount){
            ans.push_back(left);
        }
    }

    return ans;    
    }

};