#include<stdio.h>
struct student{
    int x;
    float y;
    char *c;
}s1;

struct car{
    int x;
    float y;
    char *c;
}c1;
int main(){
    s1.x = 20;
    s1.y = 12.2;
    s1.c="Trupal jasani";

    printf("%d\n", s1.x);
    printf("%f\n", s1.y);
    printf("%s\n", s1.c);

    printf("Enter the amount of car  \n : - ");
    scanf("%d",&c1.x);
    printf("Enter the  petrol  of car   \n : - ");
    scanf("%d",&c1.y);
    printf("Enter the name of car \n : - ");
    scanf("%s", &c1.c);
    return 0;
}