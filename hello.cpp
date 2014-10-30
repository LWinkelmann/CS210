// Author: Lucas Winkelmann
// Class: CS210
// Descrpition: Prints hello and username

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	// Initilize the string name
	string name;
	// Make the name equal to the username that is loged in via ssh
	name = argv[10];
	// If name does not exist then simply print hello world.
	if (name == " ")	
		cout << "Hello World" << endl;
	//Otherwise print out Hello, username
	else
	{
		name.erase(0, 5);
		cout << "Hello " << name  << endl;
	}
}

