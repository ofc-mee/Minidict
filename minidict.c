//MINI DICTIONARY BY MALIQA
#include <stdio.h>
int c=0; // to clear buffer we can not add it like int c in while so gonna make it global
int choice; 

//int inpcho(int choice) 
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
    
    printf("\n @LOADING YOUR MENU ...\n PLEASE WAIT \n");
printf("-----------------------------------------------------------------------------------------\n");

    printf("---------MENU--------\n");
    printf("1.Find number of vowels in your word \n");
    printf("2.Dictionary\n");
    printf("3.Exit\n");

      inpcho(&choice);
    



      while( (c = getchar()) != '\n' && c != EOF);
      


switch(choice)

    
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

