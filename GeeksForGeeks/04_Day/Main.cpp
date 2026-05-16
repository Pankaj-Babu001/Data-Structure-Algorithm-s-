#include <iostream>
#include <vector>
#include <string>
#include "Solution.cpp"

using namespace std;

/**
 * 🚀 [04. Implement k Queues in a Single Array] — Test Suite
 */

void runTest(int id, string action, bool result, bool expected) {
    cout << "  🔹 Test Case #" << id << " [" << action << "]: ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED (Expected: " << (expected ? "true" : "false") << ", Got: " << (result ? "true" : "false") << ")" << endl;
    }
}

void runValTest(int id, string action, int result, int expected) {
    cout << "  🔹 Test Case #" << id << " [" << action << "]: ";
    if (result == expected) {
        cout << "✅ PASSED" << endl;
    } else {
        cout << "❌ FAILED (Expected: " << expected << ", Got: " << result << ")" << endl;
    }
}

int main() {
    cout << "\n🔢 [04. Implement k Queues in a Single Array] — Test Suite\n";
    cout << "--------------------------------------------------------\n";

    kQueues ks(4, 2);

    // Sequence of operations based on Example 1
    ks.enqueue(5, 0); // Q0: [5]
    ks.enqueue(3, 0); // Q0: [5, 3]
    ks.enqueue(1, 1); // Q1: [1]
    
    runValTest(1, "dequeue(0)", ks.dequeue(0), 5); // Returns 5, Q0: [3]
    
    ks.enqueue(4, 1); // Q1: [1, 4]
    ks.enqueue(1, 0); // Q0: [3, 1]
    
    runTest(2, "isEmpty(1)", ks.isEmpty(1), false);
    runTest(3, "isFull()", ks.isFull(), true);

    // Extra case: dequeue until empty
    ks.dequeue(0); // 3
    ks.dequeue(0); // 1
    runTest(4, "isEmpty(0) after clearing", ks.isEmpty(0), true);

    cout << "--------------------------------------------------------\n";
    cout << "🏁 Test Execution Complete!\n" << endl;

    return 0;
}
