# Student Marks Analyzer

A C++ program designed to analyze a classroom's marks. This mini-project demonstrates the practical use of functions, arrays, `while` loops, and dynamic memory allocation without relying on classes or objects. Built as part of the BCA coursework at Jain University.

## Features
* **Dynamic Data Entry:** Asks the user for the number of students (1-100) and dynamically allocates an array of that exact size using `new[]`.
* **Data Validation:** Rejects invalid student counts and prompts the user to try again.
* **Statistical Analysis:** Calculates the total class marks, average mark, highest mark, and lowest mark.
* **Pass/Fail Tally:** Counts how many students passed and failed based on a designated passing threshold of 50.
* **Continuous Execution:** Allows the user to run the entire analysis again without restarting the program.
* **Memory Management:** Properly frees dynamically allocated memory using `delete[]` to prevent memory leaks.

## How to Run

1. Clone the repository:
   ```bash
   git clone [https://github.com/Shan091/student_marks_analyzer.git](https://github.com/Shan091/student_marks_analyzer.git)
   cd student_marks_analyzer
