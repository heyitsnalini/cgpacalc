// function declarations
#include <string>

using namespace std;

class Student {

    string filename;
    double gpa;
    double units;

    public:

    Student(string username);
    void addGrade(int units, char grade);
    double getGPA();

};


