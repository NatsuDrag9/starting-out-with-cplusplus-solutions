#include <iostream>
#include "inc/WidgetFactory.h"
using namespace std;

int main(void)
{
    WidgetFactory widget;
    widget.get_order_data();
    widget.print_production_days();

    return 0;
}