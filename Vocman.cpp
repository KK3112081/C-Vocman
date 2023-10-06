#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//
void game()
{
  char map[21][21],move;
  int n = 10, m = 10, x, y, score = 15;

  for (x = 0; x < 20; x++)
  {
    for (y = 0; y < 20; y++)
    {
      if(x == 0 || y == 0 || x== 19 || y == 19)
      {
        map[x][y] = '#';
      }
      else if(x == 3 && y > 5  && y < 15 && y != 8 && y!= 12 )
      {
        map[x][y] = 'C';
      }
      else if(x == 16 && y > 5  && y < 15 && y != 8 && y!= 12 )
      {
          map[x][y] = 'C';
      }
      else if(y == 4 && x > 8  && x < 12)
      {
                map[x][y] = 'C';
      }
      else if(y == 15 && x > 8  && x < 12)
      {
        map[x][y] = 'C';
      }
      else if(x == 9 && y == 9 )
      {
        map[x][y] = 'C';
      }
      else if(x == 11 && y == 9)
      {
        map[y][x] = 'C';
      }
      else if(x == 9 && y == 11 )
      {
        map[y][x] = 'C';
      }
      else if(x == 11 && y == 11 )
      {
        map[y][x] = 'C';
      }
      else if(x == 8 && y == 8 )
      {
        map[y][x] = 'C';
      }
      else if(x == 8 && y == 12 )
      {
        map[x][y] = 'C';
      }
      else if(x == 12 && y == 8 )
      {
        map[x][y] = 'C';
      }
      else if(x == 12 && y == 12 )
      {
        map[x][y] = 'C';
      }
      else if(x== 1 && y == 15 || x== 2 && y == 2 || x== 2 && y == 6 || x== 2 && y == 10 || x== 3 && y == 2 || x== 3 && y == 18 || x== 5 && y == 8 || x== 8 && y == 6||
      x== 9 && y == 7 || x== 11 && y == 8|| x== 13 && y == 16 || x== 13 && y == 18 || x== 13 && y == 19 || x== 14 && y == 10 || x== 16 && y == 19 || x== 17 && y == 10||
      x == 16 && y == 18)
      {
        map[x][y] = '.';
      }
        else
      {
        map[x][y] = ' ';
			}
    }
  }
  printf("Cheese Left\t\t\t%d\n", score);
  map[n][m]='M';
  for (x = 0; x < 20; x++)
  {
    for (y = 0; y < 20; y++)
    {
      printf("%c", map[x][y]);
    }
    printf("\n");
  }

  while(true)
  {
    printf("Masukkan Input: ");
    scanf("%c", &move);
    if(move == 's')
    {
      n +=1;
      if(n > 0 )
      {
        map[n-1][m] = ' ';
      }
    }
    if(move == 'w')
    {
      n -=1;
      if(n > 0 )
      {
        map[n+1][m] = ' ';
      }
    }
    if(move == 'a')
    {
      m -= 1;
      if(m > 0 )
      {
        map[n][m+1] = ' ';
      }
    }
    if(move == 'd')
    {
      m += 1;
      if(m > 0 )
      {
        map[n][m-1] = ' ';
      }
    }
    if(map[n][m] == 'C')
    {
      system("cls");
      printf("You Lose :(\n");
      break;
    }

    if(map[n][m] == '.')
    {
      score--;
    }
    if(score == 0)
    {
      system("cls");
    	printf("You Win\n");
    	return;
		}
    system("cls");
    map[n][m]='M';
    printf("Cheese Left: \t\t\t%d\n", score);
    map[n][m]='M';
    for (x = 0; x < 20; x++)
    {
      for (y = 0; y < 20; y++)
      {
        printf("%c", map[x][y]);
      }
    printf("\n");
    }
  }
  return;
}

void menu()
{
	printf("VOcman\n");
	printf("=======\n");
	printf("1. Start Game\n");
	printf("2. Exit\n");
	printf(">> ");
}

int main()
{
	int choose;
	do
  {
    menu();
    scanf("%d", &choose);
    getchar();
    switch (choose){
    case 1:
    system("cls");
    game();
    break;
  }
}
  while(choose!= 2);
return 0;
}
