#include <iostream>
#include "./inc/AbstractSequence.h"
using namespace std;

int main(void){
    Sequence1 seq1Obj;
    Sequence2 seq2Obj;
    int k = 1, m = 1;
    cout << "Enter k: ";
    cin >> k;
    cout << "Enter m: ";
    cin >> m;

    seq1Obj.print_seq(k, m);
    cout << "Sum of the terms: " << seq1Obj.sum_seq(k, m) << endl;
    
    seq2Obj.print_seq(k, m);
    cout << "Sum of the terms: " << seq2Obj.sum_seq(k, m) << endl;

    return 0;
}