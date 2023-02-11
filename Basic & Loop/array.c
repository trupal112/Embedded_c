#include <stdio.h>    
int main ()    
{    
    int a[5][5],i,j,sum=0;     
    for (i=0;i<5;i++)    
    {    
        for (j=0;j<5;j++)    
        {    
            printf("Enter a[%d][%d]: ",i,j);                
            scanf("%d",&a[i][j]);    
        }    
    }    
    printf("\n printing the elements ....\n");     
    for(i=0;i<5;i++)    
    {    
        printf("\n");    
        for (j=0;j<5;j++)    
        {    
            printf("%d\t",a[i][j]);    
        }    
    } 

    printf("\n Rows sum ...........\n");  

     for(i=0;i<5;i++)    
    {    
        for (j=0;j<5;j++)    
        {   
            sum=sum+a[i][j]; 
           
        }  
        printf(" %d",sum); 
        sum=0;   
          
    }   

    printf("\n column sum .............\n");

    
     for(j=0;j<5;j++) 
    {    
        for (i=0;i<5;i++)    
        {   
            sum=sum+a[i][j]; 
         
        } 
        printf(" %d",sum); 
        sum=0;      
    }   
    
    return 0; 
}    