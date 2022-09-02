#include <iostream>
#include <string>

using namespace std;

class student
{
    private:
        string name;
        int roll_no;
    public:
        //Parameterized constructor
        student(string str, int roll);
        void display();
};

void student :: display(){
    cout<<"Student name: "<<name<<endl;
    cout<<"Student roll no.: "<<roll_no<<endl;
}

student :: student(string str, int roll){
    name = str;
    roll_no = roll;
}

int main()
{
    student s1("John",29);
    s1.display();

    return 0;
}
