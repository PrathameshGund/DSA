#include <iostream>

using namespace std;

class stack {
public:
    int size;
    int* arr;
    int top;

    stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if (top == size - 1) {
            cout << "Stack is full" << endl;
        }
        else {
            top++;
            arr[top] = element;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        }
        else {
            top--;
        }
    }

    int peek() {
        if (top >= 0 && top < size) {
            return arr[top];
        }
        else {
            cout << "Stack is empty" << endl;
            return -1; // Return a sentinel value to indicate an error
        }
    }

    bool isEmpty() {
        return (top == -1);
    }
};

int main() {
    stack st(5);
    st.push(22);
    st.push(42);
    st.push(6);
    st.push(4);
    st.push(5);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;

    return 0;
}
