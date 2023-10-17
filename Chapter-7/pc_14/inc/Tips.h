#ifndef TIPS_H
#define TIPS_H

class Tips
{
private:
    float taxRate;

public:
    Tips();
    Tips(float rate);
    float compute_tip(float totalBill, float tipRate);
};

#endif /* TIPS_H */