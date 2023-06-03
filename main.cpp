#include <iostream>
#include <stack>

bool checkEqual(std::stack<int>& stack1, std::stack<int>& stack2) {
    if (stack1.size() != stack2.size()) {
        return false;
    }

    while (!stack1.empty()) {
        if (stack1.top() != stack2.top()) {
            return false;
        }

        stack1.pop();
        stack2.pop();
    }

    return true;
}

int main() {
    std::stack<int> stack1;
    std::stack<int> stack2;

    stack1.push(2);
    stack1.push(2);
    stack1.push(4);

    stack2.push(1);
    stack2.push(2);
    stack2.push(3);

    if (checkEqual(stack1, stack2)) {
        std::cout << "Kedua stack memiliki nilai yang sama." << std::endl;
    } else {
        std::cout << "Kedua stack tidak memiliki nilai yang sama." << std::endl;
    }

    return 0;
}