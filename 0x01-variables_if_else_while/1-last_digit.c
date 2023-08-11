#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        int n;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        char dody[20];
        sprintf(dody,"%d",n);
        int i;
        char x;
        for(i=0;i<sizeof(dody);i++)
        {
        x=dody[i];
        }
        int xx=(int)x;
        if(xx>5)
        {
                printf("Last digit of %c is %c and is greater than 5",x);
        }
        else if(xx==0)
        {
                printf("Last digit of %c is %c and is 0",x);
        }
        else if(xx<6 && x!=0)
        {
                printf("Last digit of %c is %c and  is less than 6 and not 0",x);
        }
        else
        {
                printf("try");
        }
          return (0);
}
