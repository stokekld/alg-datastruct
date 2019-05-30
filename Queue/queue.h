typedef struct t_node {
    int value;
    struct t_node *next;
}Node;

typedef struct t_queue {
    int size;
    Node *front;
    Node *tail;
}Queue;

Queue *getNewQueue(void);
