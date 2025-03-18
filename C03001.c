#include <stdio.h>

void solve() {
	int n; scanf("%d", &n);
	int s = 0;

	while (n > 0) {
		s += n % 10;

		n /= 10;
	}

	if (s % 10 == 0) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}

int main() {
	int T; scanf("%d", &T);

	while (T--) {
		solve();
	}

	return 0;
}