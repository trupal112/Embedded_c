#include<stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node * insetAtBetween(struct node *head , int data , int pos){
    struct node *ptr = malloc(sizeof(struct node));
    struct node *p = head;
    int i=0;
    while(i !=pos-1){
        p =ptr->link;
        i++;
    }
    ptr->data = data;
   ptr->link = p->link;
   p->link = ptr;
};
void print_data(struct node *head){
    if(head == NULL){
        printf("list is empty\n");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        printf("\n %d",ptr->data);
        ptr = ptr->link;
    }
};

int main(){
    struct node *head = malloc(sizeof(struct node));
    head ->data =45;
    head->link = NULL;


    struct node *ptr =  malloc(sizeof(struct node));
    ptr->data = 98; 
    ptr ->link =  NULL;
    head-> link =ptr;

    head = insetAtBetween(head, 56, 1);
    print_data(head);
   
    return 0;
}