#include<stdio.h>
typedef struct student
{
    char *name;
    int age;
    float per;
}s;
void display(struct student o)
{
    printf("\nName        : %s",o.name);
    printf("\nAge         : %d",o.age);
    printf("\nPercent     : %f",o.per);
}
int main()
{
    s o={"RAM",25,75.5};
    display(o);
    return 0;
}