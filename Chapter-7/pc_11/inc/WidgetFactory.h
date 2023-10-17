#ifndef WIDGET_FACTORY_H
#define WIDGET_FACTORY_H

class WidgetFactory
{
private:
    int hourlyProdRate = 10; // 10 widgets per hour
    int dailyShift = 16;     // Factory operates for 16 hrs per day
    int order;

public:
    WidgetFactory();
    void get_order_data();
    void print_production_days();
};

#endif /* WIDGET_FACTORY_H */