#include<bits/stdc++.h>

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    map<int, int> m;
    int l = 0;
    int sum = 0;

    // Initialize the map with a sum of 0 at index -1
    m[0] = -1;

    for (int i = 0; i < a.size(); i++) {
        sum += a[i];

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
