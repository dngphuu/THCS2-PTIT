#include <stdio.h>
#include <math.h>

int main() {
	int N; scanf("%d", &N);
	int temp = N;
	int dau, cuoi;
	int length = 0;

	cuoi = N % 10;

	while (temp) {
		length++;
		temp /= 10; 
	}

	dau = N / (int) pow(10, length - 1);

	printf("%d", (N - cuoi + dau) - (int) (dau * pow(10, length - 1)) + (int) (cuoi * pow(10, length - 1)));

	return 0;
}