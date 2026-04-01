#include <stdio.h>
int main()
struct node{
    int data;
    struct node* next;
};
{
    printf("enter the nof elements : ");
    int n;
    scanf("%d", &n);
    struct node head;
    struct node second;
    head -> next = &second;
    return 0;
}