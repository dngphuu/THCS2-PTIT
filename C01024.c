#include <stdio.h>
#include <string.h>

void solve() {
	char N[9]; scanf("%s", N);

	if (N[0] == N[strlen(N) - 1]) {
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

	return 0;
};