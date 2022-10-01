/// Things to add in the future
    /// 1. Color change
    /// 2. Previous Page
    /// 3. Project Name
    /// 4. Frame Design
    /// 5.student input more than one

#include <iostream>
//#include<conio.h>
#include<string>
#include <fstream>
#include<windows.h>
using namespace std;

void add_student();
void add_teacher();
void add_staff();

struct student {
string name;
string department;
int  roll;
};

struct teacher {
    string name;
    string department;
    string position;
};

struct staff {
    string name;
    string department;
    string position;
};

/// Function for About Developers
void about_developers()
{
    cout << "About Us\n\n";
}

/// Function for Student Operations
void student_op()
{
    char operation;
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t     Operations\n\n";
    cout << "\t\t\t\t 1. Add New Student Info\n";
    cout << "\t\t\t\t 2. Delete Student Info\n";
    cout << "\t\t\t\t 3. Modify Student Info\n";
    cout<<"\n";
    while(1)
    {cout<<"\t\t\t   Which Operation do you want to perform?: ";
    cin>>operation;
    if(operation=='1')
    {
        add_student();
        break;
    }
    else if(operation=='2')
    {
        break;
    }
    else if(operation=='3')
    {
        break;
    }

    }


}

/// Function for adding new student
void add_student()
{
    int sz, line_count = 0, student_count;
    char line[2000];

    struct student s1;
    cout<<"\n";
    ifstream read_info;
    ofstream write_info;

    ///name-department input  single
    read_info.open("student.csv",ifstream::app);
    read_info.seekg(0,read_info.end);
    ifstream inFile("student.csv");


    sz = read_info.tellg();
    if (sz == 0) {
            write_info.open("student.csv", ios::app);
            write_info << "Name" << "," << "Department" << "," << "Roll" << "\n";
    }
    else
    {
        line_count--;
    }
        ///roll,department,name input
    ofstream student_info_append("student.csv", ios::app);
    cout<<"\n";

    while(inFile.eof() == 0)
    {
        inFile.getline(line,sizeof(line));
        ++line_count;
    }

    cout << "\n\n\n\n\n";
    cout << "\t\t\t   How Many Students Do You Want To Add?: ";
    cin >> student_count;
    cout << "\n\n";

    for (int i = 0; i < student_count; i++)
    {

        cout <<"\t\t\t\t Enter Full Name: ";
        getline(cin >> ws, s1.name);

        cout<<"\t\t\t\t Enter Department: ";
        getline(cin >> ws, s1.department);

        cout <<"\t\t\t\t Enter Roll No: ";
        cin>>s1.roll;

        cout<<"\n";

        student_info_append << s1.name << "," << s1.department << "," << s1.roll << "\n";
        cout<< "\t\t\t  Student Info Added Successfully....\n"<< endl;
    }
    write_info.close();
}

/// Function for student info
void student_info()
{
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t     Students' Info\n\n";
    cout << "\t\t\t\t 1. Operations\n";
    cout << "\t\t\t\t 2. Find Student Info\n\n";

    char student_info_op;
    cout << "\t\t\t  Which Operation do you want to perform?: ";
    cin >> student_info_op;

    if (student_info_op == '1') {
        /// Go to operations
        student_op();
    }
    else if (student_info_op == '2');
        /// Go to find student info

}

/// Function for handling teacher operations
void teacher_op()
{
    char operation;
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t     Operations\n\n";
    cout << "\t\t\t\t 1. Add New Teacher Info\n";
    cout << "\t\t\t\t 2. Delete Teacher Info\n";
    cout << "\t\t\t\t 3. Modify Teacher Info\n\n";

    while(1)
    {
        cout << "\t\t\t   Which Operation do you want to perform?: ";
        cin >> operation;
        if(operation=='1')
        {
            add_teacher();
            break;
        }
        else if(operation=='2')
        {
            break;
        }
        else if(operation=='3')
        {
            break;
        }

    }
}

/// Function for adding new teacher
void add_teacher()
{
    int sz, line_count = 0, teacher_count;
    char line[2000];

    struct teacher t1;
    cout<<"\n";
    ifstream read_info;
    ofstream write_info;

    ///name-department input  single
    read_info.open("teacher.csv",ifstream::app);
    read_info.seekg(0,read_info.end);
    ifstream inFile("teacher.csv");


    sz = read_info.tellg();
    if (sz == 0) {
            write_info.open("teacher.csv", ios::app);
            write_info << "Name" << "," << "Department" << "," << "Position" << "\n";
    }
    else
    {
        line_count--;
    }
        ///department,name, position input
    ofstream teacher_info_append("teacher.csv", ios::app);
    cout<<"\n";

    while(inFile.eof() == 0)
    {
        inFile.getline(line,sizeof(line));
        ++line_count;
    }

    cout << "\n\n\n\n\n";
    cout << "\t\t\t   How Many Teachers Do You Want To Add?: ";
    cin >> teacher_count;
    cout << "\n\n";

    for (int i = 0; i < teacher_count; i++)
    {

        cout <<"\t\t\t\t Enter Full Name: ";
        getline(cin >> ws, t1.name);

        cout<<"\t\t\t\t Enter Department: ";
        getline(cin >> ws, t1.department);

        cout <<"\t\t\t\t Enter Position: ";
        getline(cin >> ws, t1.position);

        cout<<"\n";

        teacher_info_append << t1.name << "," << t1.department << "," << t1.position << "\n";
        cout<< "\t\t\t  Teacher Info Added Successfully....\n"<< endl;
    }
    write_info.close();
}

/// Function for teacher info
void teacher_info()
{
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t     Teacher's Info\n\n";
    cout << "\t\t\t\t 1. Operations\n";
    cout << "\t\t\t\t 2. Find Teacher Info\n\n";
    char teacher_info_op;
    cout << "\t\t\t  Which Operation do you want to perform?: ";
    cin >> teacher_info_op;
    if(teacher_info_op=='1')
    {
        ///Go to teacher operation
        teacher_op();
    }
    else if(teacher_info_op=='2');
    {
       ///go to previous teacher info finding page

    }
}


/// Function for Staff Operations
void staff_op()
{
    char operation;
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t     Operations\n\n";
    cout << "\t\t\t\t 1. Add New Staff Info\n";
    cout << "\t\t\t\t 2. Delete Staff Info\n";
    cout << "\t\t\t\t 3. Modify Staff Info\n\n";

    while(1)
    {
        cout << "\t\t\t   Which Operation do you want to perform?: ";
        cin >> operation;
        if(operation == '1')
        {
            add_staff();
            break;
        }
        else if(operation == '2')
        {
            break;
        }
        else if(operation == '3')
        {
            break;
        }

    }
}

/// Function for adding new staff
void add_staff()
{
    int sz, line_count = 0, staff_count;
    char line[2000];

    struct staff st1;
    cout<<"\n";
    ifstream read_info;
    ofstream write_info;

    ///name-department input  single
    read_info.open("staff.csv",ifstream::app);
    read_info.seekg(0,read_info.end);
    ifstream inFile("staff.csv");


    sz = read_info.tellg();
    if (sz == 0) {
            write_info.open("staff.csv", ios::app);
            write_info << "Name" << "," << "Department" << "," << "Position" << "\n";
    }
    else
    {
        line_count--;
    }
        ///department,name, position input
    ofstream staff_info_append("staff.csv", ios::app);
    cout<<"\n";

    while(inFile.eof() == 0)
    {
        inFile.getline(line,sizeof(line));
        ++line_count;
    }

    cout << "\n\n\n\n\n";
    cout << "\t\t\t   How Many Staffs Do You Want To Add?: ";
    cin >> staff_count;
    cout << "\n\n";

    for (int i = 0; i < staff_count; i++)
    {

        cout <<"\t\t\t\t Enter Full Name: ";
        getline(cin >> ws, st1.name);

        cout<<"\t\t\t\t Enter Department: ";
        getline(cin >> ws, st1.department);

        cout <<"\t\t\t\t Enter Position: ";
        getline(cin >> ws, st1.position);

        cout<<"\n";

        staff_info_append << st1.name << "," << st1.department << "," << st1.position << "\n";
        cout<< "\t\t\t  Staff Info Added Successfully....\n"<< endl;
    }
    write_info.close();
}

/// Function for Staff Info
void staff_info()
{
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t     Staff Info\n\n";
    cout << "\t\t\t\t 1. Operations\n";
    cout << "\t\t\t\t 2. Find Staff Info\n\n";

    char staff_info_op;
    cout << "\t\t\t  Which Operation do you want to perform?: ";
    cin >> staff_info_op;

    if (staff_info_op == '1') {
        /// Go to operations
        staff_op();
    }
    else if (staff_info_op == '2');
        /// Go to find staff info
}


int main(){

    char start_page_operation;
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,9);
   cout<<endl;
   cout<<"\t\t\t       "<<"pzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpz";
   cout<<endl<<"\t\t\t       ~\t\t\t\t\t\t    ~"<<endl<<"\t\t\t       ~\t\t\t\t\t\t    ~";
   cout<<""<<endl;//project name
   cout<<"\t\t\t       ~\t"<<" Student Record Management System"<<"\t    ~"<<endl;
   cout<<"\t\t\t       ~\t"<<"\t\t\t\t\t    ~"<<"\n";
   cout<<"\t\t\t       ~\t"<<"\t\t\t\t\t    ~"<<"\n";
   cout<<"\t\t\t       ~\t"<<"   Developed By: Pavel && Zunaid\t    ~"<<endl<<"\t\t\t       ~\t\t\t\t\t\t    ~"<<endl;
   cout<<"\t\t\t       ~\t\t    "<<"IIT-12\t\t\t    ~"<<endl<<"\t\t\t       ~\t\t\t\t\t\t    ~"<<endl;
   cout<<"\t\t\t       ~\t     "<<"Jahangirnagar University\t\t    ~"<<endl<<"\t\t\t       ~\t   \t\t\t\t\t    ~"<<endl;
   cout<<"\t\t\t       ~\t     \t\t\t\t\t    ~"<<endl<<"\t\t\t       ~\t     \t\t\t\t\t    ~"<<endl;
   cout<<"\t\t\t       "<<"zpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzpzp" << endl << endl;
   cout << "\t\t\t       \t\t   Press ENTER To Continue"<<ends;

   while (cin.get() != '\n')
   {
       cin.get();
   }
   cout << endl<< endl<< endl<< endl<< endl;

   ///Start Page

   cout << "\t\t\t\t\t\t    Welcome!!" << endl << endl;
   /// Student Info
   cout << "\t\t\t\t1. Students' Info\n";
   /// Techer Info
   cout << "\t\t\t\t2. Teachers' Info\n";
   /// Staff Info
   cout << "\t\t\t\t3. Staff Info\n";
   /// About Us
   cout << "\t\t\t\t4. About The Developers\n\n";
   /// Call an operation
   cout << "\t\t\t  Which Operation do you want to perform or ESC to Exit?: ";
   cin >> start_page_operation;

   while (1)
   {
   if (start_page_operation == '1') {
    /// Go to student info
        student_info();
        break;
   }
    else if (start_page_operation == '2'){
        /// Go to teacher info
        teacher_info();
        break;
    }
    else if (start_page_operation == '3') {
        /// Go to staff info
        staff_info();
        break;
    }
    else if (start_page_operation == '4') {
        /// Go to About Us
        about_developers();
        break;
    }
    else if ((int)start_page_operation == 27)
        break;
   }



    //getch();
}

