#include <stdio.h>

/*contar lineas de un archivo*/
main()
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if(c == '\n')
			++nl;
	printf("%d\n", nl);	
}