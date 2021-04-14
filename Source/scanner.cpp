#include "../Header/scanner.h"

Scanner::Scanner(string _name, int _scanSpeed, int _serviceLife) {
    name = _name;
    scanSpeed = _scanSpeed;
    serviceLife = _serviceLife;
}

void Scanner::Show() {
    cout << "Название: " << name << endl;
    cout << "Скорость сканирования: " << scanSpeed << " слов/о/а в секунду" << endl;
    cout << "Срок эксплоатации: " << serviceLife << endl << endl;
}

void Scanner::SetSpeedParam(int _param) {
    scanSpeed = _param;
}
