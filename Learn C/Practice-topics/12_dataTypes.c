#include <stdio.h>

int add(int, int);
int main()
{
    // 1.Basic Datatypes:
    int a = 10, f = 65;
    float b = 2.54F;
    double c = 2.2452645;
    char d = 'a';
    long int e = 125640L;

    printf("Integer: a = %d\n", a);
    printf("Float: a = %.2f\n", b);
    printf("Double: a = %f\n", c);
    printf("Characer: a = %c\n", d);
    printf("LongInt: a = %d\n", e);

    // 2.Derived Datatypes:
    // 1:Arrray
    int arr[5] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 2:Pointer
    int z = 98;
    int *ptr = &z;
    printf("Accessing value with pointer: %d\n", (*ptr));

    // 3:Function
    printf("Addition %d and %d is: %d\n", a, d, add(a, f));

    // 3.User-Defined Datatypes:
    // 1:Structure
    // struct Student
    // {
    //     int rollNo;
    //     char name[10];
    // };

    // struct Student s[2];
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("Enter rollNo: ");
    //     scanf("%d",&(s[i].rollNo));
    //     printf("Enter name: ");
    //     scanf("%s", (s[i].name));    
    // }
    // printf("-------------------------------\n");
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("RollNo: %d\n", (s[i].rollNo));
    //     printf("Name: %s\n", (s[i].name));
    // }

    //2:Union
    // union Student1
    // {
    //     int rollNo;
    //     char name[10];
    // };

    // union Student1 s1[2];
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("Enter rollNo: ");
    //     scanf("%d",&(s1[i].rollNo));
    //     printf("Enter name: ");
    //     scanf("%s", (s1[i].name));    
    // }
    // printf("-------------------------------\n");
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("RollNo: %d\n", (s1[i].rollNo));
    //     printf("Name: %s\n", (s1[i].name));
    // }

    //3:Enum
    enum Day
    {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };

    enum Day today = Wednesday;
    printf("Today's Day is: %d\n",today);


    return 0;
}

int add(int m, int n)
{
    return (m + n);
}