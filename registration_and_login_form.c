#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void registration();
int is_numeric(char *);
//void login();
int main()
{
    
    int  ch;
    
    while(1)
    {
        printf("\n\n");
        printf("\t\t\tUser menu\t\t\n");
        printf("Enter the operation you want to perform:\n");
        printf("1.Register\n2.Login\n3.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                registration();
                break;
            /*case 2:
                login();
                break;*/
            case 3:
                exit(0);
                break;
            default:
                printf("Enter a valid operation\n");
                break;
        }
    }
    return 0;
}
int is_numeric(char *ph_no) {
    for (int i = 0; ph_no[i] != '\0'; i++) {
        if (!isdigit(ph_no[i])) {  // Check if each character is a digit
            return 0;  // Return 0 if a non-numeric character is found
        }
    }
    return 1;  // Return 1 if all characters are digits
}
void registration()
{
    char ph_no[11],aadhar_no[13];
    char f_name[50],m_name[50],l_name[50];
    char ans[100];
    char otp[4];
    printf("Enter you first name:");
    scanf("%s",f_name);
    printf("Enter your middle name:");
    scanf("%s",m_name);
    printf("Enter your last name:");
    scanf("%s",l_name);
    while (1) 
    {
        printf("Enter your mobile number:+91 ");
        scanf("%10s", ph_no);  // Limit input to 10 characters

        if (strlen(ph_no) == 10 && is_numeric(ph_no)) {
            break;  // Valid mobile number
        }

        printf("Invalid mobile number. It must be 10 numeric digits.\n");
    }

    // Aadhar number validation
    while (1) 
    {
        printf("Enter your Aadhar number: ");
        scanf("%12s", aadhar_no);  // Limit input to 13 characters

        if (strlen(aadhar_no) == 12 && is_numeric(aadhar_no)) {
            break;  // Valid Aadhar number
        }

        printf("Invalid Aadhar number. It must be 13 numeric digits.\n");
    }
    printf("Enter your PIN:");
    scanf("%s",otp);
    if(strlen(otp)!=4)
    {
        printf("Invalid PIN\n");
    }
    printf("Please answer a security question incase you forget your PIN\n");
    printf("What was your favorite ice cream?\n");
    printf("Type your answer here:(if it has two or more words, kindly use under_scores)\n");
    scanf("%s",ans);
}