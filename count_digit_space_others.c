#include <stdio.h>

main()
{
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for(i = 0; i < 10; ++i){
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF){
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}

	printf("Digitos\n");
	for(i = 0; i < 10; ++i)
		printf(" digito %d - %d\n",i, ndigit[i]);
	printf("Espacios en blanco: %d\nOtros caracteres: %d\n", nwhite, nother);
}
