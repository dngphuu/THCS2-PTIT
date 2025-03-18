#include <stdio.h>

void main() {
	int i;
	scanf("%d", &i);

	for(int j = 1; j <= i; j++) {
		double n;
		scanf("%lf", &n);

    n = 1 / n;

		printf("%.15lf\n", n);
	};
}
