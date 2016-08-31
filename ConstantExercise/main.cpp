#include <iostream>
#include <string>
using std::string;

struct Abomination
{
	string name;
	int teeth;
	int limbs;
	int mouths;
};

Abomination createAbom()
{
	Abomination abom;
	abom.name = "DEFAULT";

	char tempName[80];

	printf("Name the abomination: \n");
	std::cin >> abom.name;
	printf("How many teeth does it have: \n");
	scanf_s("%d", &abom.teeth);
	printf("How many limbs does it have: \n");
	scanf_s("%d", &abom.limbs);
	printf("How many mouths does it have: \n");
	scanf_s("%d", &abom.mouths);

	return abom;
}

Abomination modifyAbom()
{
	Abomination abom;
	


}
int main()

{
	const int array_size = 20;


	Abomination abom[i];
	for (int i = 0; i < array_size; ++i)
	{
		Abomination abom = createAbom();
		printf("Name: %s \nTeeth : %d \nLimbs : %d \nMouths : %d", abom.name.c_str(), abom.teeth, abom.limbs, abom.mouths);
		system("pause");
		Abomination modifyAbom;
		printf("Name: %s \nTeeth : %d \nLimbs : %d \nMouths : %d", abom.name.c_str(), abom.teeth, abom.limbs, abom.mouths);
	}
	
	system("pause");
}