#ifndef ABSTRACT_SEQUENCE_H
#define ABSTRACT_SEQUENCE_H

class AbstractSequence{
    // protected:
    //     int sum;

    public:
        virtual int fun(int k) = 0;
        void print_seq(int k, int m);
        int sum_seq(int k, int m);
        // void set_sum(int _sum);
};

class Sequence1 : public AbstractSequence{
    public:
        Sequence1();
        virtual int fun(int k);
};

class Sequence2 : public AbstractSequence{
    public:
        Sequence2();
        virtual int fun(int k);
};

#endif /* ABSTRACT_SEQUENCE_H */