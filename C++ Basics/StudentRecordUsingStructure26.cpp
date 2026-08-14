#include<iostream>
using namespace std;

struct student
{
    float marks[3];
    int roll_no;
    char name[20];
};

int main()
{
    student s[5];

    // Input marks
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter marks of Student " << i + 1 << " (3 subjects): ";
        for(int j = 0; j < 3; j++)
        {
            cin >> s[i].marks[j];
        }
    }

    // Input roll numbers
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter Roll Number of Student " << i + 1 << ": ";
        cin >> s[i].roll_no;
    }

    // Input names
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter Name of Student " << i + 1 << ": ";
        cin >> s[i].name;
    }

    // Display student details
    cout << "\nStudent Details\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name : " << s[i].name << endl;
        cout << "Roll : " << s[i].roll_no << endl;
        cout << "Marks : ";

        for(int j = 0; j < 3; j++)
        {
            cout << s[i].marks[j] << " ";
        }
        cout << endl;
    }

    // Find highest marks
    float highest_marks = s[0].marks[0];
    int highest_student_index = 0;
    int highest_subject_index = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(s[i].marks[j] > highest_marks)
            {
                highest_marks = s[i].marks[j];
                highest_student_index = i;
                highest_subject_index = j;
            }
        }
    }

    cout << "\nHighest Mark : " << highest_marks << endl;
    cout << "Student Name : " << s[highest_student_index].name << endl;
    cout << "Roll Number : " << s[highest_student_index].roll_no << endl;
    cout << "Subject Number : " << highest_subject_index + 1 << endl;

    // Subject-wise average
    float subject_sum[3] = {0};

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            subject_sum[j] += s[i].marks[j];
        }
    }

    cout << "\nAverage Marks Per Subject\n";

    for(int j = 0; j < 3; j++)
    {
        cout << "Subject " << j + 1 << " : "
             << subject_sum[j] / 5 << endl;
    }

    return 0;
}