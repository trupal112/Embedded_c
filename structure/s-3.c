#include<stdio.h>
typedef struct abc{
    int x;
    float y;
    char c[20];
    char *d;
    
}abc;

//typedef with struct 


int main(){
     abc a [2];
    char name[]="";


    for(int i = 0 ; i<2 ; i++){
        printf("\nEnter the number  x = ");
        scanf("%d", &a[i].x);
        printf("\nEnter the float number y  =");
        scanf("%f", &a[i].y);
        printf("\nEnter the name c = ");
        scanf("%s",&a[i].c);
         printf("\nEnter the name d = ");
         scanf("\n%s",a[i].d = name );
        

    }
    printf("\n");

    for(int i = 0 ; i<2 ; i++)
    {
        printf("\nx = %d",a[i].x);
        printf("\ny = %f", a[i].y);
        printf("\nc = %s", a[i].c);
        printf("\nd = %s", a[i].d);
    }

    return 0;
}