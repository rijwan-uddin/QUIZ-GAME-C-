#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

void registe();
void login();
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n,cho;
     float score;
     char choice;
     char playername[20];
     printf("\n\n\n\n\n\t\t<<press 1 for register>>");
      printf("\t\t\t\t<<press 2 for login>>");
       printf("\n\n\n\t\t\t\t\t\t<<PRESS>>:");
      scanf("%d",&cho);
      if(cho==1)
      {
          system("cls");
          registe();
      }
      else if(cho==2)
      {
       system("cls");
       login();
      }
     mainhome:
     system("cls");
     printf("\n\t\tQuiz Game About Bangladesh And Current world.\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t    WELCOME ");
     printf("\n\t\t\t       to ");
     printf("\n\t\t\t    THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter your name:");
     gets(playername);

    system("cls");
    printf("\n ----------  Welcome %s to Quiz Game About Bangladesh And Current world. --------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,1stROUND & MAIN ROUND");
    printf("\n >> In 1stROUND you will be asked a total of 4 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the MAIN Round.");
    printf("\n >> Your game starts with MAIN ROUND. In this round you will be asked a");
    printf("\n    total of 12 questions. Each right answer will be marked 1");

    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");

    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=4;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
	{
		case 1:
		printf("\n\n1/Total District of Bangladesh?");
		printf("\n\nA.65\t\tB.66\n\nC.64\t\tD.63");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.64");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\n2/Biggest Division of Bangladesh is?");
		printf("\n\nA.Rajshahi\t\tB.Dhaka\n\nC.Chittagong \t\tD.Rangpur");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Chittagong");
		       getch();
		       break;}

        case 3:
		printf("\n\n\n3/What is the capital of bangladesh");
		printf("\n\nA.Rajshahi\t\tB.Dhaka\n\nC.Chittagong \t\tD.Rangpur");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Dhaka");
		       getch();
		       break;}

        case 4:
		printf("\n\n\n4/who is the current president of bangladesh");
		printf("\n\nA.Sheikh Hasina\t\tB.Abdul Hamid\n\nC.obaidul kader\t\tD.Khaleda Zia");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Abdul Hamid");
		       getch();
		       break;}

      }
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=12;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		 case 1:
		printf("\n\n1/What is the National Game of Bangladesh?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.HA-DU-DU\t\tD.Baseball");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.HA-DU-DU");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\n2/Where united nation established?");
		printf("\n\nA.USA\t\tB.UAE\n\nC.UK\t\tD.BD");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.USA");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\n3/how many country related to united nation? ");
		printf("\n\nA.211\t\tB.210\n\nC.193\t\tD.199");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
        {printf("\n\nWrong!!! The correct answer is C.193");getch();
		       goto score;
		       break;}

         case 4:
		printf("\n\n\n4/What was Russian capital before moscow?");
		printf("\n\nA.St petursburg\t\tB.novosibirisk\n\nC.samara\t\tD.yakateringburg");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.St petursburg");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\n5/What is currency of Austria?");
		printf("\n\nA.Mark\t\tB.Euro\n\nC.Lira\t\tD.Taka");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Euro");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\n6/What is the most populas city in japan?");
		printf("\n\nA.Osaka\t\tB.TOKYO\n\nC.yokohama\tD.Nagoya");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.TOKYO");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\n7/What is the National Name of Japan?");
		printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Nippon");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\n8/How many states in USA?");
		printf("\n\nA.60\t\tB.50\n\nC.51\t\tD.54");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.50");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\n9/What is the capital of USA?");
		printf("\n\nA.Washington DC\t\tB.New york\n\nC.Chicago\t\tD.Denver");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Washington DC");getch();
		       goto score;
		       break;}
        case 10:
		printf("\n\n\n10/Which is the longest River in the world?");
		printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Nile");getch();break;goto score;}

        case 11:
       printf("\n\n\n11/who is the current P.M of Bangladesh");
        printf("\n\nA.Abdul Hamid\t\tB.Sheikh Hasina\n\nC.obaidul kader\t\tD.Khaleda Zia");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");countr++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Sheikh Hasina");
		       getch();
		       break;}

        case 12:
		printf("\n\n\n12/Who Was the first P.M of Bangladesh");
		printf("\n\nA.Ziaur Rahman\t\tB.Sheikh Mujibur Rahman\n\nC.Maolana Vasani\tD.Taz uddin Ahmed");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");countr++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Taz uddin Ahmed");
		       getch();
		       break;}

}}
	score:
    system("cls");
	score=(float)countr*1.00;
	if(score>0.00 && score<=2.00)
	{
	   printf("\n\n\t\t**************** Game Over *****************");
	     printf("\n\t\t Your score is %.2f",score);
	     printf("\n\t\t You need to improve much more",score);goto go;}

	     else if(score>2.00 && score<=4.00)
	{
	     printf("\n\n\t\t**************** Game Over *****************");
	     printf("\n\t\t Your score is %.2f",score);
	     printf("\n\t\t Better luck next time",score);goto go;}


	      else if(score>4.00 && score<=8.00)
	{
	     printf("\n\n\t\t**************** Game Over *****************");
	     printf("\n\t\t Your score is %.2f",score);
	     printf("\n\t\t GOOD TRY",score);goto go;}

	  else if(score>8.00 && score<=11.00)
	{
	     printf("\n\n\t\t**************** Game Over *****************");
	     printf("\n\t\t Your score is %.2f",score);
	     printf("\n\t\t WELL DONE",score);goto go;}



	 else if(score==12.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A Genius!!!!!!!!!");
	    printf("\n\t\t Your score is 12.00 out of %.2f",score);
	    printf("\n\t\t\t\t!!Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU NEED TO  ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play again");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*********************************************************");
	printf("\n\n\t\t %s has secured the Score %0.2f",name,scr);
	printf("\n\n\t\t*********************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n .......Quiz Game About Bangladesh And Current world......");
    printf("\n >> In warmup round you will be asked a total of 4 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the MAIN Round.");
    printf("\n >> Your game starts with MAIN ROUND. In this round you will be asked a");
    printf("\n    total of 12 questions. Each right answer will be marked 1");

    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
struct login{
char fname[100];
char lname[50];
char username[20];
char password[20];
};
void registe()
{
    FILE *log;
    log=fopen("logindetails.txt","w");
    struct login l;
    printf("Enter first name:");
    scanf("%s",l.fname);
    printf("\nEnter last name:");
    scanf("%s",l.lname);
    printf("\nEnter userID:");
    scanf("%s",l.username);
     printf("\nEnter password:");
    scanf("%s",l.password);
    fwrite(&l,sizeof(l),1,log);

    fclose(log);

 printf("\nnow login with your userID and password\n");
  printf("\npress any key to continue...\n");
  getch();
  system("cls");
 login();
}
void login()
{char username[20];
char password[20];
  FILE *log;
    log=fopen("logindetails.txt","r");
  struct login l;
  printf("UserID:");
  scanf("%s",&username);
  printf("password:");
    scanf("%s",&password);

while(fread(&l,sizeof(l),1,log))
{
    if (strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
    {
        printf("login successful\n");
         printf("PRESS ANY KEY TO ENTER THE MENU\n");
         getch();

    }
    else{
        printf("please enter correct id and password");
        exit(1);
    }
}
fclose(log);

}


