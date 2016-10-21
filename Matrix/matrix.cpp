#include <cstdlib> //
#include <string>
#include <windows.h>
#include <iostream>


int main()
{

	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	//       MAIN          +
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int i = 0;
	int k = 2;
	SetConsoleTextAttribute(hConsole, k);
	const char * ar[] = { "0", "1", };
	std::string  str = "";
	std::cout << "\n                  " << "[ MATRIX ]" << " by =Sir Alex= \n" << std::endl;
	system("pause");
	while (i < 100) {
		for (int j = 0; j < 100; j++) str += ar[rand() % (sizeof ar / sizeof(char *))];
		std::cout << "     " << str << std::endl;
		str = "";
		Sleep(95);
		i++;
	}
	SetConsoleTextAttribute(hConsole, 14);
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	//       FUTER          +
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

	std::cout << "\n                  " << "[ coLor MATRIX ]" << " by =Sir Alex= \n" << std::endl;
	system("pause");
	int i1 = 0;
	std::string  str1 = "";
	while (i1 < 15) {
		SetConsoleTextAttribute(hConsole, i1);
		for (int j = 0; j < 100; j++) str1 += ar[rand() % (sizeof ar / sizeof(char *))];
		std::cout << "     " << str1 << std::endl;
		str1 = "";
		Sleep(95);
		i1++;
	}
	system("pause");
	return 0;
}
