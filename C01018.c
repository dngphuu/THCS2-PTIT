#include <stdio.h>
#include <math.h>


void solve() {
	int N; scanf("%d", &N);
	int N_sqrt = sqrt(N);

	if (N_sqrt * N_sqrt == N) {
		printf("YES\n");
	} else {
		printf("NO\n");
	};
};

int main() {
	int i; scanf("%d", &i);

	for (int j = 1; j <= i; ++j) {
		solve();
	};

	return 0;
};
