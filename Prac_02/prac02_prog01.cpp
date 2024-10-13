#include <array>
#include <vector>
#include <iostream>

namespace HR {
    enum class Title { Manager, SeniorEngineer, Engineer };;

    struct Employee {
        char firstInitial;
        char lastInitial;
        int employeeNumber;
        int salary;
        Title title;
    };
}

void print_title(HR::Employee anEmployee);

using namespace std;

int main() {
    // create and populate an employee
    // HR::Employee anEmployee {
    //     .firstInitial {'J'},
    //     .lastInitial {'D'},
    //     .employeeNumber {42},
    //     .salary {80000},
    //     .title {HR::Title::Manager}
    // };

    // array<HR::Employee, 3> employees {};
    // employees[0] = {
    //     .firstInitial {'J'},
    //     .lastInitial {'D'},
    //     .employeeNumber {42},
    //     .salary {80'000},
    //     .title {HR::Title::Manager}
    // };
    // employees[1] = {
    //     .firstInitial {'L'},
    //     .lastInitial {'C'},
    //     .employeeNumber {7},
    //     .salary {65'000},
    //     .title {HR::Title::Engineer}
    // };
    // employees[2] = {
    //     .firstInitial {'C'},
    //     .lastInitial {'L'},
    //     .employeeNumber {59},
    //     .salary {42'000},
    //     .title {HR::Title::SeniorEngineer}
    // };

    vector<HR::Employee> employees{};
    employees.push_back({
        .firstInitial{'J'},
        .lastInitial{'D'},
        .employeeNumber{42},
        .salary{80'000},
        .title{HR::Title::Manager}
    });
    employees.push_back({
        .firstInitial{'L'},
        .lastInitial{'C'},
        .employeeNumber{7},
        .salary{65'000},
        .title{HR::Title::Engineer}
    });
    employees.push_back({
        .firstInitial{'C'},
        .lastInitial{'L'},
        .employeeNumber{59},
        .salary{42'000},
        .title{HR::Title::SeniorEngineer}
    });

    for (HR::Employee anEmployee: employees) {
        // output the values of an employee
        cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
        cout << "Number: " << anEmployee.employeeNumber << endl;
        cout << "Salary: $" << anEmployee.salary << endl;
        print_title(anEmployee);
        cout << "" << endl; // print blank line separator
    }
}

void print_title(HR::Employee anEmployee) {
    string title_string{};
    switch (anEmployee.title) {
        case HR::Title::Manager:
            title_string = "Manager";
            break;
        case HR::Title::SeniorEngineer:
            title_string = "Senior Engineer";
            break;
        case HR::Title::Engineer:
            title_string = "Engineer";
            break;
        default:
            break;
    }
    cout << "Title: " << title_string << endl;
}
