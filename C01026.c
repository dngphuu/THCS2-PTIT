#include <stdio.h>

void solve() {
	int N; scanf("%d", &N);
	int isPrime = 1; 

	if (N < 2) {
		isPrime = 0;
	} else {
		for (int i = 2; i * i <= N; i++) {
			if (N % i == 0) {
				isPrime = 0;
			};
		};
	};

	if (isPrime) {
		printf("YES\n");
	} else {
		printf("NO\n");
	};

};

int main() {
	int T; scanf("%d", &T);

	while (T--) {
		solve();
	};
};