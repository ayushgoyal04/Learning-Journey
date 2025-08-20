#include <bits/stdc++.h>
using namespace std;

// Returns precedence of operators
int priority(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0; // for '(' or non-operator
}

// Checks if character is an operator
bool isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

// Converts infix expression to postfix expression
// Time Complexity: O(n), Space Complexity: O(n)
string infixToPostfix(const string& s) {
    stack<char> st;       // stack to hold operators and parentheses
    string ans = "";      // resulting postfix expression

    for (int i = 0; i < s.length(); ++i) {
        char ch = s[i];

        // Operand: append directly
        if (isalnum(ch)) {
            ans += ch;
        }
        // Left parenthesis
        else if (ch == '(') {
            st.push(ch);
        }
        // Right parenthesis: pop until '(' is found
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop(); // discard '('
        }
        // Operator: manage precedence
        else {
            while (!st.empty() &&
                  ((priority(ch) < priority(st.top())) ||
                   (priority(ch) == priority(st.top()) && ch != '^')) &&
                   st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    // Pop remaining operators
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    return ans;
}

// Infix to Prefix
string infixToPrefix(string s) {
    // Step 1: Reverse the infix expression
    reverse(s.begin(), s.end());

    // Step 2: Swap '(' with ')' and vice versa
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') s[i] = ')';
        else if (s[i] == ')') s[i] = '(';
    }

    // Step 3: Convert reversed infix to postfix
    string postfix = infixToPostfix(s);

    // Step 4: Reverse the postfix to get prefix
    reverse(postfix.begin(), postfix.end());

    return postfix;
}

// Prefix to Postfix
string prefixToPostfix(string s) {
    stack<string> st;

    // Traverse from right to left
    for (int i = s.length() - 1; i >= 0; --i) {
        char ch = s[i];

        if (isalnum(ch)) {
            // Operand: push as string
            st.push(string(1, ch));
        } else if (isOperator(ch)) {
            // Operator: pop two operands
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();
            string temp = op1 + op2 + ch;
            st.push(temp);
        }
    }

    return st.top();
}

// Prefix to Infix
string prefixToInfix(string s) {
    stack<string> st;

    // Traverse from right to left
    for (int i = s.length() - 1; i >= 0; --i) {
        char ch = s[i];

        if (isalnum(ch)) {
            st.push(string(1, ch));
        } else if (isOperator(ch)) {
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();
            string temp = "(" + op1 + ch + op2 + ")";
            st.push(temp);
        }
    }

    return st.top();
}

// Postfix to Prefix
string postfixToPrefix(string s) {
    stack<string> st;

    for (int i = 0; i < s.length(); ++i) {
        char ch = s[i];

        if (isalnum(ch)) {
            st.push(string(1, ch));
        } else if (isOperator(ch)) {
            string op2 = st.top(); st.pop();
            string op1 = st.top(); st.pop();
            string temp = ch + op1 + op2;
            st.push(temp);
        }
    }

    return st.top();
}

// Postfix to Infix
string postfixToInfix(string s) {
    stack<string> st;

    for (int i = 0; i < s.length(); ++i) {
        char ch = s[i];

        if (isalnum(ch)) {
            st.push(string(1, ch));
        } else if (isOperator(ch)) {
            string op2 = st.top(); st.pop();
            string op1 = st.top(); st.pop();
            string temp = "(" + op1 + ch + op2 + ")";
            st.push(temp);
        }
    }

    return st.top();
}


// Main function to test all conversions
int main() {
    string s = "a+b*(c^d-e)^(f+g*h)-i";

    cout << "Infix Expression: " << s << endl;

    string postfix = infixToPostfix(s);
    cout << "Postfix Expression: " << postfix << endl;

    string prefix = infixToPrefix(s);
    cout << "Prefix Expression: " << prefix << endl;

    cout << "Prefix -> Postfix: " << prefixToPostfix(prefix) << endl;
    cout << "Prefix -> Infix  : " << prefixToInfix(prefix) << endl;
    cout << "Postfix -> Prefix: " << postfixToPrefix(postfix) << endl;
    cout << "Postfix -> Infix : " << postfixToInfix(postfix) << endl;

    return 0;
}
