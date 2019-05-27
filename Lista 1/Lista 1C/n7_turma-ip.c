#include <stdio.h>
 
int main()
{
   	int m, freq;
   	double p1, p2, p3, p4, p5, p6, p7, p8, l1, l2, l3, l4, l5, nt, nf, mp, ml;
   	
   	while(m != -1)
   	{
   	scanf("%d%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%d",&m ,&p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &nt, &freq);
   	
   	mp = (p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8) / 8.00;
   	ml = (l1 + l2 + l3 + l4 + l5) / 5.00;
   	nf = (0.7 * mp) + (0.15 * ml) + (0.15 * nt);
   	
   	if(m == -1)
   		break;

   	else if(freq >= 96 && nf >= 6.00)
   		printf("Matricula:  %d, Nota Final:  %.2lf, Situacao Final:  APROVADO\n", m , nf);
   	
   	else if(freq >= 96 && nf < 6.00)
   		printf("Matricula:  %d, Nota Final:  %.2lf, Situacao Final:  REPROVADO POR NOTA\n", m, nf);
   		
   	else if(freq < 96 && nf >= 6.00)
   		printf("Matricula:  %d, Nota Final:  %.2lf, Situacao Final:  REPROVADO POR FREQUENCIA\n", m, nf);
   	
   	else if(freq < 96 && nf < 6.00)
   		printf("Matricula:  %d, Nota Final:  %.2lf, Situacao Final:  REPROVADO POR NOTA E POR FREQUENCIA\n", m, nf);
   	}
    return 0;
}
/*
freq 128 * 0.75 >= 96
*/







