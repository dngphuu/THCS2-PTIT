#include <stdio.h>

int f(int k) {
	int s = 1;

	while (k > 1) {
		s *= k;
		k -= 1;
	}

	return s;
}

int main() {
	int n, N; scanf("%d", &n);
	N = n;

	int j = 0;

	while (n) {
		j += f(n % 10);
		n /= 10;
	}

	printf("%d", j == N);

	return 0;
}