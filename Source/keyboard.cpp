#include "../Header/keyboard.h"

Keyboard::Keyboard(string _name, int _keyResponseSpeed, int _serviceLife) {
    name = _name;
    keyResponseSpeed = _keyResponseSpeed;
    serviceLife = _serviceLife;
}

void Keyboard::Show() {
    cout << "Название: " << name << endl;
    cout << "Скорость отклика клавиш: " << keyResponseSpeed << " ms" << endl;
    cout << "Срок эксплоатации: " << serviceLife << endl << endl;
}

void Keyboard::SetSpeedParam(int _param) {
    keyResponseSpeed = _param;
}
