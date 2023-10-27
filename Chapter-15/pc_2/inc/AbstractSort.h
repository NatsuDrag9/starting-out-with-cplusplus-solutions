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

class QuickSort : public AbstractSort{
    public:
        QuickSort();
        QuickSort(int _nComparions);
        int get_comparisons();
        int partition(int arr[], int lb, int ub);
        void quick_sort(int arr[], int lb, int ub);
        virtual void sort(int arr[], int size);
};

#endif