#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* link;
};

int main()
{
    struct node* head = NULL;
    int n, d;
    printf("enter the no of nodes: ");
    scanf("%d", &n);
    printf("enter the no. 1 element : ");
    scanf("%d", &d);
    head = malloc(sizeof(struct node));
    head->data = d;
    head->link = NULL;
    struct node* current = NULL;
    for(int i = 2; i <= n; i++){
        current = malloc(sizeof(struct node));
        printf("Enter the no. %d element: ", i);
        scanf("%d", &d);
        current->data = d;
        current->link = NULL;
        head->link = current;

    }
    struct node*ptr = head;
    while (ptr != NULL){
        printf("%d=>", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}