#ifndef BRIDGE_H
#define BRIDGE_H

#include <ArduinoModbus.h>

class Bridge {
  public:
    Bridge(ModbusTCPClient* client1, ModbusTCPClient* client2);

    void bridgeCoils(int coilAddress1, int coilAddress2);
    void brigdeHoldingRegisters(int registerAddress1, int registerAddress2);

  private:
    ModbusTCPClient* client1;
    ModbusTCPClient* client2;
};

#endif // BRIDGE_H
