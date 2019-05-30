typedef struct t_node {
    int value;
    struct t_node *next;
}Node;

typedef struct t_stack {
    int size;
    Node *top;
}Stack;

Stack *getNewStack(void);
void push(Stack *s, int value);
int pop(Stack *s);
