#include <stdio.h>
#include <math.h>

int main() {
	int n; scanf("%d", &n);
	int d = sqrt(n);
	int ok = 0;

	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			if (ok) {
				printf("x");
				ok = 0; 				
			} else {
				printf("%d", i);
				n /= i; 
				ok = 1;
			}

			if (n == 1) return 0;
		}
	}

	if (n > 1) {
		printf("x%d\n", n);
	}

	return 0;
}