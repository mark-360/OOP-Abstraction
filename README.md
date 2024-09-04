## Source: https://www.youtube.com/watch?v=wN0x9eZLix4&list=WL&index=20&t=14s

1. **Abstraction in Action:**
   - **`class SalaryRaise`:** This is an abstract class with a pure virtual function `DeserveRaise()`. This function is intended to be overridden by derived classes. Abstraction allows us to define an interface without implementing the details.

2. **Concrete Implementation:**
   - **`class BankEmployees`:** This class inherits from `SalaryRaise` and provides a concrete implementation of the `DeserveRaise()` function. It has attributes for employee details such as name, age, years of experience, and salary.

   - **Constructor:** Initializes an instance of `BankEmployees` with the employee's name, age, years of experience, and salary.

   - **`DeserveRaise()` Function:** Determines if the employee is eligible for a salary raise based on their years of experience. If the employee has 10 or more years of experience, their salary is increased by 3,000 pounds. Otherwise, a message is displayed indicating no raise.

3. **Main Function:**
   - The `main()` function collects employee details from the user: name, age, years of experience, and current salary.
   - It then creates an instance of `BankEmployees` with the provided details and calls `DeserveRaise()` to check if the salary should be increased.
