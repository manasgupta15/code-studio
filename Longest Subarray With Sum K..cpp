#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    map<int, int> m;
    int l = 0;
    int sum = 0;

    // Initialize the map with a sum of 0 at index -1
    m[0] = -1;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        // Check if (sum - k) is present in the map
        if (m.find(sum - k) != m.end()) {
            l = max(l, i - m[sum - k]);
        }

        // If sum is not in the map, store it with its index
        if (m.find(sum) == m.end()) {
            m[sum] = i;
        }
    }

    return l;
}
