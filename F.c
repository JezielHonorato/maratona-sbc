#include <stdio.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);

	n = n*sqrt(3);
	printf("%d",n);

	return 0;
}
#include <iostream>

/*

f(f(x)) = 3x
f(x) = x + y
f(f(x)) = f(x) + z = (x + y) + z = 3x 

*/