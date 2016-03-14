#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("char %u\n", sizeof(char));
	printf("int %u\n", sizeof(int));
	printf("short %u\n", sizeof(short));
	printf("long %u\n", sizeof(long));
	printf("long long %u\n", sizeof(long long));
	printf("float %u\n", sizeof(float));
	printf("double %u\n", sizeof(double));
	return 0;
}
