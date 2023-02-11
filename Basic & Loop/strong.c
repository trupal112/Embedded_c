#include <stdio.h>

int fact(int r)  
{  
    int mul=1;  
    for(int i=1;i<=r;i++)  
    {  
        mul=mul*i;  
    }  
    return mul;  
      
};  

int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       
        remainder = originalNum % 10;
        int f = fact(remainder);
         result += f;
       originalNum /= 10;
       
    }

    if (result == num)
        printf("%d is strong number.", num);
    else
        printf("%d is not strong number.", num);

    return 0;
}
