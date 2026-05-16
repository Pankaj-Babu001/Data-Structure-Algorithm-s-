#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Efficient implementation of k Queues in a single array of size n.
 * 
 * Time Complexity: O(1) for all operations.
 * Space Complexity: O(N + K).
 */
class kQueues {
private:
    int n, k;
    int *arr;       // Stores actual data
    int *front;     // Stores front indices of k queues
    int *rear;      // Stores rear indices of k queues
    int *next;      // Links elements or free spots
    int freeSpot;   // Head of the free slots list

public:
    /**
     * @brief Initialize the kQueues structure.
     */
    kQueues(int n, int k) {
        this->n = n;
        this->k = k;
        arr = new int[n];
        front = new int[k];
        rear = new int[k];
        next = new int[n];

        // Step 1: Initialize front and rear to -1 (empty)
        for (int i = 0; i < k; i++) {
            front[i] = rear[i] = -1;
        }

        // Step 1: Initialize next array to point to the next free slot
        for (int i = 0; i < n - 1; i++) {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
        freeSpot = 0;
    }

    ~kQueues() {
        delete[] arr;
        delete[] front;
        delete[] rear;
        delete[] next;
    }

    /**
     * @brief Adds element x into the i-th queue.
     */
    void enqueue(int x, int i) {
        // Step 2: Check for overflow
        if (isFull()) return;

        // Get free index
        int index = freeSpot;
        freeSpot = next[index];

        // If queue is empty, update front
        if (front[i] == -1) {
            front[i] = index;
        } else {
            // Otherwise, link the previous rear to this index
            next[rear[i]] = index;
        }

        // Update rear and store element
        next[index] = -1;
        rear[i] = index;
        arr[index] = x;
    }

    /**
     * @brief Removes and returns the front element from the i-th queue.
     */
    int dequeue(int i) {
        // Step 3: Check for underflow
        if (isEmpty(i)) return -1;

        // Get front index
        int index = front[i];
        front[i] = next[index];

        // Recycle the slot back to the free list
        next[index] = freeSpot;
        freeSpot = index;

        return arr[index];
    }

    bool isEmpty(int i) {
        return front[i] == -1;
    }

    bool isFull() {
        return freeSpot == -1;
    }
};
