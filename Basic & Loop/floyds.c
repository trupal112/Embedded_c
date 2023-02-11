#include <stdio.h>  
  
int main()  
{  
    int i,j,r,number=1;
    printf("Enter the Rows = "); 
    scanf("%d",&r); 
    for(i =1 ; i<=r; i++){
        
        for(j =1; j<=r; j++){
                    
                    if(j<=i){

                        printf("%d ",number);
                        number++;
                    }
                    else{
                        printf(" ");
                    }

        }
        printf("\n");
    }  
    return 0;  
}  