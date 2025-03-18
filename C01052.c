#include <stdio.h>
#include <math.h>

void s() {
	int n; scanf("%d", &n);
	int c = 0, sq = sqrt(n);

	for (int i = 1; i <= sq; i++) {
		if (n % i == 0) {
			if (i % 2 == 0) c++;
			if (n / i != i && n / i % 2 == 0) c++;
		}
	}

	printf("%d\n", c);
}

int main() {
	int T; scanf("%d", &T);

	while (T--) {
		s();
	}

	return 0;
}