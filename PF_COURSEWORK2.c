#include<stdio.h>
#include<string.h>



char username[30];
char password[30];
char forgot[30];

void Ask()
{
     printf("\n");
      printf("\n");

    printf("********************WELCOME TO ARALIYA HOTEL MANAGEMENT SYSTEM********************\n");
    printf("\n");
    printf("\n");
    printf("\n ****************LOGIN*******************\n");
    printf("\n");
    printf("please enter user name:");
    scanf("%s",username);

    printf("please enter your password:");
    scanf("%s",password);
}
void check()//this just check if the user name and password are correct.
{
    if(strcmp(username,"lito")==0)//username is lito
    {
        if(strcmp(password,"54321")==0)//password is 54321
        {
            printf("you successfully logged in.\n");
        }
        else
        {
            printf("your password is incorrect.\n");
            printf("If forgot password enter phone number:");
            scanf("%s",forgot);
            if(strcmp(forgot,"0111111111")==0)//backup phone number is 0111111111
            {
                 printf("you successfully logged in.\n");
            }
            else
            {
                printf("Access Denied.\n");
                printf("please try again");
                exit(0);
            }

        }
    }
    else
    {
        printf("your user name is incorrect\n");
    }
}
void main_menu()//using the main menu we can jump to any function
{

     int menu;
     do
     {
    printf("\n");
    printf("\n*****************MAIN MENU***************");
    printf("\n");
    printf("1.CUSTOMER REGISTRATION.\n");
    printf("2.RESERVATION.\n");
    printf("3.MEALS.\n");
    printf("4.BILLING.\n");
    printf("5.EXIT.\n");
    printf("\n");
     printf("Enter your choice:");
     scanf("%d",&menu);
     switch(menu)
     {
           case 1: customer_registration();
        break;

          case 2:
              reservation();
          break;

       case 3:
            meals();
        break;

        case 4:
            billing();
        break;

        case 5: exit(0);//to end the program
     }
     }while(menu!=5);



}

void customer_registration()
{

    int contact_number[10],age;
    char ID[12],first_name,last_name,gender,email,nationality,address,country;

    {
        printf("\n***************REGISTER THE CUSTOMER**************");
        printf("\n");
    }


        printf("\nEnter the customer first name:");
        scanf("%s",&first_name);
        printf("Enter the customer last name:");
        scanf("%s",&last_name);
        printf("Enter the customer age:");
        scanf("%d",&age);
        printf("Enter the customer Address:");
        scanf("%s",&address);
        printf("Enter the contact number:");
        scanf("%d",&contact_number[10]);
        printf("Enter the customer ID:");
        scanf("%s",&ID[12]);
        printf("Enter the customer Gender:");
        scanf("%s",&gender);
        printf("Enter the customer Nationality:");
        scanf("%s",&nationality);
        printf("Enter the customer email:");
        scanf("%s",&email);
        printf("Enter the customer country:");
        scanf("%s",&country);


}
int room_type;

    int no_of_rooms;
    int single_ac_rooms;
    int single_nac_rooms;
    int double_ac_rooms;
    int double_nac_rooms;
void reservation()
{
     printf("\n***************RESERVATION****************\n");
     printf("\n");



    int guests;
    char date_in;
    char date_out;




    printf("Enter the number of guests:");
    scanf("%d",&guests);
    printf("\n");

    printf("If the room type is single a/c enter number 1\n");
    printf("If the room type is single and non a/c enter number 2\n");
    printf("If the room type is double and a/c enter number 3\n");
    printf("If the room type is double and non a/c enter the number 4\n");
    printf("If booking more than one type of room enter the number 5\n");
    printf("\n");
    printf("Enter the room type needed:");
    scanf("%d",&room_type);

    if (room_type==5)
    {
        printf("Enter the number of single a/c rooms needed:");
        scanf("%d",&single_ac_rooms);
        printf("Enter the number of single non a/c rooms needed:");
        scanf("%d",&single_nac_rooms);
        printf("Enter the number of double a/c rooms needed:");
        scanf("%d",&double_ac_rooms);
        printf("Enter the number of double non a/c rooms needed:");
        scanf("%d",&double_nac_rooms);

    }
    else
    {
        printf("Enter the number of rooms needed:");
        scanf("%d",&no_of_rooms);

    }
    printf("Enter the date in:");
    scanf("%s",&date_in);
    printf("Enter the date out:");
    scanf("%s",&date_out);




}
int meal_charge;
void meals()
 {int meal_charge;
    int breakfast;
    int lunch;
    int dinner;
    int meal;
     printf("\n**********************MEALS***********************");
     printf("\n");
     printf("If only taking breakfast enter 1\n");
     printf("If only taking lunch enter 2\n");
     printf("If only taking dinner enter 3\n");
     printf("If taking several meals enter 4\n");

     printf("Enter the meal type having:");
     scanf("%d",&meal);
     if (meal==1)
     {
         printf("Enter number of days having breakfast:");
         scanf("%d",&breakfast);
         meal_charge=breakfast*2500;//charge for breakfast is 2500.
         printf("Meal charge(RS):%d",meal_charge);

     }
     else if(meal==2)
     {
         printf("Enter the number of days having lunch:");
         scanf("%d",&lunch);
         meal_charge=lunch*3000;//charge for lunch is 3000.
         printf("Meal charge(RS):%d",meal_charge);
     }
     else if (meal==3)
     {
         printf("Enter the number of days having dinner:");
         scanf("%d",dinner);
         meal_charge=dinner*3500;//charge for dinner is 3500.
         printf("Meal charge(RS):%d",meal_charge);
     }
     else if (meal==4)
     {
         printf("Enter the number of days having breakfast:");
         scanf("%d",&breakfast);

         printf("Enter the number of days having lunch:");
         scanf("%d",&lunch);

         printf("Enter the number of days having dinner:");
         scanf("%d",dinner);


         meal_charge=(breakfast*2500)+(lunch*3000)+(dinner*3500);
         printf("Meal charge(RS):%d",meal_charge);


     }
}

  void billing()
  {

printf("\n******************BILL********************");
printf("\n");

int room_type;

    int no_of_rooms;
    int single_ac_rooms;
    int single_nac_rooms;
    int double_ac_rooms;
    int double_nac_rooms;

    int guests;
    char date_in;
    char date_out;


    int single_ac;
    int single_nonac;
    int double_ac;
    int double_nonac;
    int charges;
    int total_charge;
    int day;

    int meal_charge;
    int breakfast;
    int lunch;
    int dinner;
    int meal;





    printf("Enter the number of guests:");
    scanf("%d",&guests);

    printf("If the room type is single a/c enter number 1\n");
    printf("If the room type is single and non a/c enter number 2\n");
    printf("If the room type is double and a/c enter number 3\n");
    printf("If the room type is double and non a/c enter the number 4\n");
    printf("If booking more than one type of room enter the number 5\n");


    printf("Enter the room type needed:");
    scanf("%d",&room_type);

    if (room_type==5)
    {
        printf("Enter the number of single a/c rooms needed:");
        scanf("%d",&single_ac_rooms);
        printf("Enter the number of single non a/c rooms needed:");
        scanf("%d",&single_nac_rooms);
        printf("Enter the number of double a/c rooms needed:");
        scanf("%d",&double_ac_rooms);
        printf("Enter the number of double non a/c rooms needed:");
        scanf("%d",&double_nac_rooms);

    }
    else
    {
        printf("Enter the number of rooms needed:");
        scanf("%d",&no_of_rooms);

    }
    printf("Enter the date in:");
    scanf("%s",&date_in);
    printf("Enter the date out:");
    scanf("%s",&date_out);




     printf("\nIf only taking breakfast enter 1\n");
     printf("If only taking lunch enter 2\n");
     printf("If only taking dinner enter 3\n");
     printf("If taking several meals enter 4\n");

     printf("Enter the meal type having:");
     scanf("%d",&meal);
     if (meal==1)
     {
         printf("Enter number of days having breakfast:");
         scanf("%d",&breakfast);
         meal_charge=breakfast*2500;//charge for breakfast is 2500.
         printf("Meal charge(RS):%d",meal_charge);

     }
     else if(meal==2)
     {
         printf("Enter the number of days having lunch:");
         scanf("%d",&lunch);
         meal_charge=lunch*3000;//charge for lunch is 3000.
         printf("Meal charge(RS):%d",meal_charge);
     }
     else if (meal==3)
     {
         printf("Enter the number of days having dinner:");
         scanf("%d",dinner);
         meal_charge=dinner*3500;//charge for dinner is 3500.
         printf("Meal charge(RS):%d",meal_charge);
     }
     else if (meal==4)
     {
         printf("Enter the number of days having breakfast:");
         scanf("%d",&breakfast);

         printf("Enter the number of days having lunch:");
         scanf("%d",&lunch);

         printf("Enter the number of days having dinner:");
         scanf("%d",dinner);


         meal_charge=(breakfast*2500)+(lunch*3000)+(dinner*3500);
         printf("Meal charge(RS):%d",meal_charge);


     }




      printf("\n");
      printf("\n Enter the number of days spent:");
      scanf("%d",&day);
        printf("Enter extra charges(if any):");
        scanf("%d",&charges);


            if (room_type==1)
            {
                single_ac=no_of_rooms*10000;//charge for single a/c room is rs.10000
                total_charge=meal_charge+charges+(single_ac)*day;
                         printf("THE TOTAL CHARGE IS(RS):%d",total_charge);
            }
           else if (room_type==2)
            {
               single_nonac=no_of_rooms*8000;//charge for single non a/c room is rs.8000
               total_charge=meal_charge+charges+(single_nonac)*day;
                         printf("THE TOTAL CHARGE IS(RS):%d",total_charge);
            }
            else if(room_type==3)
            {
                double_ac=no_of_rooms*15000;//charge for double a/c room is rs.15000
                total_charge=meal_charge+charges+(double_ac)*day;
                         printf("THE TOTAL CHARGE IS(RS):%d",total_charge);
            }
            else if (room_type==4)
            {
                double_nonac=no_of_rooms*13,000;//charge for double non a/c room is rs.13000
                total_charge=meal_charge+charges+(double_nonac)*day;
                         printf("THE TOTAL CHARGE IS(RS):%d",total_charge);
            }
            else if(room_type==5)
                    {
                        single_ac=single_ac_rooms*10000;
                        single_nonac=single_nac_rooms*8000;
                        double_ac=double_ac_rooms*15000;
                        double_nonac=double_nac_rooms*13000;
                         total_charge=meal_charge+charges+(single_ac+single_nonac+double_ac+double_nonac)*day;
                         printf("THE TOTAL CHARGE IS(RS):%d",total_charge);
                         printf("\n");
                    }

}





int main()
{
   Ask();check();main_menu();customer_registration(); reservation();meals();billing();
   return 0;
}

/*group members are:
CODSE202F-011/CHEHARA PERERA
CODSE202F-035/ASHINI DULASHI
CODSE202F-045/IWANTHI MALSHA
CODSE202F-42/THIYOMI WEERASINGHE
CODSE202F-052/SACHINI HANSIKA*/












