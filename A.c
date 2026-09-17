#include <stdio.h>

int main() {
	int n, c, v;
	scanf("%d", &n);
	
	int numerador[n];

	scanf("%d %d", &c, &v);
	numerador[0] = c - v;

	for(int i = 1; i < n; i++) {
		scanf("%d %d", &c, &v);
		numerador[i] = c - v + numerador[i-1];
	}

	scanf("%d", &n);
	int q[n];

	for(int i = 0; i < n; i++) {
		scanf("%d", &q[i]);
	}

	for(int i = 0; i < n; i++) {
		if(numerador[q[i]-1] > 0) {
			printf("COMPRA\n");
		} else if (numerador[q[i]-1] == 0) {
			printf("NEUTRO\n");
		} else {
			printf("VENDA\n");
		}
	}

	return 0;
}