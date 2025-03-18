#include <stdio.h>

void main() {
	int i;
	scanf("%d", &i);

	for(int j = 1; j <= i; j++) {
		int n;
		scanf("%d", &n);

    n *= 2;

		printf("%d\n", n);
	};
}
