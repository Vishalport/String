/*
 ============================================================================
 Name        : string-hedrefile.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {
	   setbuf(stdout,NULL);
	   // Commonly used string functions in C.






	   // strcat(): Appends a copy of the source string to the end of the destination string.  (without user input )

	   char destination[50] = "Hello ";

	   char source[50] = "World!";
	   strcat(destination,source);
	   printf("%s\n",destination);



	   // strcmp(): Compares two strings lexicographically.

	   char str1[10] = "hello";

	   char str2[10] = "hello";

	   int result = strcmp (str1,str2 );
	   printf("your result is %d\n",result);

	    if( result == 0)
	    	printf(" Equal \n");

	    	else
	    		printf(" not equal \n");



	   // strcpy(): Copy one string to another.

	   char dest[50] = "Old Value";

	   char src[50] = "New Value!";

	   strcpy(dest, src);



	   printf("strcpy: %s\n", dest);



	   // strlen(): Gives you the length of the string. It doesn't count null character.

	   char name[] = "vishal kumaR";
	return EXIT_SUCCESS;
}
