//      Attendence      //

#include<stdio.h>
#include<math.h>
#include<conio.h>

void main() 
{
    FILE *fptr;
    int i,n,ID[1000],testid,count=0;
    char pass[1000],testpass[1000],ch;


    printf("Enter 1 to make new entry else press any Key:");
    scanf("%c",&ch);
    printf("\n\n\n");

    switch (ch)
    {
        case '1':  
        
        fptr = fopen("D:\\record.txt","r+");
        //taking number of teachers (n)
        printf("Enter number of Teachers:\n");
        scanf("%d",&n);

        //taking ID and Password from user:
        printf("Make New Account ID and Password\n");
        for(i=0 ; i<n ; i++)
        {
            scanf("%d  %s",&ID[i],&pass[i]);
            fprintf(fptr,"ID = %d\n",ID[i]);
            fprintf(fptr,"Password = %s\n",pass[i]);  
        }
        fclose(fptr);    
        break;

        case '2':

        // checking id and password

        fptr = fopen("D:\\record.txt","r+");

        //entering ID and Password and checking them
        printf("Enter Your ID:\n");
        scanf("%d",&testid);
        printf("Enter Your Password:\n");
        scanf(" %s",&testpass);


        printf("LOGIN:\n\n");
        for (i=0 ; i<n ; i++)
        {
            if (ID[i]==testid && pass[i]==testpass)
            {
                count++;
                break;
            }
        
        }
        fclose(fptr);   
        break;
    }



    //checking if password is right or wrong    
    if (count>0)
    {
        printf("SUCESSFULLY LOGED IN :)\n");
    }


}
