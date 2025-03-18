#include <stdio.h>

int main() {
	int T; scanf("%d", &T);

	while (T--) {
		long long n;
		int min, max, lastDigit;
		scanf("%lld", &n);

		min = max = n % 10;

		while (n) {
			lastDigit = n % 10;

			if (lastDigit > max) max = lastDigit;
			if (lastDigit < min) min = lastDigit;

			n /= 10;
		}

		printf("%d %d\n", max, min);
	}

	return 0;
}