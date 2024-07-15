#include<stdio.h>

main()
{

int  marks;

 printf("Enter your marks =");
 scanf("%d",&marks);
 
 if(marks>=80 && marks<=100)
 {
 	printf("Your grade is A. Excellent work! You are eligible for the next level.");
 }
 else if(marks>=60 && marks<=79)
 {
 	printf("Your grade is B. Well done! You are eligible for the next level.");
 }
 else if(marks>=50 && marks<=59)
 {
 	printf("Your grade is C. Good job You are eligible for the next level.");
 }
 else if(marks>=40 && marks<=49)
 {
    printf("Your grade is D. You passed, but you could do better You are eligible for the next level.");
 }
 else if(marks>=35 && marks<=39)
 {
 	printf(" Your grade is E. Plz try again next time.");
 }
 else
 {
 	printf("You are fail");
 }
 
}