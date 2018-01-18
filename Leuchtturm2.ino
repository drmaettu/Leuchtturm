#include <SoftPWM.h>

void setup()
{
  SoftPWMBegin();

  for (int i = 2; i < 13; i++)
  {
    SoftPWMSet(i, 0);
    SoftPWMSetFadeTime(i, 400, 300);
  }
}

void loop()
{
  for (int i = 0; i < 11; i++)
  {
    SoftPWMSet(2 + i, 255);
    delay(100);
    SoftPWMSet(2 + (i+1) % 11, 255);
    delay(300);
    SoftPWMSet(i, 0);
    delay(100);
  }
}
