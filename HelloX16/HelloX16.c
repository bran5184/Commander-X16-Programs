#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    //simple program to test i/o on C64 & X16
	char name[20];
	printf ("Hello, what is your name?\n");
	scanf("%s", name);
	printf("\n");
	printf("Why, Hello There %s.", name);
	
    return EXIT_SUCCESS;
}


