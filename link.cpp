#include <iostream>
#include"aa.cpp"
using namespace std;


int midelement(Node *START) {
    Node *T, *R;
    T = START;
    R = START->Next;
    while (R != NULL && R->Next != NULL) {
        T = T->Next;
        R = R->Next;
        R = R->Next;
    }
    cout << T->info << endl;
    return 0;
}

void reverse(Node **START) {
    Node *p, *q, *r;
    p = *START;
    q = NULL;
    r = NULL;
    while (p != NULL) {
        r = q;
        q = p;
        p = p->Next;
        q->Next = r;
    }
    *START = q;
    
}




int main() {
    START = NULL;
    InsBeg(&START,'A');
    InsBeg(&START,'B');
    InsBeg(&START,'C');
    InsBeg(&START,'D');
    InsBeg(&START,'E');
    InsBeg(&START,'F');
    InsEnd(&START,'X');
    InsEnd(&START,'Y');

    Traverse(START); 
    midelement(START);
    deletion(&START, 'C');
    Traverse(START);
    deletebegin(&START);
    Traverse(START);
    deleteend(&START);
    Traverse(START); 
    
    return 0;
}
