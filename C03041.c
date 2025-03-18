#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void solve() {
	int x1, y1, x2, y2; scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

	if (abs(x1 - x2) == abs(y1 - y2)) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}

}

int main() {
	int t; scanf("%d", &t);

	while (t--) {
		solve();
	}

	return 0;
}