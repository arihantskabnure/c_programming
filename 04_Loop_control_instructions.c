//for loop


/*
for (initialization; condition; update)
{
    // code to repeat
}
*/

//example
//Q. Print the numbers from 0 to 10

/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i=i+1){ //Start i at 1, keep running while i is at most 10,
                              // and increase i by 1 after every iteration.
        printf("%d\n",i);     //prints 1 to 10 numbers
    }
    return 0;
}
*/


//Write a code for table of 10 upto 1000

/*
#include<stdio.h>
int main()
{
    for(int i=1; i<=1000;i=i+1){
        if(i%10==0){
            printf("%d\n",i);
        }
 
    }
return 0;
}
*/

//incriment operator
//i++ it is used in place of i=i+1

// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=10;i++){
//     printf("%d\n",i);
//     }
//     return 0;
// }

//difference btw pre and post decreament

/*
#include<stdio.h>
int main()
{
    int i=10;
    printf("%d\n",i--);
    printf("%d\n",i);
    printf("%d\n",--i);
    printf("%d",i);
    return 0;
}
*/

// i++ post increment use then increase
//++i pre increment increase then use
//i-- post decrement use then decrease
//--i pre decrement  drecrease then use


// Loop counter with float

/*
#include<stdio.h>
int main()
{
    for(float i=1.0;i<=5.0;i++){
        printf("%.2f\n",i);
    }
    return 0;
}
*/

//loop counter with character
/*
#include<stdio.h>
int main()
{
    for(char ch='a';ch<='z';ch++){  
        printf("%c\n",ch);              //prints 'a' to 'z'
    }
    return 0;
}
*/


//Infinite loops

/*
#include<stdio.h>
int main()
{
    for(int i=1; ;i++){          // there is no finishing condetion
        printf("hello world\n");
    }
    return 0;
}
*/


//While loop
/*
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10){
        printf("%d\n",i);
        i++;
    }
    return 0;
}
*/

//Q.Print the number from 0 to n, if n is given by user


/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);          // took number from user ,saved it in num

    int i=1;                   //declared  a variable 'i' valued 1
    while (i<=num)             //condetion as i is less than equal to num it will run code until it is
    {
    printf("%d\n",i);         //prints the i
    i++;                      //upedates i every time 
    }
    return 0;
}
*/

//Q.Print the number from 0 to n, if n is given by user(with for loop)

/*
#include<stdio.h>
int main()
{
   int num;
    printf("Enter a number:");
    scanf("%d",&num);          // took number from user ,saved it in num

    for(int i=1;i<=num;i++){
        printf("%d.hello\n",i);
    }
    return 0;
}
*/

//print sum first n natural numbers

/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    int sum=0;

    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum is:%d\n",sum);


        for(int i=n;i>=1;i--){
        printf("%d\n",i);
      }
    return 0;
}
*/

//Print table of a number given by user

/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
    return 0;
}
*/

//Break statment

/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        if(i==3){
            break;
        }
        printf("%d\n",i);
    }
    printf("end");
    return 0;
}
    
*/

//Keep taking input from user until its a odd number
/*
#include<stdio.h>
int main()
{
    do{
        int i;
        printf("Enter a number:");
        scanf("%d",&i);
        if(i%2!=0){
            break;
        }
    }while(1);
    printf("Thank you");
    return 0;
}
*/


//keep taking input from user until number is multiple of 7

/*
#include<stdio.h>
int main()
{
    do{
        int i;
        printf("Enter a number:");
        scanf("%d",&i);
        if(i%7==0){
            break;
        }
    }while(1);
    return 0;
}
*/

// Continue statment

/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        if(i==3){
            continue;
        }
        printf("%d\n",i);
    }
    printf("end");
    return 0;
}
*/

//Print all number from 1 to 100 except any number with 6

#include<stdio.h>
int main()
{
    for(int i=1;i<=100;i++){
        if(i%10==6 || i/10==6){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}