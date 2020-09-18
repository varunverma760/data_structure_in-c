#include <stdio.h>

int main(void) {
	float radius;
	double area;
	printf(" Enter the Radius of the Circle \n",radius);
	scanf("%f \n",&radius);
	area = 3.14 * radius *radius;
	printf("\n Area = %.2lf",area);
	return 0;
}
