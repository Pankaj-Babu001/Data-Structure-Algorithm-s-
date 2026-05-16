#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Solution.cpp"

using namespace std;


void printVector(const vector<int>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i] << (i == vec.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
}

int main() {
    Solution sol;
    
    // Test Case 1
    cout << "--- Test Case 1 ---" << endl;
    vector<int> nums1 = {1, 2, 3};
    cout << "Input:  "; printVector(nums1);
    vector<int> result1 = sol.largestDivisibleSubset(nums1);
    cout << "Output: "; printVector(result1);
    cout << "Expected: [1, 2] or [1, 3]" << endl << endl;

    // Test Case 2
    cout << "--- Test Case 2 ---" << endl;
    vector<int> nums2 = {1, 2, 4, 8};
    cout << "Input:  "; printVector(nums2);
    vector<int> result2 = sol.largestDivisibleSubset(nums2);
    cout << "Output: "; printVector(result2);
    cout << "Expected: [1, 2, 4, 8]" << endl << endl;

    // Test Case 3
    cout << "--- Test Case 3 ---" << endl;
    vector<int> nums3 = {4, 8, 10, 240};
    cout << "Input:  "; printVector(nums3);
    vector<int> result3 = sol.largestDivisibleSubset(nums3);
    cout << "Output: "; printVector(result3);
    cout << "Expected: [4, 8, 240]" << endl << endl;

    // Test Case 4 (Edge case: single element)
    cout << "--- Test Case 4 ---" << endl;
    vector<int> nums4 = {5};
    cout << "Input:  "; printVector(nums4);
    vector<int> result4 = sol.largestDivisibleSubset(nums4);
    cout << "Output: "; printVector(result4);
    cout << "Expected: [5]" << endl << endl;

    return 0;
}
