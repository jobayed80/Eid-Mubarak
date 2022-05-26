#include <stdio.h>
#include <string.h>
#include <windows.h>


int count;
int height = 7;

int width = (2 * height) - 1;

int abs(int d)
{
	return d < 0 ? -1 * d : d;
}


COORD coord = {0,0}; ///set the cordinate to 0, 0 (top-left corner of window);
void gotoxy(int ,int);
void drawRectangle();
void clearWindow();
void window();

void E(void);
void I(void);
void D(void);
void M(void);
void U(void);
void B(void);
void A(void);
void R(void);
void A_1(void);
void K(void);






int main()
{
	window();	

	while(1)
	{
		clearWindow();
		E();
		I();
    	D();
    	M();
    	U();
    	B();
    	A();
    	R();
    	A_1();
    	K();
    //	clearWindow();
    	
	}
 

}

void gotoxy(int x, int y)
{
    coord.X = x; coord.Y = y; /// X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN+FOREGROUND_BLUE);
}



/*-------------------------------Table Rectangle-----------------------------------*/

void drawRectangle()
{
    int c, d;
    gotoxy(3,0);
    printf("%c",201);
    for(c = 4; c < 116; c++)
	{
        gotoxy(c, 0);
        printf("%c",205);
        Sleep(10);
    }
    gotoxy(116,0);
    printf("%c",187);
    for(c = 1; c <  28; c++)
	{
        gotoxy(116, c);
       
            printf("%c",186);
            Sleep(10);
        
        //Sleep(10);
    }
    gotoxy(116, 28);
    printf("%c",188);
    for(c = 115; c > 3; c--)
	{
        gotoxy(c,28);
          printf("%c",205);//Sleep(10);
        
        Sleep(10);
    }
    
    
    gotoxy(3,28);
    printf("%c",200);
    for(c = 27; c > 0; c--)
	{
        gotoxy(3,c);
        
			printf("%c",186);
            
        Sleep(3);
    }
   

}

void clearWindow()
{
    int c,d;
    for(c = 10; c < 112; c++)
	{
        for(d = 2; d < 28; d++)
		{
            gotoxy(c,d);printf(" ");
        }//Sleep(3);
    }
    return;
}

void window()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
	drawRectangle();
}


void E()
{
	char jo[]= {"******************"};
	int row = 4;
	int i,j;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE+FOREGROUND_GREEN);
	for (i = 0; i < height && jo[i]!='\0'; i++,row++) 
	{
		gotoxy(38,row);
		printf("%c",jo[i]);
		Sleep(50);
		for (j = 0; j < height; j++)
		{
			if ((i == 0 || i == height - 1) || (i == height / 2&& j <= height / 2))
			{
				printf("%c",jo[i]);
				Sleep(50);
			}
			else
				continue;
		}
		gotoxy(38,row);
	}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x0f);
}

void I()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE+FOREGROUND_GREEN);
	int i, j,row=4;
	char jo[] ={"*************"};
	for (i = 0; i < height && jo[i]!='\0'; i++,row++)
	{
		gotoxy(55,row);
		for (j = 0; j < height; j++)
		{
			if (i == 0 || i == height - 1)
			{
				printf("%c",jo[i]);
				Sleep(50);
			}
			else if (j == height / 2)
			{
				printf("%c",jo[i]);
				Sleep(50);
			}
			else
				printf(" ");
		}
		gotoxy(55,row);
	}
}

// Function to print the pattern of 'D'
void D()
{
	char jo[] ={"**************"};
	int i, j;
	int row =4;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN-FOREGROUND_BLUE);
	for (i = 0; i < height && jo[i]!='\0'; i++,row++)
	{
		gotoxy(70,row);
		printf("%c",jo[i]);
		Sleep(70);
		for (j = 0; j < height; j++)
		{
			if ((i == 0 || i == height - 1) && j < height - 1)
			{				
				printf("%c",jo[i]);
			Sleep(50);
				}
			else if (j == height - 1 && i != 0 && i != height - 1)
			{
				printf("%c",jo[i]);
				Sleep(50);
			}
			else
			{
				printf(" ");
			}
		}
		gotoxy(70,row);
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x0f);
}

// Function to print the pattern of 'M'
void M()
{
	char jo[]= {"*#*#*#*#*#*#*#"};
	int i, j, counter = 0;
	int row=17;
	for (i = 0; i < height && jo[i]!='\0'; i++,row++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
		gotoxy(15,row);
		printf("%c",jo[i]);
		Sleep(65);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x0f);		
		for (j = 0; j <= height && jo[i]!='\0'; j++)
		{
			if (j == height)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN+FOREGROUND_BLUE);
				printf("%c",jo[i]);
				Sleep(65);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x0f);
					
			}
			else if (j == counter || j == height - counter - 1)
			{					
				printf("%c",jo[i]);
			Sleep(65);
						
			}
			else
			{
				printf(" ");
			}
		}
		if (counter == height / 2) {
			counter = -9999;
		}
		else
			{
				counter++;
			}
		gotoxy(15,row);
	}
}

void U()
{
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN+FOREGROUND_BLUE);
	int i, j,row=17;
	char jo[] ={"**************"};
	
	for (i = 0; i < height  && jo[i]!='\0'; i++,row++)
	{
		//printf("\t\t\t\t\t");
		gotoxy(27,row);
		if (i != 0 && i != height - 1)
		{
			//gotoxy(60,row);
			
			printf("%c",jo[i]);
			Sleep(65);
		}
			
		else
		{
			printf(" ");
		}
		for (j = 0; j < height; j++)
		{
			if (((i == height - 1) && j >= 0 && j < height - 1))
			{
			
				printf("%c",jo[i]);
			Sleep(65);
			}
			
			else if (j == height - 1 && i != 0 && i != height - 1)
			{
				printf("%c",jo[i]);
			Sleep(65);
			}
			else
			{				
				printf(" ");
			}
				
		}
		gotoxy(27,row);
				
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x0f);
}

void B()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED+FOREGROUND_GREEN);
	int row=17;
	int width=10;
		char jo[]= {"*#*#*#*#*#*#*#"};
	int i, j, half = (height / 2);
	for (i = 0; i < height && jo[i]!='\0'; i++,row++)
	{
		gotoxy(40,row);
		printf("%c",jo[i]);
		for (j = 0; j < width; j++)
		{
			if ((i == 0 || i == height - 1 || i == half) && j < (width - 2))
			{
				printf("%c",jo[i]);
				Sleep(65);
			}
			else if (j == (width - 2) && !(i == 0 || i == height - 1 || i == half))
			{
				printf("%c",jo[i]);
			Sleep(65);
			}
			else
			{
				printf(" ");
			}
		}
		gotoxy(40,row);
	}
}


void A()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
	char jo[]= {"******************"};
	int row = 17;	
	
	int n = width / 2, i, j;
	for (i = 0; i < height && jo[i]!='\0'; i++,row++)
	{ 
		gotoxy(53,row);
		for (j = 0; j <= width && jo[i]!='\0'; j++)
		{
			if (j == n || j == (width - n) || (i == height / 2 && j > n && j < (width - n)))
				{
					
					printf("%c",jo[i]);
				  Sleep(65);
				}
			else{
				
				printf(" ");
			}
			
		}
		gotoxy(53,row);
		n--;
	
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x0f);
}
void R()
{
	int i, j, half = (height / 2), row=17;
	int width = 10;
		char jo[]= {"*#*#*#*#*#*#*#"};
	for (i = 0; i < height && jo[i]!='\0'; i++,row++)
	{
		gotoxy(69,row);
		printf("%c",jo[i]);
		for (j = 0; j < width; j++)
		{
			if ((i == 0 || i == half) && j < (width - 2))
			{
				printf("%c",jo[i]);
			Sleep(65);
			}
			else if (j == (width - 2) && !(i == 0 || i == half))
			{
				printf("%c",jo[i]);
				Sleep(65);
			}
			else
				printf(" ");
		}
		gotoxy(69,row);
	}
}
void A_1()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
	char jo[]= {"******************"};
	int row = 17;	
	
	int n = width / 2, i, j;
	for (i = 0; i < height && jo[i]!='\0'; i++,row++)
	{ 
		gotoxy(82,row);
		for (j = 0; j <= width && jo[i]!='\0'; j++)
		{
			if (j == n || j == (width - n) || (i == height / 2 && j > n && j < (width - n)))
				{
					
					printf("%c",jo[i]);
				    Sleep(65);
				}
			else{
				
				printf(" ");
			}
			
		}
		gotoxy(82,row);
		n--;
	
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x0f);
}





// Function to print the pattern of 'K'
// Function to print the pattern of 'K'
void K()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE+FOREGROUND_GREEN);
	int i, j,row=17;
	char jo[] ={"*************"};
    int half = height / 2, dummy = half;
    for (i = 0; i < height && jo[i]!='\0'; i++,row++) {
    	gotoxy(101,row);
        printf("%c",jo[i]);
        for (j = 0; j <= half; j++) {
            if (j == abs(dummy))
                {
                	printf("%c",jo[i]);
               Sleep(65);
				}
            else
                 {
                 	printf(" ");
                 Sleep(65);
				 }
        }
       gotoxy(101,row);
        
        dummy--;
    }
}

