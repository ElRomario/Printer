#include <string>
#include "Person.h"
#include "windows.h"
#include <iostream>
#include <vector>
#include <queue>
#include <iomanip>
using namespace std;

int main()
{
    vector<Person> clients;
    Person per1("Alexandr", "Zhuzhev", 0);
    clients.push_back(per1);
    Person per2("Mister", "Cox", 3);
    clients.push_back(per2);
    Person per3("Sasha", "Mesyaceva", 1);
    clients.push_back(per3);
    Person per4("Roman", "Zabor", 2);
    clients.push_back(per4);
    Person per5("Peter", "Griffin", 0);
    clients.push_back(per5);
    Person per6("Denya", "Zarubin", 2);
    clients.push_back(per6);
    Person per7("Viktor", "Csoi", 3);
    clients.push_back(per7);
    Person per8("Ilya", "Coder", 1);
    clients.push_back(per8);
    Person per9("Zhenya", "Krilov", 0);
    clients.push_back(per9);
    Person per10("Uliana", "Verhova", 3);
    clients.push_back(per10);
    Person per11("Sean", "Delany", 1);
    clients.push_back(per11);
    Person per12("Bob", "Dilan", 1);
    clients.push_back(per12);

    for (int i = 0; i < 11; i++)
    {
        cout << clients[i];
    }
    cout << "***************************************************"<<endl;
    queue<Person> AdminQu;
    queue<Person> StudentQu;
    queue<Person> TeacherQu;
    queue<Person> VisitorQu;

    for(int i =0; i < clients.size(); i++ )
        switch(clients[i].GetPriority())
        {
        case(3):AdminQu.push(clients[i]); break;
        case(2):TeacherQu.push(clients[i]); break;
        case(1):StudentQu.push(clients[i]); break;
        case(0):VisitorQu.push(clients[i]); break;
        }
    int idSetter = 1;
    int adminSize = AdminQu.size();
    int teacherSize = TeacherQu.size();
    int studentSize = StudentQu.size();
    int visitorSize = VisitorQu.size();

    cout << "ID" << setw(3)<<"|"<<setw(4) << "Name" << setw(6)<<"|"<<setw(7) << "Surname" <<setw(4)<<"|" << setw(5) << "Priority" << setw(7)<<"|" << "Print time"  << endl;

    for (int i = 0; i < adminSize; i++, idSetter++)
    {
       Sleep(5000);
        AdminQu.front().Increementtime();
        AdminQu.front().SetId(idSetter);
        cout << AdminQu.front();
        AdminQu.pop();

    }
    for (int i = 0; i < teacherSize; i++, idSetter++)
    {
        Sleep(5000);
        TeacherQu.front().Increementtime();
        TeacherQu.front().SetId(idSetter);
        cout << TeacherQu.front();
        TeacherQu.pop();

    }
    for (int i = 0; i < studentSize; i++, idSetter++)
    {
         Sleep(5000);
        StudentQu.front().Increementtime();
        StudentQu.front().SetId(idSetter);
        cout << StudentQu.front();
        StudentQu.pop();

    }
    for (int i = 0; i < visitorSize; i++, idSetter++)
    {
        Sleep(5000);
        VisitorQu.front().Increementtime();
        VisitorQu.front().SetId(idSetter);
        cout << VisitorQu.front();
        VisitorQu.pop();

    }
   
    
}

