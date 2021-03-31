#ifndef LAB_2_4_SCANNER_H
#define LAB_2_4_SCANNER_H

#include "../Header/peripheral_device.h"

class Scanner : public PeripheralDevice {
public:
    Scanner(string _name, int _scanSpeed, int _serviceLife);
    void SetScanSpeed(int _scanSpeed);
    void Show();
private:
    int scanSpeed;
};


#endif //LAB_2_4_SCANNER_H
