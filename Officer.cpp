#include "Officer.h"
#include <iostream>

using namespace std;

/**
 * @file Officer.cpp
 * @brief Implements the Officer class functions.
 */

/**
 * @brief Default constructor for Officer.
 * 
 * Initializes evilness to a default value of 500.
 */
Officer::Officer() {
  evilness = 500;
}

/**
 * @brief Parameterized constructor for Officer.
 * 
 * Initializes Officer with employee data and evilness level.
 * 
 * @param ID The officer's ID.
 * @param years Years worked.
 * @param hourlyRate Hourly pay rate.
 * @param hoursWorked Hours worked.
 * @param evilness The officer's evilness level.
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) 
  : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

/**
 * @brief Prints officer details.
 * 
 * Calls base Employee print function and then prints evilness level.
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

/**
 * @brief Calculates officer pay.
 * 
 * Pay is based on hourly rate plus evilness factor multiplied by hours worked.
 * 
 * @return The calculated pay.
 */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}