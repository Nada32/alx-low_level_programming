#include <stdlib.h>
#include <time.h>
#include <studio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
        char dody[]=n
        int i;
        char x=0;	
        for(i=0;i<sizeof(dody);i++)
	{
	x=dody[i];
        }
	if(x>5)
	{
		printf("Last digit of %c is %c and is greater than 5",x);
	}
	else if(x==0)
        {
                printf("Last digit of %c is %c and is 0",x);
        }
	else if(x<6 && x!=0)
        {
                printf("Last digit of %c is %c and  is less than 6 and not 0",x);
        }
	else
        {
                printf("try");
        }
	/* your code goes there */
	return (0);
}
