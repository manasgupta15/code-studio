
This is a [link](https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf) to Example.


#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int maxElement = arr[0];

    // Iterate through the array starting from the second element
    for (int i = 1; i < n; i++) {
        // Update maxElement if the current element is greater
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    // Return the largest element
    return maxElement;
}
