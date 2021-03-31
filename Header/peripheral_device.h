#ifndef LAB_2_4_PERIPHERAL_DEVICE_H
#define LAB_2_4_PERIPHERAL_DEVICE_H

#include <string>
#include <iostream>
using namespace std;

class PeripheralDevice {
public:
    PeripheralDevice();
    virtual void Show();
    void SetServiceLife(int _serviceLife);
    void SetName(string _name);
    int GetServiceLife();
protected:
    string name;
    int serviceLife;
};

#endif //LAB_2_4_PERIPHERAL_DEVICE_H
