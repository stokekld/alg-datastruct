typedef struct t_node {
    int value;
    struct t_node *next;
}Node;

typedef struct t_list {
    int size;
    Node *first;
}LinkedList;

LinkedList *getNewList(void);
int addNode(LinkedList *ll, int value);
void printList(LinkedList *ll);
