#include "../Header/peripheral_device.h"

PeripheralDevice::PeripheralDevice() {
    serviceLife = 0;
}

void PeripheralDevice::Show() {
    cout << "Название: " << name << endl;
    cout << "Срок эксплоатации: " << serviceLife << endl << endl;
}

void PeripheralDevice::SetName(string _name) {
    name = _name;
}

void PeripheralDevice::SetServiceLife(int _serviceLife) {
    serviceLife = _serviceLife;
}

int PeripheralDevice::GetServiceLife() {
    return serviceLife;
}

void PeripheralDevice::SetSpeedParam(int _param) {

}
