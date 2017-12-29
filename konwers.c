//konwersja liczb rzymskich na arabskie

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
char rzym [12];
void Konwers(char *);

int main(int argc, char *argv[])
{
  cout << "Podaj liczbe rzymska ktora chcesz zamienic na arabska: ";
  cin >> rzym;
  Konwers(rzym);
  system("PAUSE");
  return 0;
}

void Konwers(char* wart)
{
  int x=0;
  for(i=0; i<=12; i++)
    {
      if(wart[i]=='I' && wart[i+1]=='V')
	{
	  x+=4;
	  i++;
	}
      else if(wart[i]=='I' && wart[i+1]=='X')
        {
          x+=9;
          i++;
        }
      else if(wart[i]=='X' && wart[i+1]=='L')
        {
          x+=40;
          i++;
        }
      else if(wart[i]=='X' && wart[i+1]=='C')
        {
          x+=90;
          i++;
        }
      else if(wart[i]=='C' && wart[i+1]=='D')
        {
          x+=400;
          i++;
        }
      else if(wart[i]=='C' && wart[i+1]=='M')
        {
          x+=900;
          i++;
        }
      else if(wart[i]=='I')
	{
	  x+=1;
	  i++;
	}
      else if(wart[i]=='V')
	{
          x+=5;
          i++;
        }
      else if(wart[i]=='X')
	{
          x+=10;
          i++;
        }
      else if(wart[i]=='L')
	{
          x+=50;
          i++;
        }
      else if(wart[i]=='C')
	{
          x+=100;
          i++;
        }
      else if(wart[i]=='D')
	{
          x+=500;
          i++;
        }
      else if(wart[i]=='M')
	{
          x+=1000;
          i++;
        }
      else if(!(wart[i]))
	{
	  break;
        }
    }
  cout << x << endl;
}
