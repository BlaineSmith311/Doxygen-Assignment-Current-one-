#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

/**
 * @file Supervisor.h
 * @brief Defines the Supervisor class, which extends Employee.
 */

/**
 * @class Supervisor
 * @brief Represents a supervisor who manages employees.
 * 
 * Inherits from the Employee class and adds functionality
 * for tracking the number of employees supervised.
 */
class Supervisor : public Employee {
 private:
  int numSupervised; /**< Number of employees supervised */

 public:
  /**
   * @brief Prints supervisor details.
   */
  void print();

  /**
   * @brief Calculates the supervisor's pay.
   * @return The calculated pay as a double.
   */
  double calculatePay();

  /**
   * @brief Default constructor for Supervisor.
   */
  Supervisor();

  /**
   * @brief Parameterized constructor for Supervisor.
   * 
   * @param ID The supervisor's ID.
   * @param years Years worked.
   * @param hourlyRate Hourly pay rate.
   * @param hoursWorked Number of hours worked.
   * @param numSupervised Number of employees supervised.
   */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H