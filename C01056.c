#include <stdio.h>

void s() {
	int res = 1;
	int currentDigit, prevDigit;
	long long n; scanf("%lld", &n);

	prevDigit = n % 10; 

	while (n > 0) {
		currentDigit = n % 10;

		if (prevDigit >= currentDigit) {
			prevDigit = currentDigit;
			n /= 10;

		} else {
			res = 0;
			break;
		}
	}

	if (res) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}

int main() {
	int T; scanf("%d", &T);

	while (T--) {
		s();
	}

	return 0;
}