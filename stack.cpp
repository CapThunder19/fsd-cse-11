#include <iostream>
using namespace std;

struct stk {
    int item[100];
    int top;
};
struct stk s;

/*********************************/
void Initialize() {
    s.top = -1;
}

/*********************************/
bool IsEmpty() {
    return (s.top == -1);
}

/*********************************/
void Push(int x) {
    if (s.top == 99) {
        cout << "Stack Overflow" << endl;
        exit(1);
    } else {
        s.top++;
        s.item[s.top] = x;
    }
}

/*********************************/
int Pop() {
    if (IsEmpty()) {
        cout << "Stack Underflow" << endl;
        exit(1);
    } else {
        int x = s.item[s.top]; 
        s.top--;
        return x;
    }
}

/*********************************/
int main() {
    Initialize();
    Push(100);
    Push(200);
    Push(300);
    Push(400);
    Push(500);

    cout << Pop() << endl;
    cout << Pop() << endl;
    cout << Pop() << endl;
    cout << Pop() << endl;

    return 0;
}
