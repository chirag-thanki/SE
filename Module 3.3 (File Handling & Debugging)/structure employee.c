#include <stdio.h>

struct employee 
{
    int no;
    char name[50];
    char address[100];
    int age;
};

void printEmployee(struct employee p) 
{
	printf("Employee No.=%d\nEmployee name=%s\nEmployee Address=%s\nEmployee Age=%d",p.no,p.name,p.address,p.age);
}

int main() 
{
	struct employee p1 = { 1, "Chirag Thanki", "Ahmedabad", 25 };
    struct employee p2 = { 2, "Shivarsh Vaghela", "Jamnagar", 23};
    struct employee p3 = { 3, "Dilip Dabhi", "Bhavnagar", 22 };
    struct employee p4 = { 4, "Harsh Patel","Unja", 24 };
    struct employee p5 = { 5, "Shivam Sharma", "Rajasthan", 18 };
	

    printf("Details of employee 1:\n");
    printEmployee(p1);

    printf("\n\nDetails of employee 2:\n");
    printEmployee(p2);
	
	printf("\n\nDetails of employee 3:\n");
    printEmployee(p3);
    
    printf("\n\nDetails of employee 4:\n");
    printEmployee(p4);
    
    printf("\n\nDetails of employee 5:\n");
    printEmployee(p5);
}

