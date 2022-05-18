#include <stdio.h>
#include <malloc.h>

typedef struct node_t {
    struct node_t *next;
    int data;
} node_t;

typedef struct Set{
    node_t *head;
    int size;
} Set; //struct name is Set




Set* set_union(Set* a, Set* b) {

    Set unionSet;
    node_t *unionSetHead;
    node_t *pointer_a = a->head;
    for (int i = 0; i < a->size; ++i) {
        node_t *newNode = (node_t*) malloc(sizeof (node_t));
        newNode->data = pointer_a->data;

    }

}

int main() {

}
