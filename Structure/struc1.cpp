//#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//using namespace std;

struct student
    {
        char name[100];
        int age;
        float cgpa[100];
        int semester;
        int courses;
    };
student a[100];
int main()
{

    float sum = 0;
   // student_cgpa a[100];
    int students;
    printf("Enter total number of students\n");
    scanf("%d", &students);
    //for(int i = 0; i < students; i++)
    //{
        printf("Enter student's name\n");
//        while(name1!='\n')
//        {
//            *name2 = name1;
//            name2++;
//            name1 = getchar();
//        }
        ///gets(a[i].name);
        ///fgets(a[i].name, 80, stdin);
        ///getchar(gets(student_cgpa[i].name));
        ///scanf("%[^\n]%*s",student_cgpa[i].name);
        int i=0;
        scanf("% [^\n]",a[i].name);
        ///getchar(scanf("%[^\n]%*c",student_cgpa[i].name));
        ///getchar(scanf("%s",student_cgpa[i].name));
        ///getline(cin , student_cgpa[i].name);
        ///scanf("%[A-Z]s", str); takes only upercase letter
        ///fgets(student_cgpa[i].name, 100, stdin);
        printf("Enter student's age\n");
        scanf("%d", &a[i].age);
        printf("Enter student's semester\n");
        scanf("%d", &a[i].semester);
        printf("Enter number of the courses\n");
        scanf("%d", &a[i].courses);
        /*
        for(int j = 0; j < a[i].courses; j++)
        {
            scanf("% f", &a[i].cgpa[j]);
        }
        for(int j = 0; j < a[i].courses; j++)
        {
            sum = sum + a[i].cgpa[j];
        }
        */
        printf("Students name: %s , age: %d, total cgpa: %.02f, semester: %d, courses: %d and average cgpa is: %.02f.\n", a[i].name, a[i].age, sum, a[i].semester, a[i].courses, (sum / a[i].courses));

        sum = 0;

    return 0;
}
