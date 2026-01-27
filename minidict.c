//MINI DICTIONARY BY MALIQA
#include <stdio.h>
int c=0; // to clear buffer we can not add it like int c in while so gonna make it global
int choice; 

//int inpcho(int choice) //knock knock IS this CUTE girl trynna change value using call by value hHAHAHA we need call be refrence here
int inpcho(int *choice)
{
printf("enter your choice :  ");
    scanf("%d",choice); //corrected &choice
    return 0;

}


int vowelcouont(char word[]); 


int main()
{
    printf (" \nenter your word to find : ");
    char word[80];
    scanf("%81s",word); // heard that this prevent buffer overflow
    while((c = getchar()) != '\n' && c != EOF); //to clean buffer if i wanna use fegts in future for a complete line
        // WARNING FOR THIS LITTLE GIRLS :- you don't know EOF search it or ask it ..  I am copying this from leviethan
    printf("\n @LOADING YOUR MENU ...\n PLEASE WAIT \n");
printf("-----------------------------------------------------------------------------------------\n");

    /*PROGRAM DEPENDENCIES BY MALIQA
     so basically we will use file handling approach I have no idea yet about it After I succesfully complete this I will know somthing about file handling ....
     So we are talking about DEPENDENCIES so they are not for user while using it yeah but for me while writting I am the only one maybe is doran  mein ibraheem ya sidra ya bilal sy puch lu but i dont think cuz This is only for mee project apna apna
     so basically we I mean I will install  JSON(manually dictionary file ) it is written in umm data file koi language nhi maybe research galat ho but credit end mein dekhyn gy */




    printf("---------MENU--------\n");
    printf("1.Find number of vowels in your word \n");
    printf("2.Dictionary\n");
    printf("3.Exit\n");

      inpcho(&choice);
      /*i dont think so k yahan buffer blear krna but umm idk kr lety hain its a good practice yk .... and yeah its my code i am the boss yh yh ik about compiler*/



      while( (c = getchar()) != '\n' && c != EOF);
      /*printf (" \nenter your word to find : \n");
      char word[80];
      scanf("%50s",word); // decide nhi kiya k word kahan enter krwana h*/


switch(choice)

    /*idea user ko puri user ko facilitate kiya ja skta h k aik line or pragraph encrpyt kry or mera code user kr k hi dycrypt but allah kry file handlingto hojaye pehly */
{
    case 1 :

       /* printf (" \nenter your word to find : \n");
        char word[80];
        scanf("%50s",word); // heard that this prevent buffer overflow*/

       int count = vowelcouont(word);

       printf("Number of vowels in your word are : %d \n " ,count);


    break ;



    case 2:
{
printf("hi");
}
    break ;




    case 3:
{
printf("olaa");
}
    break;




    default:
        printf("INVALID");
}



return 0;
}




int vowelcouont(char word[])  //defination of function
{
  int count=0;
  int i=0;
  for(int i=0; word[i]!= '\0' ; i++)
  {char c = word[i];
      if( c == 'a' || c== 'e' || c== 'i' || c == 'o' || c == 'u'
           || c == 'A' || c== 'E' || c== 'I' || c == 'O' || c == 'U')
    {  count++; }
}
return count;
}
//BYE BYE CODE AT 02:55 AM kal dictd installkrein gy
