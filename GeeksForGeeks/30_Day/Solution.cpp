#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areIsomorphic(string s1, string s2) {
        // Step 1: Length check
        if (s1.length() != s2.length()) return false;

        // Step 2: Use two mapping arrays for bidirectional constraint
        // (Assuming 256 for standard ASCII characters)
        int map1[256], map2[256];
        memset(map1, -1, sizeof(map1));
        memset(map2, -1, sizeof(map2));

        // Step 3: Validate one-to-one and onto mapping
        for (int i = 0; i < s1.length(); i++) {
            int c1 = s1[i], c2 = s2[i];

            // If s1[i] is already mapped to something else
            if (map1[c1] != -1 && map1[c1] != c2) return false;
            
            // If s2[i] is already mapped from something else
            if (map2[c2] != -1 && map2[c2] != c1) return false;

            // Establish mapping
            map1[c1] = c2;
            map2[c2] = c1;
        }

        return true;
    }
};
