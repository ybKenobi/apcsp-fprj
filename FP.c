#include <stdio.h>
#include <ctype.h>
#include<stdlib.h>
#include <string.h>
#include <math.h>

float Series(int co, int exp, int start, int end)
{
float f;
for (int i = start; i < end + 1; i++)
{
  f = pow(i, exp) + f;
}
f = f * co;
return f;
}

int main(int argc, char *argv[])
{

float c1;
float e1;
char str[100];
int len = 0;
char *pstr = str;
float endvalue;
float total = 0;
int eee, co, exp;
if (argc < 11)
{
  printf("Not enough values (place 0 as value holders if you want nothing there).\n");
}
else
{
if (strcmp(argv[1], "dy")== 0 && strcmp(argv[2], "dx") == 0 && isdigit(*argv[3]) && isdigit(*argv[4]) && isdigit(*argv[5]) && isdigit(*argv[6]) && isdigit(*argv[7]) && isdigit(*argv[8]) && isdigit(*argv[9]) && isdigit(*argv[10]))
{
  printf("Derivtative Time \n");
  
  for ( int i = 3; i <= argc-2; i = i +2)
  {
  
    c1 = atof(argv[i]);
    e1 = atof(argv[i+1]);
    if (c1 != 0 && e1 != 0)
    {
      c1 = c1*e1;
      e1 = e1 -1;
    
      len = sprintf(pstr, " %f(X^%f) +", c1, e1);
      
      pstr += len;
    }
    else
    {
      c1 = 0; 
      e1 = 0;
    }
  }
  str[strlen(str)-1] = '\0';
  printf("\n Derivative = %s\n", str);
  eee = 1;
}
  if (isdigit(*argv[1]) && isdigit(*argv[2]) && isdigit(*argv[3]) && isdigit(*argv[4]) && isdigit(*argv[5]) && isdigit(*argv[6]) && isdigit(*argv[7]) && isdigit(*argv[8]) && isdigit(*argv[9]) && isdigit(*argv[10]))
  {
    for (int i = 0; i < 4; i++)
    {
      total = Series(atoi(argv[3 + 2 * i]), atoi(argv[4 + 2 * i]), atoi(argv[1]), atoi(argv[2])) + total;
    }
    printf ("Summation value of %dx^%d+%dx^%d+%dx^%d+%dx^%d is: %f\n", atoi(argv[3]), atoi(argv[4]), atoi(argv[5]), atoi(argv[6]), atoi(argv[7]), atoi(argv[8]), atoi(argv[9]), atoi(argv[10]), total);
  }
  else if (eee == 1)
  {
    printf("");
  }
  else
  {
    printf("Invalid answers, try again.\n");
  }
  if (strcmp(argv[1], "anti-y")== 0 && strcmp(argv[2], "anti-x") == 0 && isdigit(*argv[3]) && isdigit(*argv[4]) && isdigit(*argv[5]) && isdigit(*argv[6]) && isdigit(*argv[7]) && isdigit(*argv[8]) && isdigit(*argv[9]) && isdigit(*argv[10]))
{
if (strcmp(argv[1], "anti-y")==0 && strcmp(argv[2], "anti-x")==0)
{  
  for ( int i = 3; i <= argc-2; i = i +2)
  {
    c2 = atof(argv[i]);
    e2 = atof(argv[i+1]);
    if (c2 != 0 && e2 != 0)
    {
      e2 = e2 +1;
      c2 = c2/e2;
      len = sprintf(pstr, " %f(X^%f) +", c2, e2);
      pstr += len;
    }
    else
    {
      c2 = 0; 
      e2 = 0;
    }
  }
  str[strlen(str)-1] = '\0';
  printf("\n Anti-Derivative = %s\n", str);

}
}
}
