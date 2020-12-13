#include "A053BasicKit.h"

int main(void)
{
  int counter1 = 0;
  int counter2 = 0;
  int s1 = 0; //led status inside
  int s2 = 0; //led status outside
  int num = 0; // number of people in gym
  int val1; // 0 is inside
  int val2; // 2 is outside

while (1)
{
  char str[600];
  // Publish ADC port readings
  strcpy(str,"{\"Sensors\":{");
  struct adc_msg_s samples[ADC_MAX_SAMPLES];
  char tempBuf[20];

  val1 = read_adc(0);
  val2 = read_adc(2);
  if (val1 > 50){
    counter1++;
  }else{
    counter1 = 0;
  }
  if (counter1 == 1){
    s1++;
  }

  if (val2 > 50){
    counter2++;
  }else{
    counter2 = 0;
  }if (counter2 == 1){
    s2++;
  }


  {
    printf("\nval1 is %d, val2 is %d\nnum is %d\ncounter1 is %d, counter2 is %d\n", val1, val2,num, counter1, counter2);
    up_mdelay(2000);
  }
  if (s1 + s2 != 0)
  {
    while (s1 != 0)
    {
      printf("s1 is %d and num is %d\n",s1, num);
      val1 = read_adc(0);
      val2 = read_adc(2);
      if (val1 > 50){
        counter1++;
      }else{
        counter1 = 0;
      }if (counter1 == 1){
        s1++;
      }
      if (val2 > 50){
        counter2++;
        if (counter2 == 1){
          s1--;
          num--;
        }
      }else{
        counter2 = 0;
      }

      mqtt_publish(pClientHandle, MESSAGE_TOPIC, str, sizeof(str)

    }

    while (s2 != 0)
    {
      printf("s2 is %d and num is %d\n",s2, num);
      val1 = read_adc(0);
      val2 = read_adc(2);
      if (val2 > 50){
        counter2++;
      }else{
        counter2 = 0;
      }if (counter2 == 1){
        s2++;
      }
      if (val1 > 50){
        counter1++;
        if (counter1 == 1)
        {
          s2--;
          num++;
        }
      }else{
        counter1 = 0;
      }

      mqtt_publish(pClientHandle, MESSAGE_TOPIC, str, sizeof(str)

    }
  }
}
}
