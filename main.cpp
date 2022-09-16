/// Things to add in the future
    /// 1. Color change
    /// 2. Previous Page
    /// 3. Project Name
    /// 4. Frame Design
    /// 5.student input more than one

#include <iostream>
//#include<conio.h>
#include<string>
#include<windows.h>
using namespace std;

struct student{
string name;
string department;
int  roll;
};

struct teacher{
    string name;
    string department;
    string position;
};

/// Function for About Developers
void about_developers()
{
    cout << "About Us\n\n";
}
void add_student()
{
    char enter;
    struct student s1;
    cout<<"\n";
    cout <<"\t\t\t\t  Enter Full Name: ";
    cin >> enter;
    getline(cin, s1.name);
    cout<<"\t\t\t\t  Enter Department: ";
    cin >> enter;
    getline(cin, s1.department);
    cout <<"\t\t\t\t  Enter Roll No: ";
    cin>>s1.roll;
    cout<<"\n";
    cout<<"\t\t\t\t Student Info Added Successfully...."<<endl;
///file handleing part

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

void add_teacher()
{
    char enter;
    struct teacher t1;
    cout<<"\n";
    cout <<"\t\t\t\t  Enter Full Name: ";
    cin >> enter;
    getline(cin, t1.name);
    cout<<"\t\t\t\t  Enter Department: ";
    cin >> enter;
    getline(cin, t1.department);
    cout <<"\t\t\t\t  Enter Position: ";
    cin >> enter;
    getline(cin, t1.position);
    cout<<"\n";
    cout<<"\t\t\t\t Teacher Info Added Successfully...."<<endl;
///file handleing part
}

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
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t     Operations\n\n";
    cout << "\t\t\t\t 1. Add New Staff Info\n";
    cout << "\t\t\t\t 2. Delete Staff Info\n";
    cout << "\t\t\t\t 3. Modify Staff Info\n";
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

