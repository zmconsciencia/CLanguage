#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int x,y;
    printf("Insert two integers: "); //7 5
    scanf("%d%d", &x, &y);
    printf("O resultado de %d == %d : %d\n",x,y, x==y);     //Result:0
    printf("O resultado de %d > %d : %d\n",x,y, x>y);       //Result:1
    printf("O resultado de %d >= %d : %d\n",x,y, x>=y);     //Result:1
    printf("O resultado de %d < %d : %d\n",x,y, x<y);       //Result:0
    printf("O resultado de %d <= %d : %d\n",x,y, x<=y);     //Result:0
    printf("O resultado de %d != %d : %d\n",x,y, x!=y);     //Result:1
     */
     /*
    int x;
    printf("Insert a number: ");
    scanf("%d",&x);
    if (x >= 0)
        printf("It's a positive number\n");
    else
        printf("It's a Negative number\n");
    */
    /*
    int x;
    printf("Insert a Number: ");
    scanf("%d", &x);
    if (x != 0)
        printf("%d does equal to Zero\n", x);
    else
        printf("%d is Zero good job\n", x);
    */
    /*
    int x;
    printf("Insert a Number: ");
    scanf("%d", &x);
    if (x)  //Instead of (x != 0) will still work because 0 is false in C
        printf("%d does equal to Zero\n", x);
    else
        printf("%d is Zero good job\n", x);
    */
    /*
    float salary, bonus;
    bonus = 1000;
    printf("Please insert your current salary: ");
    scanf("%f", &salary);
    if (salary < 100000)
        printf("Congrats you have received a Bonus worth $%.2f, your salary is now $%.2f!\n", bonus, salary+bonus);
    else
        printf("Sorry with current Salary you are not eligible for a bonus, your salary will remain $%.2f\n", salary);
    */
    //Write a program that orders numbers
    /*
    int x, y, tmp;
    printf("Insert 2 numbers: ");
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        tmp = x;    // tmp is created to store a value to put the numbers in order
        x = y;
        y = tmp;
    }
    printf("%d %d", x, y);
    */
    /*
    float salary;
    printf("What is the salary: ");
    scanf("%f", &salary);
    if (salary <= 0)
        printf("Invalid Salary.\n");
    if (salary > 1000)
        printf("Tax = %.2f\n", salary*0.1);
    else
        printf("Tax = %.2f\n", salary*0.05);
    */
    /*
    float salary;
    printf("What is the salary: ");
    scanf("%f", &salary);
    if (salary <= 0)
        printf("Invalid Salary.\n");
    else
        if (salary > 1000)
            printf("Tax = %.2f\n", salary*0.1);
        else
            printf("Tax = %.2f\n", salary*0.05);
    */
    /*
    float salary, tax;
    printf("What's the salary: ");
    scanf("%f", &salary);
    if (salary < 1000)
        tax = 0.05;
    else
        if (salary < 5000)
            tax = 0.11;
        else
            tax = 0.35;
    printf("Salary: %.2f Tax: %.2f Liquid: %.2f\n", salary, salary*tax, salary*(1.0-tax));
    */
    /*
    float salary;
    char maritalStatus;
    printf("What's your salary: ");
    scanf("%f",&salary);
    printf("Whats's your marital status (Type 'M' for married and 'S' for single): ");
    scanf(" %c", &maritalStatus);
    if (maritalStatus=='M' || maritalStatus=='m')
        printf("Tax: %.2f\n", salary * 0.09);
    else
        if (maritalStatus=='s' || maritalStatus == 'S')
            printf("Tax: %.2f\n", salary * 0.1);
        else
            printf("ERROR! UNAVAILABLE MARITAL STATUS");
    */
    /*
    float salary;
    printf("Salary: ");
    scanf("%f", &salary);
    if (salary > 1000)
        salary = salary * 1.05;
    else
        salary = salary * 1.07;
    printf("New Salary: %.2f\n", salary);
    */

    // Same program different implementation
    /*
    float salary;
    printf("Salary: ");
    scanf("%f", &salary);
    salary = salary > 1000 ? salary * 1.05 : salary * 1.07;
    printf("New Salary: %.2f\n", salary);
    */
    /*
    char maritalStatus;
    puts("Marital Status: "); //same as printf but auto inserts new line below
    maritalStatus = getchar();
    if (maritalStatus == 'S' || maritalStatus == 's')
        printf("Single");
    else
        if (maritalStatus == 'M' || maritalStatus == 'm')
            printf("Married");
        else
            if (maritalStatus == 'D' || maritalStatus == 'd')
                printf("Divorced");
            else
                if (maritalStatus == 'W' || maritalStatus == 'w')
                    printf("Widowed");
                else
                    printf("Invalid Marital Status");
    */

    //Same program but with switch
    /*
    char martitalStatus;
    printf("marital Status: ");
    martitalStatus = getchar();
    switch (martitalStatus)
    {
        case 'M': printf("Married\n"); break;
        case 'D': printf("Divorced\n"); break;
        case 'W': printf("Widowed\n"); break;
        case 'S': printf("Single\n"); break;
        default : printf("Invalid Marital status");
    }
    */
    //Same program but working with lower case chars
    /*
    char martitalStatus;
    printf("marital Status: ");
    martitalStatus = getchar();
    switch (martitalStatus)
    {
        case 'm':
        case 'M': printf("Married\n"); break;
        case 'd':
        case 'D': printf("Divorced\n"); break;
        case 'w':
        case 'W': printf("Widowed\n"); break;
        case 's':
        case 'S': printf("Single\n"); break;
        default : printf("Invalid Marital status");
    }
    */
    /*
        float salario, imposto = 0.0;
        char sexo;

        printf("Introduza o Salário: ");
        scanf ("%f",&salario);
        printf("Qual o Sexo: ");
        scanf (" %c", &sexo);
        switch (sexo)
        {
            case 'f':
            case 'F': imposto = 0.10;
                    break;
            case 'm':
            case 'M': imposto = 0.15;
        }

        printf ("Imposto %.2f\n", salario*imposto);
    */
    /*
        int num1, num2, res = 0;
        char op;
        printf("Input an expression: ");
        scanf("%d %c %d",&num1, &op, &num2);
        switch (op)
        {
            case '+': res = num1+num2;
                        break;
            case '-': res = num1-num2;
                        break;
            case '*':
            case 'X':
            case 'x': res = num1*num2;
                        break;
            case '/':
            case '\\':
            case ':': res = num1/num2;
                        break;
        }
        printf("%d %c %d = %d\n", num1, op, num2, res);
        */
        /*
        int n_hours;
        long n_seconds;
        printf("Number of hours: ");
        scanf("%d", &n_hours);
        n_seconds = n_hours<0 ? 0 : n_hours * 3600L;
        printf("%d Hours has %ld seconds\n",n_hours, n_seconds);
        */

        /*
        int n_hours;
        char type;
        long res;
        printf("Number of hours: ");
        scanf("%d", &n_hours);
        printf("Type (m/s/d): ");
        scanf(" %c", &type);
        if (type == 'm' || type == 'M')
            res = n_hours<0 ? 0 : n_hours * 60L;
        else
            if (type == 's' || type == 'S')
                res = n_hours<0 ? 0 : n_hours * 3600L;
            else
                if (type == 'd' || type == 'D')
                    res = n_hours<0 ? 0 : n_hours * 36000L;
        printf("%dh --> %ld%c ",n_hours, res, type);
        */
        /*
        int n_hours;
        char type;
        long res;
        printf("Number of hours: ");
        scanf("%d", &n_hours);
        printf("Type (m/s/d): ");
        scanf(" %c", &type);
        switch (type)
        {
            case 'm':
            case 'M': res = n_hours<0 ? 0 : n_hours * 60L;
                        break;
            case 's':
            case 'S': res = n_hours<0 ? 0 : n_hours * 3600L;
                        break;
            case 'd':
            case 'D': res = n_hours<0 ? 0 : n_hours * 36000L;
                        break;
        }
        printf("%dh --> %ld%c ",n_hours, res, type);
        */

        /*
        int n_hours;
        char type;
        long res;
        printf("Number of hours: ");
        scanf("%d", &n_hours);
        printf("Type (m/s/d): ");
        scanf(" %c", &type);
        res = n_hours;
        switch (type)
        {
            case 'd':
            case 'D': res = res * 10;
            case 's':
            case 'S': res = res * 60;
            case 'm':
            case 'M': res = res * 60;
        }
        printf("%dh --> %ld%c ",n_hours,res,type);
        */



        /*
        int n;
        printf("Write a integer: ");
        scanf("%d", &n);
        if (n == 0)
            printf("%d is 0", n);
        else
            printf("%d is not 0", n);
        */
        /*
        int n;
        printf("Write a integer: ");
        scanf("%d", &n);
        if (!n)
            printf("%d is 0", n);
        else
            printf("%d is not 0", n);

            /*
        int n;
        printf("Write a integer: ");
        scanf("%d", &n);
        if (!n == 0)
            printf("%d is not 0", n);
        else
            printf("%d is 0", n);
        */

        /*
        int n;
        printf("Write a integer: ");
        scanf("%d", &n);
        if (n)
            printf("%d is not 0", n);
        else
            printf("%d is 0", n);
        */

        /*
        int n;
        printf("Write a integer: ");
        scanf("%d", &n);
        switch (n)
        {
            case 0: printf("The number is 0\n");
                    break;
            default: printf("The number is not 0\n");

        }
        */

        /*
        int year;
        printf("Year: ");
        scanf("%d",&year);
        printf("%d\n", year);
        if ((year%4 == 0 && year%100 != 0) || year%400 == 0)
            printf("%d is a leap year",year);
        else
            printf("%d is not a leap year",year);

        */
        /*
        int month, days;
        printf("Month: ");
        scanf("%d", &month);
        if (month == 2)
            days = 28;
        else
            if (month == 4 || month == 6 || month == 9 || month == 11)
                days = 30;
            else
                days = 31;
        printf("Month %d has %d days\n", month, days);
        */
        /*
        int month, days;
        printf("Month: ");
        scanf("%d", &month);
        switch (month)
        {
            case 2: days = 28;
                    break;
            case 4:
            case 6:
            case 9:
            case 11: days = 30;
                     break;
            default: days = 31;
        }
        printf("Month %d has %d days\n", month, days);
        */
        /*
        int month, days;
        printf("Month: ");
        scanf("%d", &month);
        days = 0;
        switch (month)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: days = days + 1;
            case 4:
            case 6:
            case 9:
            case 11: days = days + 2;
            default: days = days + 28;

        }
        printf("Month %d has %d days\n", month, days);
        */
        /*
        int dia,mes,ano;
        printf("Data:dd mm aaaa:");
        scanf("%d %d %d",&dia,&mes,&ano);
        switch (mes)
        {
            case 2:if(dia>=1 && dia<=28+((ano%4==0 && ano%100!=0)|| ano%400 == 0))
                    printf("Data Válida");
                  else
                    printf("Data Inválida");
                  break;
           case 4:
           case 6:
           case 9:
           case 11: if(dia>=1&& dia<=30)
                        printf("Data Válida");
                    else
                        printf("Data Inválida");
           default: if (mes <1 || mes > 12)
                        printf("Data Inválida");
                    else
                        if (dia >= 1 && dia <= 31)
                            printf("Data Válida");
                        else
                            printf("Data Inválida");
        }
        */


}
