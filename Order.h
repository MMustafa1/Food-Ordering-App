#define ORDER.h
#include <iostream>
using namespace std;
class Order {
public:
	int orderId;
	string* itemNames;
	int totalPrice;
	Order();
	Order(string* itemNames, int totalPrice);
	void addItem();
	void removeItem();
	void calculateItems();
	void calculateprice();
	void generateOrderId();
	~Order();
};