/*atexitprocess.c*/
#include <stdlib.h>
void exitfunc1(void);
void exitfunc2(void);


int main()
{
   atexit(exitfunc1);
   atexit(exitfunc2);
   printf("This is mainfunction.\n");
}

void exitfunc1(void)
{
   printf("This is exitfunction1.\n");
}


void exitfunc2(void){ 
    printf("Thisisexitfunction2.\n");
 }
