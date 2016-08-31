#include <iostream>

void main()
{
	int var = 45; //Owner
	int &ref = var; //User
	int *ptr = &var; //Pointer

	printf("Variable: %d\n", &var);
	printf("&Reference: %d\n", &ref);
	printf("Pointer: %d\n", ptr);
	printf("&Pointer: %d\n", &ptr);

	system("pause");

}