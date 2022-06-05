#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb,i;
    printf("Donnez un nombre:");
    scanf("%d",&nb);
   for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d \n",nb,i,nb*i);
    }

    /*while(i<=10)
    {
        printf("%d X %d = %d \n",nb,i,nb*i);
    }*/

   /* do
    
        printf("%d X %d = %d \n",nb,i,nb*i);
	
    while(i<=10);*/
    getch();
    return 0;
}
