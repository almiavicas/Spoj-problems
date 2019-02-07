#include <stdio.h>

int F(int x);

int primes[100002];

int main() {
	int x;
	scanf("%d", &x);
	printf("%d\n", F(x));
	return 0;
}

int F(int x) {
	if (x <= 2) return x;
	if (!(x % 2)) return 2 + F(x / 2);
	return 0;
}
