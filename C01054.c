#include <stdio.h>
#include <math.h>
#include <string.h>

int p[2000001];

void ini() {
	for (int i = 1; i <= 2000000; i++) {
		p[i] = i;
	}

	for (int i = 2; i * i <= 2000000; i++) {
		if (p[i] == i) {
			for (int j = i * i; j <= 2000000; j += i) {
				// Truong hop lay 2 -> 12 va 3 -> 12 dam bao khong conflict
				if (p[j] == j) p[j] = i;
			}
		}
	}
}


int tinhTong(int n) {
	int tong = 0;

	while (n != 1) {
		tong += p[n];
		n /= p[n];
	}

	return tong;
}

int main() {
	int t; scanf("%d", &t);
	long long res = 0;
	ini();

	while (t--) {
		int n; scanf("%d", &n);
		res += tinhTong(n);
	}

	printf("%lld", res);
	return 0;
}