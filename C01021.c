#include <stdio.h>
#include <string.h>

void solve() {
	char N[9 + 5]; scanf("%s", N);
	int s = 0;

	for (int i = 0; i < strlen(N); ++i) {
		s += N[i] - '0';
	};

	printf("%d\n", s);
}
int main() {
	int j; scanf("%d", &j);

	while (j--) {
		solve();
	};

	return 0;
}