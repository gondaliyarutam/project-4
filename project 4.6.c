#include<stdio.h>

int main() 
{
    int i,j; 
    
   
    for (int i = 1; i <=5; i++)
	 {
        
        if (i == 1 || i == 5) 
		{
            for (int j = 1; j <= 5; j++)
			{
                printf("* ");
            }
        } 
		    else if  (i == 2   ||  i == 4) 
		{
            
            printf("*        *");
        } 
		else 
		{
        
            printf("*");
        }
        
       
        printf("\n");
    }

 
}
