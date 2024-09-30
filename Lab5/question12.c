#include <stdio.h>

int main() {
    float attendance, attendance_weightage;
    float assignment_score, assignment_weightage;
    float exam_result, exam_weightage;
    float final_grade;

    printf("Enter the attendance: ");
    scanf("%f", &attendance);
    printf("Enter the assignment score: ");
    scanf("%f", &assignment_score);
    printf("Enter the exam result: ");
    scanf("%f", &exam_result);

    if (attendance >= 70) {
        attendance_weightage = (0.20 * attendance);
        printf("The attendance weightage is: %.2f\n", attendance_weightage);
    } else {
        printf("Attendance fail\n");
    }

    if (assignment_score >= 70) {
        assignment_weightage = (0.30 * assignment_score);
        printf("The assignment weightage is: %.2f\n", assignment_weightage);
    } else {
        printf("Assignment fail\n");
    }

    if (exam_result >= 70) {
        exam_weightage = (0.50 * exam_result);
        printf("The exam weightage is: %.2f\n", exam_weightage);
    } else {
        printf("Exam fail\n");
    }
    final_grade = attendance_weightage + assignment_weightage + exam_weightage;
    printf("The final grade is: %.2f\n", final_grade);

    return 0;
}
