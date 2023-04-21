#include <iostream>
#include <algorithm>

using namespace std;

class Queue {
    private:
        int size;
        int* data;
        int front, rear;
    public:
        Queue() {
            size = 10;
            data = new int[size];
            front = -1;
            rear = -1;
        }
        ~Queue() {
            delete[] data;
        }

    void add(int element) {
        if (front == -1) {
            front = 0;
            rear = 0;
            data[rear] = element;
        }
        else if (rear == size - 1) {
            int* temp = new int[2 * size];
            for (int i = front; i <= rear; i++)
            temp[i - front] = data[i];
            delete[] data;
            data = temp;
            rear = rear - front;
            front = 0;
            rear++;
            data[rear] = element;
        }
        else {
            rear++;
            data[rear] = element;
        }
    }

    void remove() {
    if (front == -1)
        cout << "Queue is empty" << endl;
        else {
            cout << "Removed element: " << data[front] << endl;
            if (front == rear) {
                front = -1;
                rear = -1;
            }
            else
            front++;
        }
    }

    void print() {
        if (front == -1)
            cout << "Queue is empty" << endl;
        else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++)
                cout << data[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Queue queue;
    queue.add(1);
    queue.add(2);
    queue.add(3);
    queue.add(4);
    queue.print();

    queue.remove();
    queue.print();

    cout << "adding element 6, 7, 8, 9 to queue" << endl;
    queue.add(6);
    queue.add(7);
    queue.add(8);
    queue.add(9);
    queue.print();

    return 0;
}
