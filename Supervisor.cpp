#include "Supervisor.h"
#include <iostream>

using namespace std;

/**
 * @file Supervisor.cpp
 * @brief Implements the Supervisor class functions.
 */

/**
 * @brief Default constructor for Supervisor.
 * 
 * Initializes the number of supervised employees to -1.
 */
Supervisor::Supervisor() {
  numSupervised = -1;
}

/**
 * @brief Parameterized constructor for Supervisor.
 * 
 * Initializes the Supervisor with employee details and the number of employees supervised.
 * 
 * @param ID The supervisor's ID.
 * @param years The number of years worked.
 * @param hourlyRate The hourly pay rate.
 * @param hoursWorked The number of hours worked.
 * @param numSupervised The number of employees supervised.
 */
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) 
  : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}

/**
 * @brief Prints the supervisor's details.
 * 
 * Calls the base Employee print function and then prints
 * the number of employees supervised.
 */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}

/**
 * @brief Calculates the supervisor's pay.
 * 
 * The supervisor receives a bonus based on the number of employees supervised.
 * 
 * @return The total calculated pay.
 */
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}