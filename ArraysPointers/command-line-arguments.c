/* Command Line Arguments */
/* example from: "The C Programming language" book */


#include <stdio.h>

/* Print arguments (v1) */
int main(int argc, char *argv[])
{
	int i;
	for (i = 1; i < argc; i++)
		// operate array
		printf("%s%s", argv[i], (i < argc - 1) ? " " : "");
	printf("\n");
	return 0;
}

/* Print arguments (v2) */
int main2(int argc, char *argv[])
{
	while (--argc > 0)
		// operate pointer value
		printf("%s%s", *++argv, (argc > 1) ?  " " : "");
	printf("\n");
	return 0;
}
