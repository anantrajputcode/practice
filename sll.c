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
void print_data(struct node* head){
    if(head == NULL){
        printf("Linked list is empty.");
    }
    struct node* ptr = head;
    while(ptr != NULL){
        printf("%d->", ptr->data);
        ptr = ptr->link;
        if(ptr == NULL){
            printf("NULL");
        }
    }
}
void inset_at_end(struct node* head){
    struct node* ptr = head;
    struct node* temp = malloc (sizeof(struct node));
    printf("enter the data to insert at end: ");
    scanf("%d", &temp->data);
    temp->link = NULL;
    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
    printf("the list after insertion is : \n");
    print_data(head);
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

    //int count = count_nodes(head);
   //printf("No of nodes = %d", count);
   printf("original list is: \n");
   print_data(head);
   printf("\n");
   inset_at_end(head);
   
    
    return 0;
}