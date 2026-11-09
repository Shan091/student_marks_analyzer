#include <iostream>
using namespace std;

const int PASS_MARK = 50;

int getStudentCount()
{
    int count;
    while (true)
    {
        cout << "Enter the number of students (1-100): ";
        cin >> count;

        if (count >= 1 && count <= 100)
        {
            return count;
        }
        cout << "Invalid input. The number of students must be between 1 and 100.\n";
    }
}

void readMarks(int marks[], int size)
{
    cout << "\n--- Enter Marks ---\n";
    for (int i = 0; i < size; ++i)
    {
        cout << "Enter mark for student " << i + 1 << ": ";
        cin >> marks[i];
    }
}

int calculateTotal(const int marks[], int size)
{
    int total = 0;
    for (int i = 0; i < size; ++i)
    {
        total += marks[i];
    }
    return total;
}

double calculateAverage(int total, int size)
{
    return (total) / size;
}

// 4a. Function to find the highest mark
int findHighest(const int marks[], int size)
{
    int highest = marks[0];
    for (int i = 1; i < size; ++i)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }
    return highest;
}

int findLowest(const int marks[], int size)
{
    int lowest = marks[0];
    for (int i = 1; i < size; ++i)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }
    return lowest;
}

void countPassFail(const int marks[], int size, int &passed, int &failed)
{
    passed = 0;
    failed = 0;
    for (int i = 0; i < size; ++i)
    {
        if (marks[i] >= PASS_MARK)
        {
            passed++;
        }
        else
        {
            failed++;
        }
    }
}

int main()
{
    char runAgain;

    do
    {
        cout << "\n=== Student Marks Analyzer ===\n";

        int numStudents = getStudentCount();

        int *marks = new int[numStudents];

        readMarks(marks, numStudents);

        int total = calculateTotal(marks, numStudents);
        double average = calculateAverage(total, numStudents);
        int highest = findHighest(marks, numStudents);
        int lowest = findLowest(marks, numStudents);

        int passedCount, failedCount;
        countPassFail(marks, numStudents, passedCount, failedCount);

        cout << "\n=== Analysis Results ===\n";
        cout << "Total Marks:     " << total << endl;
        cout << "Average Mark:    " << average << endl;
        cout << "Highest Mark:    " << highest << endl;
        cout << "Lowest Mark:     " << lowest << endl;
        cout << "Students Passed: " << passedCount << endl;
        cout << "Students Failed: " << failedCount << endl;

        delete[] marks;

        cout << "\nWould you like to run the analysis again? (Y/N): ";
        cin >> runAgain;

    } while (runAgain == 'y' || runAgain == 'Y');

    cout << "Exiting program. Goodbye!\n";
    return 0;
}