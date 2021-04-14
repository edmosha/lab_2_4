#ifndef LAB_2_4_KEYBOARD_H
#define LAB_2_4_KEYBOARD_H

#include "../Header/peripheral_device.h"

class Keyboard : public PeripheralDevice {
public:
    Keyboard(string _name, int _keyResponseSpeed, int _serviceLife);
    void SetSpeedParam(int _param);
    void Show();
private:
    int keyResponseSpeed;
};


#endif //LAB_2_4_KEYBOARD_H
