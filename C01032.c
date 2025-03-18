#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

void solve() {
	int n; scanf("%d", &n);
	int sq = sqrt(n);
	int res = 1;

	for (int i = 2; i <= sq; i++) {
		if (n % i == 0) res *= i;

		while (n % i == 0) {
			n /= i;
		}
	}

	if (n > 1) res *= n;

	printf("%d\n", res);
}

int main() {
	int T; scanf("%d", &T);

	while (T--) {
		solve();
	}

	return 0;
}