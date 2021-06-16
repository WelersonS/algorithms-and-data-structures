#include <iostream>

using namespace std;

const int SIZE = 6;
int stack[SIZE];
int top = -1;

void push(int value) {
    if(top == SIZE-1) {
        cout << "Pilha cheia" << endl;
        return;
    }

    top = top + 1;
    stack[top] = value;
    cout << "Valor inserido com sucesso" << endl;
}

void pop() {
    if(top == -1) {
        cout << "Pilha vazia" << endl;
        return;
    }

    top = top - 1;

    cout << "Elemento removido com sucesso!" << endl;
}

void printStack() {
    int i;

    if(top == -1) {
        cout << "Pilha vazia" << endl;
        return;
    }

    for(i = 0; i <= top; i++) {
        cout << stack[i] << endl;
    }
}

void topStack() {
    if(top == -1) {
        cout << "Pilha vazia" << endl;
        return;
    }

    cout << stack[top] << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    push(100);
    pop();
    push(40);
    push(50);
    push(440);
    printStack();
    topStack();
}
