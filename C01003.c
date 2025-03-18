#include <stdio.h>

void main() {
	long int i;
	scanf("%ld", &i);

	for(long int j = 1; j <= i; j++) {
		long int n;
		scanf("%ld", &n);

    n *= n;

		printf("%ld\n", n);
	};
}
