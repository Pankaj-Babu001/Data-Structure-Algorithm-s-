#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int maxTime = 0;
        
        // Step 2: Ants moving to the left take 'pos' time to reach 0
        for (int pos : left) {
            maxTime = max(maxTime, pos);
        }
        
        // Step 3: Ants moving to the right take 'n - pos' time to reach n
        for (int pos : right) {
            maxTime = max(maxTime, n - pos);
        }
        
        return maxTime;
    }
};
