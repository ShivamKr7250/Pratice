#include<iostream>
#include<string>

using namespace std;

class Teacher{
public:
    string name;
    string department;
    string subject;
    float salary;

    void changeDepartment(string newDepart){
        department = newDepart;
    }
};

int main(){
    Teacher t1;
    t1.name ="Supriya Sharma";
    t1.department = "MCA";
    t1.subject = "Data Structures";
    t1.salary = 50000;

    cout<<t1.name<<" "<<t1.department<<endl;
    return 0;
}