#ifndef "LL"
#define "LL"

// structure
typedef struct node
{
    int data;
    struct node* next;
}node;

// list life
struct node*     create(int val);
void             kill(struct node* head);

// list mod
void             insert(struct node* head, int val);
void             eliminate(struct node** head, int index);

// list info
int              list_size(struct node* head);
int              contains(struct node* head, int val);
void             display(struct node* head);

// DICTIONARY
// create()      allocates a node and returns a pointer (create head or new node)
// kill()        deallocates memory for the list referenced by the head
// insert()      inserts a new node at the end of the list referenced by head stores val in the data member
// remove()      removes and deallocates the node at index 
// list_size()   returns the size of the linked list
// contains()    searches the list pointed to by head for a node with data member set to val (returns first index if found, -1 otherwise)
// display()     prints the formatted contents of the linked list
// cross reference method

#endif