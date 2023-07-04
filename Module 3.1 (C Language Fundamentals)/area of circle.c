#include<stdio.h>
#define PI 3.14
main()
{
	float radius;
	printf("Enter the radius value (in cm) of a circle:");
	scanf("%f",&radius);
	//The equation to find the area of circle is A=PI*radius^2
	printf("The area of circle is: %f cm^2", PI*radius*radius);
}
