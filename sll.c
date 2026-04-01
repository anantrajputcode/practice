#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* link;
};
int count_nodes(struct node* head){
    int count = 0;
    if(head == NULL){
        printf("linked list is empty.");
    }
    
    struct node* ptr = head;
    while (ptr != NULL){
        count++;
        ptr = ptr->link;
    }
    return count;
}
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
    
    current = malloc(sizeof(struct node));
    current -> data = 343;
    current -> link = NULL;
    head -> link ->link = current;

    int count = count_nodes(head);
    printf("No of nodes = %d", count);
    
    return 0;
}