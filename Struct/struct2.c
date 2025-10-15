// WAP TO STORE AND DISPLAY INFORMATION OF N STUDENTS USING ARRAY OF STRUCTURES.
// #include <stdio.h>

// struct Student {
//     int roll;
//     char name[50];
//     float marks;
// };

// int main() {
//     struct Student s[100];  // array of structure
//     int n, i;

//     printf("Enter number of students: ");
//     scanf("%d", &n);

//     for(i = 0; i < n; i++) {
//         printf("\nEnter details of student %d\n", i + 1);
//         printf("Enter Roll No: ");
//         scanf("%d", &s[i].roll);
//         printf("Enter Name: ");
//         scanf("%s", s[i].name);
//         printf("Enter Marks: ");
//         scanf("%f", &s[i].marks);
//     }

//     printf("\n--- Student Details ---\n");
//     for(i = 0; i < n; i++) {
//         printf("\nRoll No: %d", s[i].roll);
//         printf("\nName: %s", s[i].name);
//         printf("\nMarks: %.f\n", s[i].marks);
//     }

//     return 0;
// }
//WAP TO STORE AND DISPLAY INFORMATION OF N EMPLOYEES USING ARRAY OF STRUCTURES.
#include<stdio.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct Employee e[100]; // array of structure
    int n,i;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter details of employee %d\n",i+1);
        printf("Enter ID: ");
        scanf("%d",&e[i].id);
        printf("Enter Name: ");
        scanf("%s",e[i].name);
        printf("Enter Salary: ");
        scanf("%f",&e[i].salary);
    }
    printf("\n--- Employee Details ---\n");
    for(i=0;i<n;i++)
    {
        printf("\nID: %d",e[i].id);
        printf("\nName: %s",e[i].name);
        printf("\nSalary: %.2f\n",e[i].salary);
    }
    return 0;
}