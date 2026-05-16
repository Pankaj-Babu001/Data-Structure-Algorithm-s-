#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long int inversionCount(vector<int> &arr) {
        int n = arr.size();
        if (n <= 1) return 0;
        vector<int> temp(n);
        return mergeSort(arr, temp, 0, n - 1);
    }

private:
    // Step 2: Merge logic that calculates inversions
    long long int merge(vector<int> &arr, vector<int> &temp, int left, int mid, int right) {
        long long int count = 0;
        int i = left, j = mid + 1, k = left;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                // Inversion found: all elements in left[i...mid] are > arr[j]
                temp[k++] = arr[j++];
                count += (mid - i + 1);
            }
        }

        while (i <= mid) temp[k++] = arr[i++];
        while (j <= right) temp[k++] = arr[j++];
        for (i = left; i <= right; i++) arr[i] = temp[i];

        return count;
    }

    long long int mergeSort(vector<int> &arr, vector<int> &temp, int left, int right) {
        long long int count = 0;
        if (left < right) {
            int mid = left + (right - left) / 2;
            count += mergeSort(arr, temp, left, mid);
            count += mergeSort(arr, temp, mid + 1, right);
            count += merge(arr, temp, left, mid, right);
        }
        return count;
    }
};
