//queue using ld
/*
 #include <iostream>
#include <cstdlib> // For memory allocation

using namespace std;

class node {
public:
    int data;
    node* next;
};

node* front = NULL;
node* rear = NULL;

class queue {
private:
    int size;

public:
    void enqueue(int x);
    int dequeue();
    bool isEmpty();
};

void queue::enqueue(int x) {
    node* t = new node;
    if (t == NULL) {
        cout << "Queue is full" << endl;
    } else {
        t->data = x;
        t->next = NULL;
        if (front == NULL) {
            front = t;
            rear = t;
        } else {
            rear->next = t;
            rear = t;
        }
    }
}

int queue::dequeue() {
    int x = -1;
    node* p;
    if (front == NULL) {
        cout << "Queue is empty" << endl;
    } else {
        p = front;
        front = front->next;
        x = p->data;
        delete p;
    }
    return x;
}

bool queue::isEmpty() {
    return front == NULL;
}

int main() {
    queue q;
    int n, x;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter x: ";
        cin >> x;
        q.enqueue(x);
    }
    if (q.isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    int dequeuedItem = q.dequeue();
    cout << "Dequeued item: " << dequeuedItem << endl;

    return 0;
}
*/
