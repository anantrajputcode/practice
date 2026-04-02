#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* create_node(struct node* head,struct node* tail, int data){
    struct node* current = malloc(sizeof(struct node));
    current->data = data;
    current -> link = NULL;
    tail;
    tail-
}
int main()
{
    struct node* head = NULL;
    head = malloc(sizeof(struct node));
    struct node* tail = NULL;
    int data;
    printf("Enter the no of nodes : ");
    int n;
    scanf("%d", &n);
    printf("Enter the first element : ");
    scanf("%d", &head->data);
    head->link = NULL;
    for(int i = 1; i < n; i++){
        printf("Enter teh rest of the elements : ");
        scanf("%d", &data);

    }
    
    return 0;
}