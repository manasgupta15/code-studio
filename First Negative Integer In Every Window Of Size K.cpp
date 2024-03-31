#include <bits/stdc++.h> 
vector<int> firstNegativeInteger(vector<int> &arr, int k, int n)
{
    list<int> dll; //You can use queue, dequeue etc as well
    vector<int> result;
    int i = 0, j = 0;
    
    while(j < n) {
        if(arr[j] < 0)
            dll.push_back(arr[j]);
        
        if(j-i+1 == k) {
            int neg = dll.empty() ? 0 : dll.front();
            result.push_back(neg);
            if(arr[i] < 0 && !dll.empty()) {
                dll.pop_front();
            }
            i++;
        }
        j++;
    }
    return result;
    //Write your code here

}

