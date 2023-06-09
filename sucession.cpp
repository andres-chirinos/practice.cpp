// ConsoleApplication8.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "math.h"

int _tmain(int argc, _TCHAR* argv[])
{
	char resp;
	do {
		int n; 
		do {
			printf("N terminos > ");
			scanf_s("%d", &n);
		} while (n < 0);
		float i, a, b, c, d;
		for (i=1; i<=n; i++) {
			a = (i*i*i)-1;
			b = (i*i)+1;
			c = pow(-1, i-1);
			d = (a/b)*c;
			printf("(%.0f/%.0f)*%.0f = %.2f\t", a, b, c, d);
		}	
		printf_s("\n\n");
		getchar();
		printf("¿Desea continuar? s/n \t");
		scanf_s("%c", &resp);
		printf("\n");
		resp = tolower(resp);
	} while (resp=='s');
	getchar();
	return 0;
}

