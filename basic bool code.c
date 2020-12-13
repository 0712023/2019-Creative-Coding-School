#include "A053BasicKit.h"

int main()
{
//  boolean in, out;
  int counter1 = 0
  int counter2 = 0
  int s1 = 0 //led status inside
  int s2 = 0 //led status outside
  int num = 0 // number of people in gym
  int val1 = read_adc(0); // 0 is inside
  int val2 = read_adc(2); // 2 is outside
  if (val1 == LOW) //val1 is value of sensor inside
  {
    in = TRUE;
  }
  else
  {
    in = FALSE;
  }
  if (val2 == LOW) //val2 is value of sensor outside
  {
    out = TRUE;
  }
  else
  {
    out = FALSE;
  }

  if (in||out)
  {
    if (in)
    {
      n--;
    }
    else
    {
      n++;
    }
  }
in = FALSE;
out = FALSE;
up_mdelay(3000)
}
