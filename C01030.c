#include <stdio.h>

void factorize(int n) {
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			printf("%d ", i);

			n /= i; 

			if (n == 1) {
				printf("\n");
			}
		}
	}

	if (n > 1) {
		printf("%d\n", n);
	}
}

int main() {
	int T; scanf("%d", &T);
	int n;

	while (T--) {
		scanf("%d", &n);

		factorize(n);
	}

	return 0;
}