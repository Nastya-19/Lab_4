#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void poshyk(char *mas, char bykv);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char mas[100]; 
	int i;
	char bykv;
	
	srand(time(0));
	
	for(i = 0; i < 20; ){
		mas[i] = rand()%57 + 65;
		if((mas[i] > 90) && (mas[i] < 97)){
			continue;
		} else {
			i++;
		}
	}
	
	for (i = 0; i < 20; i++)
	printf("mas[%d] = %c\n", i, mas[i]);
	
	printf("Vvedite chislo:");
	scanf("%c", &bykv);
	poshyk(mas, bykv);
	
	
	return 0;
}

void poshyk(char *mas, char bykv){
	int i;
	
	for(i = 0; i < 20; i++){
		if(mas[i] == bykv)
		printf("%d, ", i);
	}
}
