
// instructions and operators
// Type declaration
/*
int age;
float temperature;
char grade;
*/


//Operators

//1. Arithmetic operators
/*
Operator	            Operation	         Example
+	                    Addition	         a + b
-	                    Subtraction	         a - b
*	                    Multiplication	     a * b
/	                    Division	         a / b
%	                    Remainder/modulo	 a % b
*/


/*
#include<stdio.h>
int main()
{
    int a=5*(2/2)*3;
    printf("5*(2/2)*3=%d",a);
    return 0;
}
*/



//2. Assignment operators

/*
The basic assignment operator is: "="

=
+=
-=
*=
/=
Example:

int x = 10;
int a+=b;     //in place of int a=a+b;
*/

//3. Relational operators
//tells relation between 2 operands

/*
Operator	     Meaning
==	           Equal to
!=	           Not equal to
>	           Greater than
<	           Less than
>=	           Greater than or equal
<=	           Less than or equal
*/

/*
#include<stdio.h>
int main()
{
    printf("%d\n",4==4);  //it will print "1" which means true
    printf("%d\n",4==3);  //it will print "0" which means false
    // similarly
    printf("%d\n",4>3);  //true
    printf("%d\n",4<3);  //false
    printf("%d\n",4>=4); //true
    printf("%d\n",4>=3); //true
    printf("%d\n",4!=3); //true

    return 0;
}
*/

//4.Logical operators
/*
&&   AND
||   OR 
!    NOT 
*/

/*
#include<stdio.h>
int main()
{
    printf("%d\n",4>3 && 5>4);  //it will print "1" which means true
    printf("%d\n",4>3 && 5>6);  //it will print "0" which means false
    printf("%d\n",4>3 || 5>4);  //it will print "1" since one term is right
    printf("%d\n",!4>3);        //it will print "0" becouse '!'
    return 0;
}
*/

//practice Q. Write a program to see if a number is divisible by 2 or not.

/*
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("%d",a%2==0); // returns "1" if divisible and "0" if not
                         // a%2==0 checks if remainder of "a" is "0"
    return 0;
}
*/



//practice Q.Print 1 or 0 for following
//1.if it's sunday & it's snowing -> true "1"

/*
#include<stdio.h>
int main()
{
    int issunday =1;
    int issnowing =0;
    printf("%d",issunday && issnowing);
}
*/



//2.if it's monday or it's raining -> true "1"

/*
#include<stdio.h>
int main()
{
    int ismonday=1;
    int israining=0;
    printf("%d", ismonday || israining);
    return 0;
}
*/



//3.see if number is 2 digit number

/*
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",& number);
    printf("%d", number>9 && number<100);
    return 0;
}
*/