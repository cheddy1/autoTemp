#include "data.h"
#include "executive.h"
#include <iostream>

using namespace std;

void executive::run()
{
  int LocationKey;
  int temp;
  int level;

  
  int goal = 68;

  cout << "Input a location:";
  cin >> LocationKey;
  /*cout << "The temperature in one day is: " << one << "/n";
  cout << "The temperature in two days is: " << two << "/n";
  cout << "The temperature in three days is: " << three << "/n";
  cout << "The temperature in four days is: " << four << "/n";
  cout << "The temperature in five days is: " << five << "/n";

  */
  double myTemp[4];
  /*myTemp[0]=one;
  myTemp[1]=two;
  myTemp[2]=three;
  myTemp[3]=four;
  myTemp[4]=five;
  */
  for( int i = 0; i < myTemp[i]; i++)
  {
    if(myTemp[i] > goal)
    {
      level = myTemp[i] - (myTemp[i] - goal);
    }
     else if (myTemp[i] < goal)
    {
      level = myTemp[i] + (goal - myTemp[i]);
    }
  }
  for(int i=0;i<myTemp[i]; i++)
  {
    if (level>5)
    {
      cout<< "High Heat: ON";
    }
    else if (level<=3 && level>1)
    {
      cout<< "Medium Heat: ON";
    }
    else if(level<=1 && level>=-1)
    {
      cout<< "Low Heat: ON";
    }
    else if(level>=-3 && level<-1)
    {
      cout<< "No Air";
    }
    else if(level>3 && level<=5)
    {
      cout<< "Low Air: ON";
    }
    else if(level<-3 && level>=-5)
    {
      cout<< "Medium Air: ON";
    }
    else if (level>-5)
    {
      cout<< "High Air: ON";
    }
  }
  


}
