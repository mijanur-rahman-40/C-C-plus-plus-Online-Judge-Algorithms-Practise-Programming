#include<stdio.h>
enum day{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
int main()
{
    enum day today;
    today=thursday;
    switch(today){
case sunday:
    printf("Today is Sunday.it is a work day\n");
    break;
    case monday:
    printf("Today is Monday.it is a work day\n");
    break;
    case tuesday:
    printf("Today is Tuesday.it is a work day\n");
    break;
    case wednesday:
    printf("Today is Wednesday.it is a work day\n");
    break;
    case thursday:
    printf("Today is Thursday.it is a work day\n");
    break;
    case friday:
    printf("Today is Friday.Today is holiday\n");
    break;
    case saturday:
    printf("Today is Saturday.Today is holiday\n");
    break;
    }
    return 0;
}
