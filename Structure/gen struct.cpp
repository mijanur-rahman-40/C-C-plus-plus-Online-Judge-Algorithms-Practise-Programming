/*
#include<cstdio>
#include<iostream>
using namespace std;
struct student
{
    int reg;
    double cgpa;
    string names;

};
student x[100];
int main()
{
    int i,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x[i].reg>>x[i].cgpa>>x[i].names;
        cout<<x[i].reg<<" "<<x[i].cgpa<<" "<<x[i].names<<endl;
    }
    return 0;
}


*/

#include <bits/stdc++.h>
using namespace std;

struct student
    {
        char name[100];
        int age;
        int semester;
        int courses;
    };
student a[100];
int main()
{

    float sum = 0;  float cgpa[100];
    int students;
    printf("Enter total number of students\n");
    scanf("%d", &students);
        printf("Enter student's name\n");
        int i=0;
        scanf("% [^\n]",a[i].name);
       /*
        printf("Enter student's age\n");
        scanf("%d", &a[i].age);
        printf("Enter student's semester\n");
        scanf("%d", &a[i].semester);
        printf("Enter number of the courses\n");
        scanf("%d", &a[i].courses);
*/
//gets(a[i].name);
puts(a[i].name);
cout<<a[i].name;
//printf(" %s %d %.02f %d %d %.02f.\n", a[i].name, a[i].age, sum, a[i].semester, a[i].courses, (sum / a[i].courses));
//printf(" %s %d %.02f %d %d %.02f.\n", a[i].name, a[i].age, sum, a[i].semester, a[i].courses, (sum / a[i].courses));
}
