#include<stdio.h>
 typedef struct student{
    int x ;
    float y;
    char name[64];
}s;
void detail(struct student *s1){
    printf("................................\n");
    printf("\nYour name   = %s", s1->name);
    printf("\n Your RollNo  = %d", s1->x);
    printf("\n Your marks  = %.3f", s1->y);
};

int main(){
    s s1;
    printf("\nEntet the name =  ");
    gets(s1.name);
    printf("\nEnter the RollNo x = ");
    scanf("%d", &s1.x);
    printf("\nEnter the marks y = ");
    scanf("%f", &s1.y);
    detail(&s1);

    return 0;
}