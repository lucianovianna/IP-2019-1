#include <stdio.h>
 
int main()
{
    int i,n1,n2;
    scanf("%d%d", &n1,&n2);
    
    if((n1 % 2) != 0)
        printf("O PRIMEIRO NAO E PAR\n");
    else{
        printf("%d ", n1);
        for(i=1; i < n2; i++){
            n1 = n1+2;
            printf("%d ", n1);}
    }
    return 0;
}
