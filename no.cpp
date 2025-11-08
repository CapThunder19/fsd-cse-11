#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    char info;
    struct Node *Next;
};




Node* GetNode() {
    Node *p;
    p = (Node*)malloc(sizeof(struct Node));
    return p;
}


void InsBeg(char x) {
    Node *p = GetNode();
    p->info = x;
    p->Next = START;
    START = p;
}


void Traverse() {
    Node *p = START;
    while (p != NULL) {
        cout << p->info << " ";
        p = p->Next;
    }
    cout << endl;
}

void InsEnd{
    Node *q, *p;
    p = GetNode();
    p->info = x;
    p->Next = NULL;
    if (START == NULL) {
        START = p;
    } 
    
    else {
        q = START;
        while (q->Next != NULL) {
            q = q->Next;
        }
        q->Next = p;
    }
}


int main() {
    struct Node *START;
    START = NULL;

    InsEnd(START, 'A');
    InsEnd(START, 'B');
    InsEnd(START, 'C');
    InsEnd(START, 'D');
    InsEnd(START, 'E');
    InsEnd(START, 'F');

    Traverse(START);

    return 0;
}