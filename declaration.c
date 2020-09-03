#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write a C program to print your name, date of birth. and
    //mobile number.
    /*
    char name[] = "Albert Attakora Frimpong";
    char DOB[] = "October 23, 1984";
    int Mobile  = 206870839;
    printf("name : %s \n", name);
    printf("DOB : %s \n", DOB);
    printf("Mobile : %d \n", Mobile);
    */


    //Write a C program to print a block A using hash (#)
    /*
    printf("     # \n");
    printf("    #  #\n");
    printf("   # ## #\n");
    printf("  #       #\n");
    printf(" #          #\n");
    */


    //Write a C program to print the following characters
    //in a reverse way.Test Characters: 'X', 'M', 'L'
    /*
    char A = 'X';
    char B = 'M';
    char C = 'L';
    printf("The reverse of %c%c%c is %c%c%c", A,B,C,C,B,A);
    */

    //Write a C program to compute the perimeter and area of a
    //rectangle with a height of 7 inches. and width of 5 inches
    /*
    int height = 7;
    int width = 5;
    int perimeter = 2*(height+width);
    int area = height*width;
    printf("Perimeter of the rectangle = %d inches \n", perimeter);
    printf("Area of the rectangle = %d square inches", area);
    */

    // Write a C program that accepts two integers from the user
    // and calculate the product of the two integers
    /*
    int x,y,product;
    printf("Input first integer : \n");
    scanf("%d", &x);
    printf("input the second integer : \n");
    scanf("%d", &y);
    product = x*y;
    printf("Product of the above two integers = %d", product);
    */

    //Write a C program to convert specified days into years,
    //weeks and days.Ignore leap year.
    /*
    int total_days;
    int x , y, z, a, b;
    printf("Enter the number of days: ");
    scanf("%d", &total_days);
    x = total_days/365;
    y = total_days-(x*365);
    z = y/7;
    a = z*7;
    b = y-a;
    printf("Years: %d \n", x);
    printf("Weeks: %d \n", z);
    printf("Days: %d \n", b);
    */

    //Write a C program that accepts two item’s weight (floating
    //points' values ) and number of purchase (floating points'
    //values) and calculate the average value of the items.
    /*
    double weight_1, weight_2, item_1, item_2, average, x, y;
    printf("Enter first item weight: ");
    scanf("%lf", &weight_1);
    printf("Enter first number of item : ");
    scanf("%lf", &item_1);
    printf("Enter second item weight: ");
    scanf("%lf", &weight_2);
    printf("Enter second number of item: ");
    scanf("%lf", &item_2);
    x = weight_1*item_1;
    y = weight_2*item_2;
    average = (x+y)/ (item_1+item_2);
    printf("%f \n", x);
    printf("%f \n", y);
    printf("The average weight value is: %f", average);
    */

    //Write a C program that accepts an employee's ID, total
    //worked hours of a month and the amount he received per hour
    //. Print the employee's ID and salary (with two decimal
    //places) of a particular month.
    /*
    char employment_id[10];
    int work_hr, salary_amount;
    double salary;
    printf("Enter employee ID number(max. 10 char): ");
    scanf("%s", &employment_id);
    printf("Enter work hour: ");
    scanf("%d", &work_hr);
    printf("Enter salary amount per hour: ");
    scanf("%d", &salary_amount);
    printf("Employee ID = %s \n", employment_id);
    salary = work_hr*salary_amount;
    printf("Salary = US$ %.2lf", salary);
    */


    return 0;
}
