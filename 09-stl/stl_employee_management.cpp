#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>
#include <numeric> // Include this for std::accumulate

using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee& emp) { // Corrected function name
    cout << "ID: " << emp.id << " , Name: " << emp.name << " , Salary: $" << emp.salary << endl;
}

int main() {

    vector<Employee> employees = {
        {101, "hitesh", 100000},
        {102, "saksham", 200000},
        {103, "shubham", 300000},
        {104, "anirudh", 400000},
        {105, "aryan", 500000},
    };

    sort(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary > e2.salary;
    });
    cout << "Employees sorted by salary -> Highest to Lowest \n";

    for_each(employees.begin(), employees.end(), displayEmployee);

    vector<Employee> highEarners;

    copy_if(
        employees.begin(), 
        employees.end(), 
        back_inserter(highEarners), 
        [](const Employee& e){
            return e.salary > 200000;
        }
    );

    cout << "\nHigh Earners (Salary > 200000):\n";
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    double totalSalary = accumulate(employees.begin(), employees.end(), 0.0, [](double sum, const Employee& e){
        return sum + e.salary;
    });

    double averageSalary = totalSalary / employees.size();
    cout << "\nAverage Salary: $" << averageSalary << endl;

    auto highestPaid = max_element(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary < e2.salary;
    });

    if (highestPaid != employees.end()) {
        cout << "\nHighest Paid Employee:\n";
        displayEmployee(*highestPaid);
    }

    return 0;
}
