#include <iostream>
#include <string>

using namespace std;

int getUserInput();//You must declare the function first!!

int main() {
	//Fuctions in ACTION!
	string userinp;
	 userinp = getUserInput();
}
//Function definition
int getUserInput() {
	cout << "Type in something ... \n";
	int userinp;
	cin >> userinp;
	return userinp;
}