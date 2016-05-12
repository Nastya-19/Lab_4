#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	int odun[10], dva[10], i;
	
	srand(time(0));
	
	for(i = 0; i < 10; i++){
		odun[i] = rand()%50;
		printf("%d ", odun[i]);
	}
	
	for(i = 0; i < 10; i++){
      dva[i] = odun[10-(i+1)];
	}
	
   printf("\nObratnuy massiv: \n");
   
	for(i = 0; i < 10; i++)
		printf("%d ", dva[i]);
      

	system("pause");
	return 0;
}
