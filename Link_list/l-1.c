#include<stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *link;
};

void count_node(struct node *head){
    int count  = 0;
    if(head == NULL){
        printf("list is empty");
    } 
    struct node *ptr= NULL;
    ptr = head;
    while(ptr != NULL){
        count++;
        ptr=ptr -> link;
    }
    printf("list count = %d", count);

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
void add_data(struct node *head , int Data){
    struct node *ptr , *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));
    temp ->data = Data;
    temp->link = NULL;
    while (ptr->link != 0)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
    
};
int main(){
    struct node *head = malloc(sizeof(struct node));
    head ->data =45;
    head->link = NULL;


    struct node *current =  malloc(sizeof(struct node));
    current->data = 98;
    current ->link =  NULL;
    head-> link =current;

    current = malloc(sizeof(struct node));
    current ->data = 56;
    current->link = NULL;
    head->link->link = current;

    add_data(head ,67);
    count_node(head);
    print_data(head);
    
    return 0;
}