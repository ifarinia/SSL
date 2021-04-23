#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen( "output.txt" ,"w");
    fprintf(fp,"Hello world!\n");
    fclose(fp);
    return 0;
}
