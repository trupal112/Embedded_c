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
        p =p->link;
        i++;
    }
    ptr->data = data;
   ptr->link = p->link;
   p->link = ptr;
   return head;
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

struct node * delete(struct node *head , int pos){
    struct node *p =  head;
     struct node *q = head->link;
    int i=0;
    while(i!=pos-1){
        p =p->link; 
        q = q->link;
        i++;
    }
   
    p->link = q->link;
    free(q);
    return head;
};

int main(){
    struct node *head = malloc(sizeof(struct node));
    head ->data =45;
    head->link = NULL;


    struct node *ptr =  malloc(sizeof(struct node));
    ptr->data = 98; 
    ptr ->link =  NULL;
    head-> link =ptr;

    ptr =  malloc(sizeof(struct node));
    ptr->data = 12;
    ptr->link=NULL;
    head->link->link=ptr;

    ptr =  malloc(sizeof(struct node));
    ptr->data = 24;
    ptr->link=NULL;
    head->link->link->link=ptr;


    printf("\nBefore insert.............\n");
    print_data(head);
    head = insetAtBetween(head, 56, 3);
    printf("\nAfter insert.............\n");
    print_data(head);
    head = delete(head , 2);
    printf("\nAfter delete.................\n");
    print_data(head);
    return 0;
}