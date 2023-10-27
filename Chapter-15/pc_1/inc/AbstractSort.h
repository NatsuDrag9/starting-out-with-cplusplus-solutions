#ifndef ABSTRACT_SORT_H
#define ABSTRACT_SORT_H

class AbstractSort{
    protected:
        int nComparisons;
    public:
        int compare(int arrElement1, int arrElement2);
        virtual void sort(int arr[], int size) = 0;
        void set_comparisons(int n);
};

class Sort : public AbstractSort{
    public:
        Sort();
        Sort(int _nComparions);
        int get_comparisons();
        virtual void sort(int arr[], int size);
};

#endif