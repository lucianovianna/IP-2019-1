#include <stdio.h>
#include <math.h>

int main()
{
	int u, dep;
	float smin, sal, imp, y, v, x, w;
	scanf("%d%f%d%f%f", &u, &smin, &dep, &sal, &imp);
	y = sal / smin;
	if(y > 12.0) {
		v = sal * 0.20;
		x = v - (300.0 * dep);
		imp = sal * (imp / 100.0);
		w = x - imp;
		printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2f\nIMPOSTO LIQUIDO = %.2f\nRESULTADO = %.2f\n", u, v, x, w );
		if (w < 0)
			printf("IMPOSTO A RECEBER");
		else if (w == 0)	
			printf("IMPOSTO QUITADO");
		else if (w > 0)
			printf("IMPOSTO A PAGAR");
	} 
	else if(y > 5.0 && y <= 12.0) {
		v = sal * 0.08;
		x = v - (300.0 * dep);
		imp = sal * (imp / 100.0);
		w = x - imp;
		printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2f\nIMPOSTO LIQUIDO = %.2f\nRESULTADO = %.2f\n", u, v, x, w );
		if (w < 0)
			printf("IMPOSTO A RECEBER");
		else if (w == 0)	
			printf("IMPOSTO QUITADO");
		else if (w > 0)
			printf("IMPOSTO A PAGAR");
	} 
	else if (y <= 5.0) {
		v = sal * 0.0;
		x = v - (300.0 * dep);
		imp = sal * (imp / 100.0);
		w = x - imp;
		printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2f\nIMPOSTO LIQUIDO = %.2f\nRESULTADO = %.2f\n", u, v, x, w );
		if (w < 0)
			printf("IMPOSTO A RECEBER");
		else if (w == 0)	
			printf("IMPOSTO QUITADO");
		else if (w > 0)
			printf("IMPOSTO A PAGAR");
	}
	return 0;
}
