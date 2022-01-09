//starting with a first project of the life

//      Attendence      //

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>


void randomcode();
void main()
{
    int n,i;
    char rollname[500][500];

    printf("Hiii, How are you?\n\n");

    //counting number of students in a class
    printf("Enter number of students are there in the class.....");
    scanf("%d",&n);
    printf("\n\n");
    

    //assiging names of students in a array 
    printf("Enter your names according to the roll num:\n");
    for (i=0 ; i<n ; i++)
        {
            scanf("%s",&rollname[i]);
        }
    printf("\n\n");
    clrscr();


    //printing names of students
    printf("Your names according to your names are as follows:\n");
    for (i=0 ; i<n ; i++)
        {
            printf("%d - %s\n",i+1,rollname[i]);
        }
    printf("\n\n\n\n");

    //calling randoncode fuction
    randomcode();

}

void randomcode()
{   
    int c, n;
    char ch;

        printf("A random numbers is.....\n");

        /*for (c = 1; c <= n; c++)
        {
            n = rand();
        }*/
       
       
        n = rand();
        printf("%d",n);
        

}