#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* create_node(struct node* head, int data){
    struct node* new_node = malloc(sizeof(struct node));
    new_node-> data = data;
    new_node-> link = NULL;
    if(head == NULL){
        return new_node;
    }
    struct node* temp = head;
    while(temp-> link != NULL){
        temp = temp-> link;
    }
    temp-> link = new_node;
    return head;
}
void print_data(struct node* head){
    struct node* temp = NULL;
    temp = head;
    while (temp != NULL){
        printf("%d->", temp-> data);
        temp = temp-> link;
    }
    printf("NULL");
}
void insert_at_end(struct node* head, int data){
    struct node* temp = malloc(sizeof(struct node));
    temp-> data = data;
    temp-> link = NULL;
    struct node* ptr = head;
    while(ptr-> link != NULL){
        ptr = ptr-> link;
    }
    ptr-> link = temp;

}
int main(){
    printf("Enter the no of nodes you want in the sll : ");
    int n;
    scanf("%d", &n);
    int data;
    struct node* head = NULL;
    for(int i = 0; i < n; i++){
        printf("Enter the data: ");
        scanf("%d", &data);
        head = create_node(head, data);
    }
    printf("The data stored in sll is :-\n");
    print_data(head);
    printf("\nEnter the data for new node: ");
    scanf("%d", &data);
    insert_at_end(head, data);
    print_data(head);
    
}