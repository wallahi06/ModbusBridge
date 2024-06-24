#include "Bridge.h"
#include "Arduino.h"


Bridge::Bridge(ModbusTCPClient* c1, ModbusTCPClient* c2)
  : client1(c1), client2(c2) {}


void Bridge::bridgeCoils(int coilAddress1, int coilAddress2)
{
  if (client1 -> requestFrom(COILS, coilAddress1, 1)) {
    if (client1 -> available()) 
    {
      bool coilState = client1->read();
      client2 -> coilWrite(coilAddress2, coilState)
    }
  }
}


void Bridge::brigdeHoldingRegisters(int registerAddress1, int registerAddress2)
{
  if (client1 -> requestFrom(HOLDING_REGISTERS, registerAddress1))
  {
    if (client1 -> available())
    {
      bool registerValue = client1->read();
      client2 -> holdingRegisterWrite(registerAddress2, registerValue);
    }
  }
}

