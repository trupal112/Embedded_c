#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void linkListTraversal(struct node *head){
    struct node *ptr =head;
    do{
        printf("Elements is = %d\n",ptr->data);
        ptr = ptr->link;
    }while(ptr!=head);

};
struct node *insertAtFirst(struct node *head , int data){
    struct node *ptr =malloc(sizeof(struct node));
    struct node *p =head->link;
    ptr->data=data;
    while(p->link!=head){
        p=p->link;
    }
    p->link = ptr;
    ptr->link = head;
    head = ptr;
    return head;
};
struct node *insertAtBetween(struct node *head ,int data ,int pos ){
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

int main(){
    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));
    struct node *fourth = malloc(sizeof(struct node));
    head ->data =1;
    head->link = second;

    second->data=2;
    second->link=third;

    third->data=3;
    third->link=fourth;

    fourth->data=4;
    fourth->link=head;
    printf("\nCircularlist before add element at first..........\n");
    linkListTraversal(head);
    head = insertAtFirst(head,5);
    printf("\nCircularlist after add element at first ..........\n");
    linkListTraversal(head);
    head =insertAtBetween(head , 56 ,2);
     printf("\nCircularlist after add element at position 2 ..........\n");
    linkListTraversal(head);
    return 0;
}