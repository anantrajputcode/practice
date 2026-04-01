#include <stdio.h>
struct node{
    int data;
    struct node* link;
};
int main()
{
    struct node* head = NULL;
    head = (struct node*) malloc(sizeof(struct node));
    head -> data = 10;
    head -> link = NULL;
    struct node* current = (struct node* )malloc(sizeof(struct node));
    current -> data = 23;
    current -> link = NULL;
    head -> link = current;
    
    return 0;
}