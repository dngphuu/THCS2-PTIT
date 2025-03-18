#include <stdio.h>

int main() {
	int first2Digits, last2Digits, T;
	long long N;

	scanf("%d", &T);
	while (T--) {
		scanf("%lld", &N);
		last2Digits = N % 100;

		while (N / 100) {
			N /= 10;
		}

		first2Digits = N;

		if (first2Digits == last2Digits) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}

	

	return 0;
}