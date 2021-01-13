//#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//using namespace std;

typedef struct student
    {
        char name[800];
        ///char *name2 = (char *)malloc(2000*sizeof(char));
        int age;
        float cgpa[80];
        int semester;
        int courses;
    } student_cgpa;

int main()
{

    float sum = 0;
    char name1;
    ///char *name2 = (char *)malloc(2000*sizeof(char));
    int students;
    printf("Enter total number of students\n");
    scanf("%d", &students);
    student_cgpa obj[800];
    //for(int i = 0; i < students; i++)
    //{
        printf("Enter student's name\n");
//        while(name1!='\n')
//        {
//            *name2 = name1;
//            name2++;
//            name1 = getchar();
//        }
        ///getchar(gets(student_cgpa[i].name));
        int i=0;
        gets(obj[i].name);
        ///getchar(scanf("%[^\n]%*c",student_cgpa[i].name));
        ///getchar(scanf("%[^\n]",student_cgpa[i].name));
        ///getline(cin , student_cgpa[i].name);
        ///scanf("%[A-Z]s", str); takes only upercase letter
        /*
        fgets(student_cgpa[i].name, 100, stdin);
        printf("Enter student's age\n");
        scanf("%d", &student_cgpa[i].age);
        printf("Enter student's semester\n");
        scanf("%d", &student_cgpa[i].semester);
        printf("Enter number of the courses\n");
        scanf("%d", &student_cgpa[i].courses);
        for(int j = 0; j < student_cgpa[i].courses; j++)
        {
            scanf("%f", &student_cgpa[i].cgpa[j]);
        }
        for(int j = 0; j < student_cgpa[i].courses; j++)
        {
            sum = sum + student_cgpa[i].cgpa[j];
        }
        printf("Students name: %s , age: %d, total cgpa: %.02f, semester: %d, courses: %d and average cgpa is: %.02f.\n", student_cgpa[i].name, student_cgpa[i].age, sum, student_cgpa[i].semester, student_cgpa[i].courses, (sum / student_cgpa[i].courses));

        sum = 0;
    }
*/
    return 0;
}
