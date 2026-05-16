#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextPalindrome(vector<int> num) {
        int n = num.size();
        bool allNine = true;
        for (int x : num) if (x != 9) { allNine = false; break; }

        if (allNine) {
            vector<int> res(n + 1, 0);
            res[0] = res[n] = 1;
            return res;
        }

        vector<int> res = num;
        int mid = n / 2;
        int i = mid - 1, j = (n % 2 == 0) ? mid : mid + 1;

        while (i >= 0 && res[i] == res[j]) { i--; j++; }

        bool leftSmaller = (i < 0 || res[i] < res[j]);

        // Mirror
        for (int k = 0; k < n / 2; k++) res[n - 1 - k] = res[k];

        if (leftSmaller) {
            int carry = 1;
            int lp = mid - 1, rp = (n % 2 == 0) ? mid : mid + 1;

            if (n % 2 == 1) {
                res[mid] += carry;
                carry = res[mid] / 10;
                res[mid] %= 10;
            }

            while (lp >= 0) {
                res[lp] += carry;
                carry = res[lp] / 10;
                res[lp] %= 10;
                res[rp++] = res[lp--];
            }
        }
        return res;
    }
};