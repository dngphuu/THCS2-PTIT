#include <stdio.h>

int main() {
	int prime[1300001];
	int n; scanf("%d", &n);

	for (int i = 0; i <= 1300000; i++) {
		prime[i] = 1;
	}

	prime[0] = prime[1] = 0;
	for (int i = 2; i * i <= 1300000; i++) {
		if (prime[i]) {
			for (int j = i * i; j <= 1300000; j += i) {
				prime[j] = 0;
			}
		}
	}

	for (int i = 2; i <= 1300000 && n; i++) {
		if (prime[i] && n) {
			printf("%d\n", i);
			n--;
		}
	}


	return 0;
}
