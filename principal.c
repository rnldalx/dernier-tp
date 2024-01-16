#include "pi.h"
#include <stdio.h>
int main() {
	float ray;
	printf("rayon?");
	scanf("%f",&ray);
	printf( "%f %f",circ(ray),surf(ray));
	return 0;
}
