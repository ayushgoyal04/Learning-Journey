#include <iostream>
#include <queue>
using namespace std;

class Stack {
private:
    queue<int> q;

public:
    // Push x onto the stack
    // Time: O(n), Space: O(1)
    void push(int x) {
        q.push(x);
        int n = q.size();
        // Rotate previous elements to the back
        for (int i = 0; i < n - 1; ++i) {
            q.push(q.front());
            q.pop();
        }
    }

    // Pop the top element from the stack
    // Time: O(1), Space: O(1)
    void pop() {
        if (q.empty()) {
            cout << "Stack Underflow: Cannot pop from empty stack" << endl;
            return;
        }
        q.pop();
    }

    // Return the top element without removing
    // Time: O(1), Space: O(1)
    int top() {
        if (q.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return q.front();
    }

    // Check if the stack is empty
    // Time: O(1)
    bool isEmpty() {
        return q.empty();
    }

    // Return the size of the stack
    // Time: O(1)
    int size() {
        return q.size();
    }
};

// Example usage
int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << endl; // 30
    st.pop();
    cout << "Top after pop: " << st.top() << endl; // 20

    while (!st.isEmpty()) {
        cout << "Popping: " << st.top() << endl;
        st.pop();
    }

    st.pop(); // Underflow case

    return 0;
}
