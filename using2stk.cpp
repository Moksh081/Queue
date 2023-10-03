// Queue using 2 stacks 

/*
#include <iostream>
#include <stack>

using namespace std;

class Queue {
private:
    stack<int> s1;
    stack<int> s2;

public:
    void enqueue(int x);
    int dequeue();
    bool isEmpty();
};

void Queue::enqueue(int x) {
    s1.push(x);
}

int Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return -1;
    }

    // Transfer elements from s1 to s2, reversing their order
    while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }

    // Get the front element from s2
    int frontElement = s2.top();
    s2.pop();

    // Transfer elements back from s2 to s1
    while (!s2.empty()) {
        s1.push(s2.top());
        s2.pop();
    }

    return frontElement;
}

bool Queue::isEmpty() {
    return s1.empty();
}

int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << q.dequeue() << endl; // Output: 1
    cout << q.dequeue() << endl; // Output: 2

    q.enqueue(4);

    cout << q.dequeue() << endl; // Output: 3
    cout << q.dequeue() << endl; // Output: 4

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl; // Output: Yes

    return 0;
}
*/


