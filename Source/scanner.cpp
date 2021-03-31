#include "../Header/scanner.h"

Scanner::Scanner(string _name, int _scanSpeed, int _serviceLife) {
    name = _name;
    scanSpeed = _scanSpeed;
    serviceLife = _serviceLife;
}

void Scanner::SetScanSpeed(int _scanSpeed) {
    scanSpeed = _scanSpeed;
}

void Scanner::Show() {
    cout << "Название: " << name << endl;
    if (scanSpeed % 2 == 0 or scanSpeed % 3 == 0 or scanSpeed % 4 == 0) {
        cout << "Скорость сканирования: " << scanSpeed << " слова в секунду" << endl;
    } else if (scanSpeed % 10 == 1) {
        cout << "Скорость сканирования: " << scanSpeed << " слово в секунду" << endl;
    } else {
        cout << "Скорость сканирования: " << scanSpeed << " слов секунду" << endl;
    }

    cout << "Срок эксплоатации: " << serviceLife << endl;
}


