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

struct node *insertAtBetween(struct node *head ,int data ,int pos ){
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
struct node *delete(struct node *head ,  int pos){
    struct node *p =head;
    struct node *q=head->link;
    int i=0;
    while(i!=pos-1){
        p= p->link;
        q=q->link;
        i++;
    }
    p->link = q->link;
    free(q);
    return head;
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
    head =insertAtBetween(head , 6 ,2);
    printf("\nCircularlist after add element at position 2 ..........\n");
    linkListTraversal(head);
    head = delete(head , 2);
    printf("\nCircularlist after delete element at position 2 ..........\n");
    linkListTraversal(head);
    return 0;
}