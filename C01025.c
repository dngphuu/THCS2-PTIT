#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int a;
	int x[4] = {0},
		y[4] = {0};

	scanf("%d%d%d%d", &x[0], &y[0], &x[1], &y[1]);
	scanf("%d%d%d%d", &x[2], &y[2], &x[3], &y[3]);

	int max_x = x[0], min_x = x[0];
	int max_y = y[0], min_y = y[0];

	for (int i = 0; i < 4; i++) {
		if (x[i] > max_x) max_x = x[i];
		if (x[i] < min_x) min_x = x[i];

		if (y[i] > max_y) max_y = y[i];
		if (y[i] < min_y) min_y = y[i];
	}

	if (max_x - min_x >= max_y - min_y) {
		a = max_x - min_x;
	} else {
		a = max_y - min_y;
	}

	printf("%d", a * a);

	return 0;
}