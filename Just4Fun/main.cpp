#include<iostream>
#include<istream>
#include<string>
using namespace std;
int main()
{
	char iArray[100]; 
	cin.getline(iArray, sizeof(iArray));
	string convArray = iArray;
	int Cindex = convArray.find("Commando");
	cout << convArray << endl;
	cout << Cindex << endl;
	system("pause"); 
}