#include <stdio.h>
int main(void) {
	int y;
    scanf("%d",&y);
 
    if(y%4 == 0)
    {
        if( y%100 == 0)
        {
 
            if ( y%400 == 0)
                printf("yes", y);
            else
                printf("no", y);
        }
        else
            printf("yes", y );
    }
    else
        printf("no", y);
 
	return 0;
}
 
