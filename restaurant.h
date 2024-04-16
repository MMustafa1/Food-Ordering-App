#define rest.h
#include <iostream>
using namespace std;
class restaurant
{
public:
	int RestaurantID;
	string RestaurantName;
	string RestaurantAddress;
	string RestaurantManu;
	restaurant();
	void viewmenu();
	void Addmenuitem();
	void removemenuitem();
	~restaurant();

};
