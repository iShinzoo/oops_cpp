#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
	fstream fout;
	fout.open("aaa.txt");
	getch();
	fout << "kr rha hu bhai generate";
	getch();
	fout.close();
	return 0;
}