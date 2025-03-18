#include <stdio.h>

void ucln() {
	int a, b; scanf("%d%d", &a, &b);
	int r, ucln;

	if (b == 0) {
		ucln = a;
	} else {
		while (a % b != 0) {
			r = a % b;
			a = b;
			b = r;
		}

		ucln = b;	
	}
	
	printf("%d\n", ucln);
}

int main() {
	int T; scanf("%d", &T);

	while (T--) {
		ucln();
	}

	return 0;
}