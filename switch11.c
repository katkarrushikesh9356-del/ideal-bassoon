#include<stdio.h>

int main() {
    int age,marks;
    printf("Enter you age\n");
    scanf("%d",&age);

printf("Enter you marks\n");
    scanf("%d",&marks);


    switch (age)
    {
    case  3:
    printf("The age is 3\n");
         switch(marks )
        {
            case 45:
            printf("your marks are 45 ");

            default:
            printf("your marks not 45");
        }
        break;


        case 14:
    printf("The age is 14\n");
        break; 
    

    case 23 :
    printf("The age is 23\n");
      break;

    default:
    printf("age is not 3,14 or 23\n");
        break;
    }

    return 0;
}
  