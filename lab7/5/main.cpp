#include <array>
#include <fstream>
#include <iostream>

using namespace std;

const int MAX_UNITS = 4;
const string STUDENT_FILE = "student.txt";
const string TUTOR_FILE = "tutor.txt";

struct student_t {
    string name;
    int student_id;
    string course_details;
    array<string, MAX_UNITS> units;
    array<string, MAX_UNITS> grades;
};

struct tutor_t {
    string name;
    int staff_id;
    string course_details;
    array<string, MAX_UNITS> units;
    array<string, MAX_UNITS> class_timetable;
};

void create_student() {
    ofstream file;
    student_t student;
    student.name = "Henry Lollenburg";
    student.student_id = 12345678;
    student.course_details = "Computer Science";
    student.units = {"Databases 101", "Operating Systems", "Networking", "Security"};
    student.grades = {"HD", "HD", "P", "F"};
    file.open(STUDENT_FILE, ios_base::app);
    file << student.name << " | " << student.student_id << " | " << student.course_details << " | ";
    for (int i = 0; i < MAX_UNITS; ++i) {
        if (i != 0) {
            file << ", ";
        }
        file << student.units[i];
    }
    file << " | ";
    for (int i = 0; i < MAX_UNITS; ++i) {
        if (i != 0) {
            file << ", ";
        }
        file << student.grades[i];
    }
    file << endl;
    file.close();
}

void create_tutor() {
    ofstream file;
    tutor_t tutor;
    tutor.name = "John Von Neumann";
    tutor.staff_id = 1337;
    tutor.course_details = "Department of Everything";
    tutor.units = {"Building the Bomb for Noobs", "Quantum Physics for Housewives", "Martini Making 101", "How to be a Lord"};
    tutor.class_timetable = {"Tuesday 10am", "Wednesday 3pm", "Thursday 5pm", "Friday 8am"};
    file.open(TUTOR_FILE, ios_base::app);
    file << tutor.name << " | " << tutor.staff_id << " | " << tutor.course_details << " | ";
    for (int i = 0; i < MAX_UNITS; ++i) {
        if (i != 0) {
            file << ", ";
        }
        file << tutor.units[i];
    }
    file << " | ";
    for (int i = 0; i < MAX_UNITS; ++i) {
        if (i != 0) {
            file << ", ";
        }
        file << tutor.class_timetable[i];
    }
    file << endl;
    file.close();
}

void print_lines_in_file(string filename) {
    string line;
    ifstream file(filename);
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    else {
        cout << "Unable to open file";
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int choice;
    do {
        cout << "Enter your choice: 1 -4\n1. Enter new student details to the record.\n2. Enter new tutor details to the record.\n3. Display student record.\n4. Display tutor record.\n5. Exit." << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                create_student();
                continue;
            case 2:
                create_tutor();
                continue;
            case 3:
                print_lines_in_file(STUDENT_FILE);
                continue;
            case 4:
                print_lines_in_file(TUTOR_FILE);
                continue;
            case 5:
                break;
        }
    } while (choice != 5);
    return 0;
}
