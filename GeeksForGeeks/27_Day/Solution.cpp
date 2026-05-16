#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        unordered_set<int> st;

        // Step 1: Insert all elements from both arrays into a hash set
        for (int x : a) st.insert(x);
        for (int x : b) st.insert(x);

        // Step 2: Convert set to vector for the result
        return vector<int>(st.begin(), st.end());
    }
};
