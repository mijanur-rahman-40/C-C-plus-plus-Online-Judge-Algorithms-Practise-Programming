//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//   int val;
//   char str[20];
//
//   strcpy(str, "98993489");
//   val = atoi(str);
//   printf("String value = %s, Int value = %d\n", str, val);
//
//   strcpy(str, "if_else");
//   val = atoi(str);
//   printf("String value = %s, Int value = %d\n", str, val);
//
//   return(0);
//}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[10] = "if";
    int value = atoi(a);
    printf("Value = %d\n", value);
    return 0;
}
