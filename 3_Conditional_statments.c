// Conditional statments

/*
if (condition1)
{
    // ...
}
else if (condition2)
{
    // ...
}
else
{
    // ...
}*/


//Input is age , output Adult/Not adult
/*
#include<stdio.h>
int main()
{
    int age;
    printf("Enter Age:");
    scanf("%d",&age);

    if(age>=18){
        printf("Adult");
    }
    else{
        printf("Not adult");
    }
    return 0;
}
*/

//Make a grading sys. for school marks
//91 to 100 - A+
//81 to 90 - A
//71 to 80 - B
//61 to 70 - C
//41 to 60 - D
//0 to 40 - fail

/*
#include<stdio.h>
int main()
{
    int grade;
    printf("Enter grade:");
    scanf("%d",&grade);

    if(grade>=91 && grade<=100){
        printf("A+ grade");
    }

    else if(grade>=81 && grade<=90){
        printf("A grade");
    }

    else if(grade>=71 && grade<=80){
        printf("B grade");
    }

    else if(grade>=61 && grade<=70){
         printf("C grade");
    }
    
    else{
         printf("Fail");
    }
}    
*/

//Nested
//checks if entered number "Positive or Negative" and "Odd or Even"


/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    if(n>=0){                             //checks if number is greater than equal to 0
        printf("Positive number\n");
        if(n%2==0){                       //when number is greater than 0 , checks if remainder is 0
            printf("Even number");        //if remainder is 0 then even number
        }
        else{
            printf("Odd number");         //else odd number
        }
    }

    else{                                 //if number is less than 0
        printf("Negative number\n");      //negative
        if(n%2==0){                       //if remainder is 0 then even number
            printf("Even number");
        }
        else{                             //else odd number
            printf("Odd number");
        }
    }
    return 0;
}
*/



//Switch
/*
switch (expression)
{
    case value1:
        // code
        break;

    case value2:
        // code
        break;

    case value3:
        // code
        break;

    default:
        // code if no case matches
}
*/

/*
#include<stdio.h>
int main()
{
    int day;
    printf("Enter a day(1 to 7):");
    scanf("%d",&day);

    switch(day){
        case 1: printf("Monday\n");
        break;
        case 2: printf("Tuesday\n");
        break;
        case 3: printf("Wednesday\n");
        break;
        case 4: printf("Thursday\n");
        break;
        case 5: printf("Friday\n");
        break;
        case 6: printf("Saturday\n");
        break;
        case 7: printf("Sunday\n");
        break;
        default: printf("Not a valid day\n");
    }
    return 0;
}
*/


//Write a program to see if stuudent passed or failed
// >30 pass
// <30 fail

/*
#include<stdio.h>
int main()
{
    int mark;
    printf("Enter marks(0 to 100):");
    scanf("%d",&mark);

    if(mark>=30 && mark<=100){
        printf("Pass");
    }
    else if(mark<30 && mark>=0){
        printf("Fail");
    }

    else{
        printf("Invalid marks entered!");
    }
    return 0;
}
*/

//Using ternary operator

/*
#include<stdio.h>
int main()
{
    int mark;
    printf("Enter marks(0 to 100):");
    scanf("%d",&mark);
    if(mark>=0 && mark<=100){
        (mark>=30)?printf("Pass"):printf("fail");
    }
    else{
        printf("Invalid Markds");
    }
    
    return 0;
}
*/

//Write a program to find if entered character is upper case or not

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Upper case");
     }
    else if(ch>='a'){
        printf("Lower case");
     }
    else{
        printf("Invalid character");
    }
    
    return 0;
}