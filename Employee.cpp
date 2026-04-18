#include "Employee.h"
#include <iostream>

using namespace std;

/**
 * @file Employee.cpp
 * @brief Implements the Employee class functionality.
 */

/**
 * @brief Default constructor for Employee.
 * 
 * Initializes all attributes to -1 to indicate uninitialized state.
 */
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}

/**
 * @brief Parameterized constructor for Employee.
 * 
 * Initializes an Employee object with provided values.
 * 
 * @param ID Employee ID
 * @param years Number of years employed
 * @param hourlyRate Hourly pay rate
 * @param hoursWorked Number of hours worked
 */
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

/**
 * @brief Prints employee information.
 */
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}

/**
 * @brief Processes employee anniversary update.
 * 
 * Increases years of service and slightly increases hourly rate.
 */
void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;

  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}

/**
 * @brief Calculates employee pay.
 * @return Total pay based on hourly rate and hours worked.
 */
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}