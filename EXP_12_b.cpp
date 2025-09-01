//Piyush Pawar
//24070123145
//B3

#include <iostream>
#include <string>
using namespace std;

class Data
{
    string name;
    int roll_no;
    char dept[50];
    int batch;

    public:
    Data()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Roll Number: ";
        cin >> roll_no;
        cout << "Department: ";
        cin >> dept;
        cout << "Batch: ";
        cin >> batch;
    }

    void display()
    {
        cout << endl << "DETAILS:" << endl << name << "\n" << roll_no << "\n" << dept << "\n" << batch << endl;
    }
};

int main()
{
    Data d1;
    d1.display();
}

/*
Output:
Name: Aashi
Roll Number: 45
Department: Entc
Batch: 23-27

DETAILS:
Aashi
45
Entc
23-27
*/
