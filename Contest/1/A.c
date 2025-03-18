#include <stdio.h>

int main() {
	int T, N, i;
	double S;
	scanf("%d", &T);

	while (T--) {
		scanf("%d", &N);
		S = 0;

		if (N % 2 == 0) i = 2;
		else i = 1;

		for (; i <= N; i += 2) {
			S += (double) 1 / i;
		}

		printf("%.6f\n", S);
	}

	return 0;
}