#include <iostream>
using namespace std;

class student
{
public:
    student();
    void setStudentId(int);
    int getStudentId();
    
    //virtual ~student();
private:
    int id;
};

student::student()
{
}

void student::setStudentId(int x)
{
    id = x;
}
int student::getStudentId()
{
    return id;
}

int main(int argc, char *argv[])
{
    int intArray[10];
    //    float arr[100];
    student stud[24];
    
    for (int i = 0; i < 24; ++i)
        {
            //intArray[i] = i + 1;
            stud[i].setStudentId(i+1);
            cout << "stud[" << i << "] Id: " << stud[i].getStudentId() << endl;
        }
    return 0;
}

