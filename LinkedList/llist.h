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
int deleteNode(LinkedList *ll, unsigned int index);
int deleteList(LinkedList *ll);
void printList(LinkedList *ll);
