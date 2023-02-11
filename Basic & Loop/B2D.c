#include<stdio.h>
int main(){
    int n,sum=0,rem,weight=1;
    printf("Enter the binary number n = ");
    scanf("%d",&n);
    while(n !=0){
        rem = n%10;
        sum =sum +weight*rem;
        n/=10;
        weight=weight*2;
 
   }
   printf("decimal number  = %d", sum);
    return 0;
}