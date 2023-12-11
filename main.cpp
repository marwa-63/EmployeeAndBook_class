#include <iostream>
using namespace std;

#define EMP_NUM 100
#define BOOK_NUM 100

int emp_count=0;
int book_count=0;

class Employee {
public:
     string name;
     string email;
     int age;
     float salary;
     string phone_number;
    string address;

    void create( string emp_name,  string emp_email, int emp_age, float emp_salary,  string emp_phone,  string emp_address) {
        name = emp_name;
        email = emp_email;
        age = emp_age;
        salary = emp_salary;
        phone_number = emp_phone;
        address = emp_address;
        emp_count++;
    }

    void update( string emp_name,  string emp_email, int emp_age, float emp_salary,  string emp_phone,  string emp_address) {
        name = emp_name;
        email = emp_email;
        age = emp_age;
        salary = emp_salary;
        phone_number = emp_phone;
        address = emp_address;
    }
    void show_all() {
         cout << "Employee Details:" <<"\n";
         cout << "Name: " << name << "\n";
         cout << "Email: " << email << "\n";
         cout << "Age: " << age << "\n";
         cout << "Salary: " << salary << "\n";
         cout << "Phone Number: " << phone_number << "\n";
         cout << "Address: " << address << "\n";
    }

    void deleteEmployee(Employee Emp_arr[], int index) {
         for(int i=index;i<emp_count-1;i++)
        {
             Emp_arr[i]=Emp_arr[i+1];

        }
        emp_count--;
    }

};

class Book {
public:
     string name;
     string author;
    int num_pages;
     string publish_date;

    void create(string book_name,string book_author, int pages, string date) {
        name = book_name;
        author = book_author;
        num_pages = pages;
        publish_date = date;
        book_count++;
    }

    void update(string book_name,string book_author, int pages, string date) {
        name = book_name;
        author = book_author;
        num_pages = pages;
        publish_date = date;
    }


    void show_all() {
        cout << "Book Details:" <<"\n";
        cout << "Name: " << name << "\n";
         cout << "Author: " << author << "\n";
        cout << "Number of Pages: " << num_pages << "\n";
       cout << "Publication Date: " << publish_date <<"\n";
    }

    void deleteBook(Book book_arr[],int index) {

         for(int i=index;i<book_count-1;i++)
        {
             book_arr[i]=book_arr[i+1];

        }
        book_count--;
    }
};

int main() {

    Employee emp_arr[EMP_NUM];
    Book book_arr[BOOK_NUM];

    emp_arr[0].create("marwa","@mail23",20,6000,"1526348","21st");
    emp_arr[1].create("Ali","@mail66",25,6000,"1365897","Alex");
    for(int i=0;i<emp_count;i++)
    {
        emp_arr[i].show_all();
    }
     emp_arr[1].deleteEmployee(emp_arr,1);
     cout<<"------------------after deletion--------------------------"<<"\n";
     for(int i=0;i<emp_count;i++)
    {
        emp_arr[i].show_all();
    }


    book_arr[0].create("CS","author",200,"march");
     for(int i=0;i<book_count;i++)
    {
        book_arr[i].show_all();
    }

    return 0;
}


