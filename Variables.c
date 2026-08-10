/*
Types of variables

Type	         Example	        Typical size	                  Example use
char	           'A'	               1 byte	                    Character / byte
short	           100	               2 bytes	                    Small integer
int	               1000	               4 bytes	                    General integer
long	           100000	           4/8 bytes	                Larger integer
long long	       9000000000	       8 bytes	                    Very large integer
float	           3.14	               4 bytes	                    Decimal
double	           3.141592653	       8 bytes	                    High-precision decimal
bool	            true	           implementation-dependent	    True/false
*/


/*
//Using basic integers with printf function
#include<stdio.h>
int main(){
    int age=20;
    int number=26;
    float pi=3.14;
    char star='*';
    printf("age:%d\n",age);
    printf("Number:%d\n",number);
    printf("pi:%f\n",pi);
    printf("Star:%c\n",star);
    return 0;
}
*/


/*
//with scanf function
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    int sum=a+b;
    printf("Addition is:%d",sum);
    return 0;
}
*/


/*
    // Write a program to calcutate area of square?

    #include<stdio.h>
    int main()
    {
        int side;
        printf("Enter length of Side:");
        scanf("%d",&side);
        printf("Area of Square is:%d",side*side);
        return 0;
    }
*/


/*
// Write a program to find area of circle


 #include<stdio.h>
    int main()
    {
        float radius;
        printf("Enter length of radius:");
        scanf("%f",&radius);
        printf("Area of circle is:%f",3.14*radius*radius);
        return 0;
    }
*/


// Homework

// a. Write a program to calculate perimeter of rectangle.
//    Take sides, a & b, from the user.

/*
#include<stdio.h>
int main()
{
    float l;                                    //length of rectangle
    float w;                                    //width of rectangle
    printf("Enter length of Rectangle:");
    scanf("%f",&l);
    printf("Enter width of Rectangle:");
    scanf("%f",&w);
    float p=2*(l+w);                             //formula of perimeter
    printf("Perimeter of Rectangle:%f",p);
    return 0;

}
*/



//b. Take a number(n) from user & output its cube(n*n*n).

/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    printf("Cube of Number:%d",num*num*num);
    return 0;
}
*/

//c. Write comments for programs a & b
