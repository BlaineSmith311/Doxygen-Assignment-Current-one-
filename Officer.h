#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * @file Officer.h
 * @brief Defines the Officer class, which extends Employee.
 */

/**
 * @class Officer
 * @brief Represents an officer employee with an added "evilness" factor.
 * 
 * Inherits from Employee and modifies pay based on an additional attribute.
 */
class Officer : public Employee {
 private:
  double evilness; /**< Represents the officer's evilness level */

 public:
  /**
   * @brief Prints officer details.
   */
  void print();

  /**
   * @brief Calculates the officer's pay.
   * @return The calculated pay as a double.
   */
  double calculatePay();

  /**
   * @brief Default constructor for Officer.
   */
  Officer();

  /**
   * @brief Parameterized constructor for Officer.
   * 
   * @param ID The officer's ID.
   * @param years Years worked.
   * @param hourlyRate Hourly pay rate.
   * @param hoursWorked Hours worked.
   * @param evilness The officer's evilness level.
   */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H