#include <array>
#include <fstream>
#include <iostream>

using namespace std;

const int MAX_UNITS = 4;

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

student_t create_student() {
    student_t student;
    student.name = "Henry Lollenburg";
    student.student_id = 12345678;
    student.course_details = "Computer Science";
    student.units = {"Databases 101", "Operating Systems", "Networking", "Security"};
    student.grades = {"HD", "HD", "P", "F"};
    return student;
}

tutor_t create_tutor() {
    tutor_t tutor;
    tutor.name = "John Von Neumann";
    tutor.staff_id = 1337;
    tutor.course_details = "Department of Everything";
    tutor.units = {"Building the Bomb for Noobs", "Quantum Physics for Housewives", "Martini Making 101", "How to be a Lord"};
    tutor.class_timetable = {"Tuesday 10am", "Wednesday 3pm", "Thursday 5pm", "Friday 8am"};
    return tutor;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
