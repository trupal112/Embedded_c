#include<stdio.h>
#include<stdlib.h>
struct student{
    int x;
    int y;
};
struct student* fun(int a , int b){
    struct student *ptr  = (struct student*)malloc(sizeof(struct student));
    ptr ->x = a;
    ptr -> y = b+5;
    return ptr;
}
void print(struct student *ptr){
    printf("%d %d\n", ptr ->x ,ptr -> y);
};
int main(){
    struct student *ptr1 , *ptr2;
    ptr1 = fun(2.,3);
    ptr2 = fun(6,8);
    print(ptr1);
    print(ptr2);
    free(ptr1);
    free(ptr2);
    return 0;

}