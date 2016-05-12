#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int max_rand(int *mas, int max);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas[10], i, k = 0, max;
	
	srand(time(0));
	
	for(i = 0; i < 10; i++){
		mas[i] = rand()%100;
		printf("mas[%d] = %d\n", i, mas[i]);
	}
	
	max = max_rand(mas, max);
	printf("maksimal'noe znachenie = %d\n", max);
	
	for(i = 0; i < 10; i++){
		if(max == mas[i])
		k++;
	}
	
	printf("Kolishectvo naibol'shuh elementov: %d\n", k);
	system("pause");
	return 0;
}

int max_rand(int *mas, int max){
	int i; 
	max = mas[0];
	
	for(i = 0; i < 10; i++){
		if(mas[i] >= max)
		max = mas[i];
	}
	return max;
}
