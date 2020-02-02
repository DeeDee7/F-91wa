#ifndef F91waPower_h
#define F91waPower_h

//Standard Arduino Libraries
#include <Arduino.h>

class  F91waPower
{
  private:
  public:
    bool isCharging();
    uint16_t getBatteryVoltage();
};

#endif
