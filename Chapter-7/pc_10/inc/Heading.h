#ifndef HEADING_H
#define HEADING_H

#include <string>
using namespace std;

class Heading
{
private:
    string companyName, reportName;

public:
    Heading();
    Heading(string cName, string rName);
    void print_heading_one_line();
    void print_heading_four_lines();

};

#endif /* HEADING_H */