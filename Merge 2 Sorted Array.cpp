#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    for (int element : a) {
        b.push_back(element);
    }

    unordered_set<int> uniqueSet(b.begin(), b.end());

    // Convert the unique set back to vector
    vector<int> result(uniqueSet.begin(), uniqueSet.end());

    // You can sort the vector if needed
    sort(result.begin(), result.end());

    return result;
}
