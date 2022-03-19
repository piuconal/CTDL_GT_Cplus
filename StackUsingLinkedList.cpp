#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

typedef struct Node *stack;

bool isEmpty(stack s)
{
    return (s == NULL);
}

Node *createNode(int data)
{
    Node *p = new Node();
    if(p == NULL)
    {
        return NULL;
    }
    p->data = data;
    p->next = NULL;

    return p;
}

void push(stack &s, int data)
{
    Node *ptr = createNode(data);
    if(isEmpty(s))
    {
        s = ptr;
    }
    else
    {
        ptr->next = s;
        s = ptr;
    }
}

int top(stack s)
{
    if(!isEmpty(s))
    {
        return s->data;
    }
    else
    {
        cout << "Stack is empty!" << endl;
    }
}

int pop(stack &s)
{
    if(!isEmpty(s))
    {
        int data = s->data;
        Node *x = s;
        s = s->next;
        delete(x);
        return data;
    }
    else
    {
        cout << "Stack is empty!" << endl;
    }
}

int main()
{
    stack s;
    push(s, 100);
    push(s, -99);
    push(s, 35);
    push(s, 26);

    cout << "TOP:" << top(s) << endl;
    pop(s);

    while(!isEmpty(s))
    {
        int data = top(s);
        pop(s);
        cout << data << " <-- ";
    }

    cout << endl;
    return 0;
}