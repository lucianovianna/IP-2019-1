#include <stdio.h>
#include <math.h>

int main()
{
	int data;
	scanf("%d", &data);
	int dia = (data / 1000000), mes = (data % 1000000) / 10000, ano = data % 10000;
	if(data <= 99999999)
		switch (mes) {
			case 1: printf("%d de janeiro de %d\n", dia, ano);
			break;
			case 2: printf("%d de feveiro de %d\n", dia, ano);
			break;
			case 3: printf("%d de marco de %d\n", dia, ano);
			break;
			case 4: printf("%d de abril de %d\n", dia, ano);
			break;
			case 5: printf("%d de maio de %d\n", dia, ano);
			break;
			case 6: printf("%d de junho de %d\n", dia, ano);
			break;
			case 7: printf("%d de julho de %d\n", dia, ano);
			break;
			case 8: printf("%d de agosto de %d\n", dia, ano);
			break;
			case 9: printf("%d de setembro de %d\n", dia, ano);
			break;
			case 10: printf("%d de outubro de %d\n", dia, ano);
			break;
			case 11: printf("%d de novembro de %d\n", dia, ano);
			break;
			case 12: printf("%d de dezembro de %d\n", dia, ano);
			break;
		}
	else
		printf("Data invalida!");
	return 0;
}

// 12092017 == 12 09 2017
