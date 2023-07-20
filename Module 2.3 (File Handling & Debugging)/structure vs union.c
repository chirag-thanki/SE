//differences between structure and Union
#include <stdio.h>
#include <string.h>

// declaring structure
struct s1 
{
	int integer;
	float decimal;
	char name[20];
};

// declaring union
union u1 
{
	int integer;
	float decimal;
	char name[20];
};

void main()
{

	struct s1 S= {24, 12.5, "Chigs"};

	union u1 U= {24, 12.5, "Chigs"};

	printf("structure data:\ninteger: %d\n"
		"decimal: %.2f\nname: %s\n",
		S.integer, S.decimal, S.name);
	printf("\nunion data:\ninteger: %d\n"
		"decimal: %.2f\nname: %s\n",
		U.integer, U.decimal, U.name);

	// difference
	printf("\nsizeof structure: %d\n", sizeof(S));
	printf("sizeof union: %d\n", sizeof(U));
}

