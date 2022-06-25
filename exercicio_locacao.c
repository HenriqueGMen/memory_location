#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *p;
    int x;
    
    x=5;

    p=(int*)(malloc(x*sizeof(int)));
    p=(int*)(realloc(p,22*sizeof(int)));
    void free(void *p);
    
}
