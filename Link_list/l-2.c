#include<stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node* add_big(struct node* head, int d ){
    struct node *ptr  = malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;

    ptr->link= head;
    head = ptr;
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

    int data = 3;
    head = add_big(head ,data);
    ptr = head;


  
    while(ptr != NULL){
        printf("\n%d",ptr->data);
        ptr= ptr->link;
    }
    return 0;
}