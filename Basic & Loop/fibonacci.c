#include<stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("Enter the term  n  = ");
    scanf("%d",&n);
    printf("fibonnacci series = \n");
    printf("%d\n%d\n", a ,b);
    for(int i=2 ; i<=n ; i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
    return 0;
}