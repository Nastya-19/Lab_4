#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pers[10], dryg[10], i, skal = 0;
	
	srand(time(0));
	
	for (i = 0; i < 10; i++){
		pers[i] = rand()%100;
		dryg[i] = rand()%100;
		printf("\tpers[%d] = %d", i, pers[i]);
		printf("\tdryg[%d] = %d\n", i, dryg[i]);
	}
	
	for(i = 0; i < 10; i++){
		skal += pers[i]*dryg[i];
	}
	
	printf("skal = %d\n", skal);
	
	return 0;
}
