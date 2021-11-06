//kbc game
//header file
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>

void inputa();//funtion prototype
void inputb();
void inputc();
void inputd();

int option=1,count=0,check=0;//global variable declration

//main program
int main()
{
	int i,j,k;//local variable declaration

	//stating code
	printf("\t\t\t\t      KBC\n");
	printf("\t\t\t      Kaun Banega Crorepati\n");

	//pattern printing
	for(i=0;i<2;i++)
	{
		printf("\t\t\t\t    ");
		for(j=0;j<3-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<1+2*i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<4;i++)
	{
		printf("\t\t\t\t    ");
		for(j=0;j<i+1;j++)
		{
			printf(" ");
		}
		for(k=0;k<5-i*2;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("Press any key to start\n");
	getch();
	//game loop
	do
	{
		switch(option)//switch case
		{
			case 0: printf("soory try again later\n");
					system("exit||exit 1");

			case 1: if(check==0)
				{
					system("cls||clear"); 
					printf("1 when is independence day of india celebrated\na 26 jan\nb 15 jan\nc 02 oct \nd 15 aug\n");
					inputd();
				}
				else
				{
					system("cls||clear");
					printf("1 in which year world war 2 ended\na 1939\nb 1945\nc 1947\nd 1949\n");
					inputb();
				}
				break;

			case 2: if(check==0)
				{
					system("cls||clear");
					printf("2 In which year television was invented\na 1927 \nb 1925\nc 1929\nd 1932\n");
					inputa();
				}
				else
				{
					system("cls||clear");
					printf("2 who inventer first computer\na charles beabbeage\nb adam osborne\nc philo taylor farlsworth\nd none od above\n");
					inputa();
				}
				break;

			case 3: if(check==0)
				{
					system("cls||clear");
					printf("3 In which stadium tendulke]ar completed his 100st century\na eden gardern\nb firoz shah kotla ground\nc shere bangla stadium\nd non of the above\n");
					inputc();
				}
				else
				{
					system("cls||clear");
					printf("3 national game of india\na cricket \nb kabadi\nc tennis\nd hockey\n");
					inputd();
				}
				break;

			case 4: if(check==0)
				{
					system("cls||clear");
					printf("4 when was optical fiber invented\na 1790\nb 1890\nc 1980\nd 1900\n");
					inputa();
				}
				else
				{
					system("cls||clear");
					printf("4 nuclear sizes are expressed in a unit named\na tesla \nb fermi\nc newton\nd angstrom\n");
					inputb();
				}
				break;

			case 5: if(check==0)
				{
					system("cls||clear");
					printf("5 what are total number of gland in human body\na 12 \nb 09\nc 14\nd 07\n");
					inputc();
				}
				else
				{
					system("cls||clear");
					printf("5 what is a heart of human made of\na cell\nb muscle\nc tissue\nd bone\n");
					inputb();
				}
				break;

			case 6: if(check==0)
				{
					system("cls||clear");
					printf("6 what is ca atomic number\na 20\nb 12\nc 18\nd 8\n");
					inputa();
				}
				else
				{
					system("cls||clear");
					printf("6 what is atomic weight of na\na 40 \nb 18.5\nc 27\nd 23\n");
					inputd();
				}
				break;

			case 7: if(check==0)
				{
					system("cls||clear");
					printf("7 where zero was inventer\na usa\nb india\nc china\nd russia\n");
					inputb();
				}
				else
				{
					system("cls||clear");
					printf("7 what is imaginary term called\na pie\nb $\nc i\nd #\n");
					inputc();
				}
				break;

			case 8: if(check==0)
				{
					system("cls||clear");
					printf("8 who invented c\na dennis ritchie\nb ken thomson\nc bjarne stroustrup\nd herb sutter\n");
					inputa();
				}
				else
				{
					system("cls||clear");
					printf("8 who created first smart phone\na nokia \nb apple\nc samsung\nd motorola\n");
					inputd();
				}
				break;

			case 9: if(check==0)
				{
					system("cls||clear");
					printf("9 instrument used to measure earthquake is known as\na quakemeter\nb barometer\nc oscillator\nd seismogarph\n");
					inputd();
				}
				else
				{
					system("cls||clear");
					printf("9 place directly up focus on earth surface is known as\na strike\nb comma\nc epicenter\nd origin\n");
					inputc();
				}
				break;

			case 10:if(check==0)
				{
					system("cls||clear");
					printf("10 when is black friday celebrated\na 04 dec\nb 23 nov\nc 30 nov\nd 22 sept\n");
					inputb();
				}
				else
				{
					system("cls||clear");
					printf("10 when is world laughter day celebrated\na first sun of may\nb thrid sun of may\nc fourth sunday of april\nd none of above\n");
					inputa();
				}
				break;

			case 11:if(check==0)
				{
					system("cls||clear");
					printf("11 according to world health organisation how many citi in india are in the list of 20 most polluted citi in the world\na 10\nb 08\nc 14\nd 16\n");
					inputc();
				}
				else
				{
					system("cls||clear");
					printf("11 what parcentage of stake has been acquired by walmart in flipkart by paying 16 billion dollar\na 51%\nb 77%\nc 66%\nd 55%\n");
					inputb();
				}
				break;

			case 12:if(check==0)
				{
					system("cls||clear");
					printf("12 what come after e in english\na n\nb q\nc f\nd 1\n");
					inputa();
				}
				else
				{
					system("cls||clear");
					printf("12 what is that we leave behind every where but that does not leave us any where\na shadow\nb bodyodour\nc fingerprints\nd foot print\n");
					inputc();
				}
				break;
			
			default:system("cls||clear");
					printf("\n\t\t\t\t  Game is over");
					option++;
					break;
		}
	}
	while(option<=13);
	//end of game loop

	//end part of program;
	fflush(stdin);
	printf("\n\t\t\t\t Result is = %d",count);
	printf("\n\n\t\t\t\t    REMARK\n=>");
	getchar();
}

//fuction declaration
void inputa()
{
	char ch,a,A;
	int  i,j,k;

	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='a'|ch=='A')
	{
		printf("\n\t\t\t      your answer is correct\n\n");
		for(i=2;i<7;i++)
		{
			printf("\t\t\t\t   ");
			for(j=2;j<i;j++)
			{
				printf(" ");
			}
			for(k=2;k<15-i*2;k++)
			{
				printf("%c",i);
			}
			printf("\n");
		}
		option++;
		count++;
		check=0;
		getch();
	}
	else
	{
		printf("\n\t\t\t      better luck next time\n");
		for(i=0;i<7;i++)
		{
			printf("\t\t\t\t  ");
			for(j=0;j<6-i;j++)
			{
				printf(" ");
			}
			for(k=2;k<1+2*i;k++)
			{
				printf("%c",i);
			}
			printf("\n");
		}
		option++;
		count--;
		check=1;
		getch();
	}
}
void inputb()
{
	char ch,b,B;
	int  i,j,k;

	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='b'|ch=='B')
	{
		printf("\n\t\t\t      your answer is correct\n\n");
		for(i=2;i<7;i++)
		{
			printf("\t\t\t\t   ");
			for(j=2;j<i;j++)
			{
				printf(" ");
			}
			for(k=2;k<15-i*2;k++)
			{
				printf("%c",i);
			}
			printf("\n");
		}
		option++;
		count++;
		check=0;
		getch();
	}
	else
	{
		printf("\n\t\t\t      better luck next time\n");
		for(i=0;i<7;i++)
		{
			printf("\t\t\t\t  ");
			for(j=0;j<6-i;j++)
			{
				printf(" ");
			}
			for(k=2;k<1+2*i;k++)
			{
				printf("%c",i);
			}
			printf("\n");
		}
		option++;
		count--;
		check=1;
		getch();
	}
}
void inputc()
{
	char ch,c,C;
	int  i,j,k;

	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='c'|ch=='C')
	{
		printf("\n\t\t\t      your answer is correct\n\n");
		for(i=2;i<7;i++)
		{
			printf("\t\t\t\t   ");
			for(j=2;j<i;j++)
			{
				printf(" ");
			}
			for(k=2;k<15-i*2;k++)
			{
				printf("%c",i);
			}
			printf("\n");
		}
		option++;
		count++;
		check=0;
		getch();
	}
	else
	{
		printf("\n\t\t\t      better luck next time\n");
		for(i=0;i<7;i++)
		{
			printf("\t\t\t\t  ");
			for(j=0;j<6-i;j++)
			{
				printf(" ");
			}
			for(k=2;k<1+2*i;k++)
			{
				printf("%c",i);
			}
			printf("\n");
		}
		option++;
		count--;
		check=1;
		getch();
	}
}
void inputd()
{
	char ch,d,D;
	int  i,j,k;

	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='d'|ch=='D')
	{
		printf("\n\t\t\t      your answer is correct\n\n");
		for(i=2;i<7;i++)
		{
			printf("\t\t\t\t   ");
			for(j=2;j<i;j++)
			{
				printf(" ");
			}
			for(k=2;k<15-i*2;k++)
			{
				printf("%c",i);
			}
			printf("\n");
		}
		option++;
		count++;
		check=0;
		getch();
	}
	else
	{
		printf("\n\t\t\t      better luck next time\n");
		for(i=0;i<7;i++)
		{
			printf("\t\t\t\t  ");
			for(j=0;j<6-i;j++)
			{
				printf(" ");
			}
			for(k=2;k<1+2*i;k++)
			{
				printf("%c",i);
			}
			printf("\n");
		}
		option++;
		count--;
		check=1;
		getch();
	}
}

