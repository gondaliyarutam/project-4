#include <stdio.h>

main()
{
    int start_num = 41; 
    int num_rows = 5;   

   
    for (int i = 1; i<=5; i++) 
	{
        
        for (int j = 1; j <= i; j++) 
		{
            printf("%d ", 40 + j);
        }
       
        printf("\n");
    }

    
}
