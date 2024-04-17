#define cart.h
#include <iostream>
using namespace std;
class cart
{
 public:
    int total_items;
    int total_price;
    cart();
    void add_item;
    void remove_item;
    void calculate_total;
    ~cart();
};
