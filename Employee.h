#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * @file Employee.h
 * @brief Defines the base Employee class.
 */

/**
 * @class Employee
 * @brief Represents a basic employee with ID, years worked, hourly rate, and hours worked.
 * 
 * This is a base class intended to be extended by other roles such as Supervisor and Officer.
 */
class Employee {
 private:
  int ID;      /**< Employee ID */
  int years;   /**< Number of years employed */
  
 protected:
  double hourlyRate;   /**< Employee hourly pay rate */
  float hoursWorked;   /**< Number of hours worked */

 public:
  /**
   * @brief Prints employee information.
   */
  virtual void print();

  /**
   * @brief Calculates employee pay.
   * @return Total pay based on hourly rate and hours worked.
   */
  virtual double calculatePay();

  /**
   * @brief Updates employee anniversary information.
   */
  void anniversary();

  /**
   * @brief Default constructor for Employee.
   */
  Employee();

  /**
   * @brief Parameterized constructor for Employee.
   * @param ID Employee ID
   * @param years Years employed
   * @param hourlyRate Hourly pay rate
   * @param hoursWorked Hours worked
   */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H