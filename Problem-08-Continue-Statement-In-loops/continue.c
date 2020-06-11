#include <stdio.h>
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        if(i==5 || i==6)
        {
            printf(" \n Skipping %d \"continue statement\" \n",i);
            continue;
        }

        printf("%d",i);
    }
	printf("\n \n Having 2 \"Slash n\" causes there to be more space beween lines as seen above"
	"\n Also these 2 lines are stuff after the loop is finished");
}