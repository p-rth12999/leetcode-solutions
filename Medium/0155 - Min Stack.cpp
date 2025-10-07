#include <vector>

class MinStack {
private:
    // We use two vectors to simulate the two-stack approach.
    std::vector<int> data_vector;
    std::vector<int> min_vector;

public:
    MinStack() {
        // The constructor is empty, no setup needed.
    }

    void push(int val) {
        // Use push_back() to add elements to the end of the vector.
        data_vector.push_back(val);

        // The logic for the min_vector is the same as before.
        // We use back() to see the last element.
        if (min_vector.empty() || val <= min_vector.back()) {
            min_vector.push_back(val);
        }
    }

    void pop() {
        // Before popping, check if the top element is the current minimum.
        if (data_vector.back() == min_vector.back()) {
            // Use pop_back() to remove the last element from the min_vector.
            min_vector.pop_back();
        }

        // Always pop from the main data_vector.
        data_vector.pop_back();
    }

    int top() {
        // Use back() to get the last element, which is the top of our stack.
        return data_vector.back();
    }

    int getMin() {
        // The current minimum is always the last element in the min_vector.
        return min_vector.back();
    }
};
