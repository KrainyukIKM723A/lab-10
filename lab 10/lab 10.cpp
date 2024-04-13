#include <iostream> 
#include <string> 
using namespace std;

const int MAX_STUDENTS = 100;

struct Student {
	string surname;
	string faculty;
	string group;
	int absences;
};

void printStudent(const Student& student) {
	cout << "Surname: " << student.surname << endl;
	cout << "Faculty: " << student.faculty << endl;
	cout << "Group: " << student.group << endl;
	cout << "Absences: " << student.absences << endl;
}

int main() {
	Student students[MAX_STUDENTS];
	int numberOfStudents;

	cout << "Enter the number of students: ";
	cin >> numberOfStudents;

	for (int i = 0; i < numberOfStudents; ++i) {
		cout << "Enter information for student #" << i + 1 << endl;
		cout << "Surname: ";
		cin >> students[i].surname;
		cout << "Faculty: ";
		cin >> students[i].faculty;
		cout << "Group: ";
		cin >> students[i].group;
		cout << "Absences: ";
		cin >> students[i].absences;
	}
	cout << "\n========================\n";
	cout << "Full list of students:\n";
	for (int i = 0; i < numberOfStudents; ++i) {
		cout << "\nInformation for student #" << i + 1 << ":\n";
		printStudent(students[i]);
	}

	int maxAbsencesIndex = 0;
	for (int i = 1; i < numberOfStudents - 1; ++i) {
		if (students[i].absences > students[maxAbsencesIndex].absences) {
			maxAbsencesIndex = i;
		}
	}
	cout << "\n========================\n";
	cout << "Student with the most absences:\n";
	printStudent(students[maxAbsencesIndex]);

	return 0;
}
