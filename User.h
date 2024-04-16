#define User.h
#include <iostream>
using namespace std;
class user
{
	int mobile_num;
	string email;
	string password;
	string address;
public:
	string name;

	user() {};
	void registration();
	void login();
	~user() {};

};
