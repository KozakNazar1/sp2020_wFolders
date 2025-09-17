#include <stdio.h>
extern "C" int calc(int, int);
extern "C" int K = 100;
int main()
{
	int a;
	int b;
	int res;
	printf("Enter numbers:\n");
	printf("A = ");
	scanf_s("%d", &a);
	printf("B = ");
	scanf_s("%d", &b);
	printf("\nA + B + 100 = %d\n", (a + b + K));
	res = calc(a, b);
	printf("\nResult of procedure calc is: %d\n", res);
	return 0;
}