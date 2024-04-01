#include<bits/stdc++.h>
string minSubstring(string &s, string &t)
{
    // Write your code here.
     int n = s.length();
        if(t.length() > s.length()) return "";

        unordered_map<char,int>mp;

        // store karlia
        for(char &ch : t) {
            mp[ch]++;
        }

        int requiredCount = t.length();
        int i = 0, j = 0;

        int minWindowSize = INT_MAX;
        int start_i = 0;


        // story start
        while(j < n) {
            char ch = s[j];

            if(mp[ch] > 0) {
                requiredCount--;
            }

            mp[ch]--;

            while(requiredCount == 0) {
                // start shrinking the window
                int currentWindowSize = j-i+1;
                if(minWindowSize > currentWindowSize) {
                    minWindowSize = currentWindowSize;
                    start_i = i;
                }

                mp[s[i]]++;
                if(mp[s[i]] > 0) {
                    requiredCount++;
                }

                i++;
            }

            j++;
        }
        return minWindowSize == INT_MAX ? "" : s.substr(start_i,minWindowSize);
}
