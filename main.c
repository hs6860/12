#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
#include <string.h>


	
	void main(void){
		char src[] = "The worst things to eat before you sleep";
		char dst[100];
		char str[30] = "happy C programming";
	
		strcpy(dst,src);
		
		printf("copied string : %s\n", dst);
		printf("length of %s : %i\n",str,strlen(str));
	
	
	}
