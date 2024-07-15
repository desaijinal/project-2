#include<stdio.h>
main()
{
 int marks;
 
 printf("Enter your marks=");
 scanf("%d",&marks);
 
  switch(marks)
  {
  	case 80 ... 100 :	
  		printf("Your grade is A. Excellent work!");
  		break;
	
	case 60 ... 79 :
  		printf("Your grade is B. Well done.");
  		break;
	
	case 50 ... 59 :	
  		printf("Your grade is C. Good job.");
  		break;
	
	case 36 ... 49 :
  	    printf("Your grade is D. Your passed, but you could do better.");
  		break;
	
	case 1 ... 35 :
  		printf("Your grade is E. you are fail");
  		break;
	           
	default :
		printf(" Enter valid marks.");
	
  }
}