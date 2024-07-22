#include <stdio.h>


main() 
{
    
    int max_num = 5,i,j;  
    

    for (i = 1; i <= 5; i++)
	 {
        
        for (j = 1; j <= 2 * (5 - i); j++) 
		{
            printf(" ");
        }
        
        
        for (int j = i; j <= max_num; j++) 
		{
            printf("%d ", j);
        }
        
        
        
        for (int j = max_num - 1; j >= i; j--)
		 {
            printf("%d ", j);
        }
        
        
        printf("\n");
    }
    
}
