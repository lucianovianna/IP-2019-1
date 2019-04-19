#include <stdio.h>
 
 
int main() {
 
    int n1, y1, y2, y3, y4, y5, z ;
    scanf("%d", &n1);
    if (n1 < 10) {
        printf("PALINDROMO\n"); 
    } else if (n1 > 9 && n1 < 99){
        y1 = n1 / 10;
        y2 = n1 % 10;
        z = (y2  * 10) + y1;
        //printf("\t\t z = %d \n\n\n\n"); //teste
        if (n1 == z) 
            printf("PALINDROMO\n");
        else
            printf("NAO PALINDROMO\n");
    } else if (n1 < 999) {
        y1 = n1 / 100;
        y2 = (n1 % 100) / 10;
        y3 = n1 % 10;
        z = (y3 * 100) + (y2 * 10) + y1 ;
        //printf("\t\t z = %d \n\n\n\n"); //teste
        if (z == n1)
            printf("PALINDROMO\n");
        else
            printf("NAO PALINDROMO\n");
    } else if (n1 < 9999) {
        y1 = n1 / 1000;
        y2 = (n1 % 1000) / 100;
        y3 = (n1 % 100) / 10;
        y4 = n1 % 10;
        z = (y4 * 1000) + (y3 * 100) + (y2 * 10) + y1;
        //printf("\t\t z = %d \n\n\n\n"); //teste
        if (z == n1)
            printf("PALINDROMO\n");
        else
            printf("NAO PALINDROMO\n");
    } else if (n1 < 99999) {
        y1 = n1 / 10000;
        y2 = (n1 % 10000) / 1000;
        y3 = (n1 % 1000) / 100;
        y4 = (n1 % 100) / 10;
        y5 = n1 % 10;
        z = (y5 * 10000) + (y4 * 1000) + (y3 * 100) + (y2 * 10) + y1;
        //printf("\t\t z = %d \n\n\n\n"); //teste
        if (z == n1)
            printf("PALINDROMO\n");
        else
            printf("NAO PALINDROMO\n");
    } else
        printf("NUMERO INVALIDO");
    //printf("\n\n%d  %d  %d  %d  %d\n", y1, y2, y3, y4 ,y5);
    return 0;
 
}
