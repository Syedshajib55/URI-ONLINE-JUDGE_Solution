#include <stdio.h>
int main()
{
	int N, i, Fibo[47];
	scanf("%d",&N);
	Fibo[0] = 0;
	Fibo[1] = 1;
	for (i=2; i<N; i++)
        Fibo[i] = Fibo[i-1] + Fibo[i-2];
	for (i=0; i<N; i++)
    {
	if (i<N-1)
		printf("%d ", Fibo[i]);
    else
        printf("%d\n", Fibo[i]);
		}

	return 0;
}
