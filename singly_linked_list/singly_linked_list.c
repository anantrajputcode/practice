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

}