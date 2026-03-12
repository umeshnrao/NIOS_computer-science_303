
/* Question : 
 * Create a structure named General_Date with day(int), month(string) and year(int)
as its members. Create another structure named Employment_Exchange with
application_no(int), Application_name(String), DOB(instance of General_Date),
Qualification(String) and Family_income(float).
Write a C++ program to accept the members of the structure
Employment_Exchange. If the family income is less than 1000 then display the
message “Eligible for Rozgar Yojna” else display for “ Not Eligible for Rozgar
Yojna”. */


/* 
 * Use structures to create user defined data types
 * struct are created using basic data types like int, char, string, float, double
 * Here we are using the string library to use strings 

*/

#include <iostream>
#include <string>

using namespace std;


// Structure for Date
struct General_Date {
    int day;
    string month;
    int year;
};

// Structure for Employment Exchange details
struct Employment_Exchange {
    int application_no;
    string application_name;
    General_Date DOB; // Instance of General_Date
    string qualification;
    float family_income;
};

int main() {
    Employment_Exchange emp;

    // Accepting Input
    cout << "--- Enter Application Details ---" << endl;
    cout << "Application Number: ";
    cin >> emp.application_no;
    cin.ignore(); // Clear buffer before taking string input

    cout << "Applicant Name: ";
    getline(cin, emp.application_name);

    cout << "Date of Birth (Day Month Year - e.g., 15 May 1995): ";
    cin >> emp.DOB.day >> emp.DOB.month >> emp.DOB.year;
    cin.ignore();

    cout << "Qualification: ";
    getline(cin, emp.qualification);

    cout << "Family Income: ";
    cin >> emp.family_income;

    // Logic Check
    cout << "\n--- Eligibility Status ---" << endl;
    if (emp.family_income < 1000) {
        cout << "Eligible for Rozgar Yojna" << endl;
    } else {
        cout << "Not Eligible for Rozgar Yojna" << endl;
    }

    return 0;
}
