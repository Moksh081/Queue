//priority queues

/*
#include <iostream>

using namespace std;

class Queue {
private:
    int size;
    int front;
    int rear;
    int* Q;

public:
    Queue(int size);
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(int x);
    int dequeue();
    void display();
};

Queue::Queue(int size) {
    this->size = size;
    front = -1;
    rear = -1;
    Q = new int[size];
}

Queue::~Queue() {
    delete[] Q;
}

bool Queue::isEmpty() {
    return front == rear;
}

bool Queue::isFull() {
    return rear == size - 1;
}

void Queue::enqueue(int x) {
    if (isFull()) {
        cout << "Queue Overflow" << endl;
    } else {
        rear++;
        Q[rear] = x;
    }
}

int Queue::dequeue() {
    int x = -1;
    if (isEmpty()) {
        cout << "Queue Underflow" << endl;
    } else {
        front++;
        x = Q[front];
    }
    return x;
}

void Queue::display() {
    for (int i = front + 1; i <= rear; i++) {
        cout << Q[i] << flush;
        if (i < rear) {
            cout << " <- " << flush;
        }
    }
    cout << endl;
}

int main() {
    Queue Q(5);
    Queue Q1(5);
    Queue Q2(5);

    char A[] = {'A', 'B', 'C', 'D', 'E'};
    int B[5] = {1, 2, 3, 2, 2};

    for (int i = 0; i < 5; i++) {
        if (B[i] == 1) {
            Q.enqueue(A[i]);
        } else if (B[i] == 2) {
            Q1.enqueue(A[i]);
        } else if (B[i] == 3) {
            Q2.enqueue(A[i]);
        } else {
            cout << "priority not defined" << endl;
        }
        cout << A[i] << " entered in queue" << endl;
    }

    Q.dequeue();
    cout << "Q is empty: " << Q.isEmpty() << endl;

    Q1.dequeue();
    cout << "Q1 is empty: " << Q1.isEmpty() << endl;

    Q2.dequeue();
    cout << "Q2 is empty: " << Q2.isEmpty() << endl;

    return 0;
}
*/
