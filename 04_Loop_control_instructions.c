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