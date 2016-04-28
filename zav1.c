#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int zn(int*mas, int i);

int main(int argc, char *argv[]) {
	int mas[15];
	int i;
	
	srand(time(0));
	
	for (i=0; i < 15; ){
		mas[i] = rand()%16;
		if(zn(mas, i))
		i++;
	}
	
	for (i=0; i < 15; i++){
		printf("\tmas[%d] = %d\n", i, mas[i]);
	}
	
	system("pause");
	return 0;
}

int zn(int*mas, int i){
	int h;
	for (h=0; h < i; h++){
		if (mas[i] == mas[h])
		return 0;
	}
	return 1;
}
