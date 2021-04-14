#include "../Header/peripheral_device.h"
#include "../Header/keyboard.h"
#include "../Header/scanner.h"

int main() {
    Keyboard k1("MotoSpeed", 1,3);
    Keyboard k2("HyperX",2,8);
    Keyboard k3("Razer", 1,5);
    Scanner s1("Canon", 8,10);
    Scanner s2("HP",10,2);
    Scanner s3("EPSON", 13,6);

    PeripheralDevice *pDevice[6];

    pDevice[0] = &k1; pDevice[1] = &k2; pDevice[2] = &k3;
    pDevice[3] = &s1; pDevice[4] = &s2; pDevice[5] = &s3;

    int choice = 0;
    while (choice != 4) {
        cout << "\n===============================================" << endl;
        cout << "*                    МЕНЮ                     *" << endl;
        cout << "===============================================" << endl;
        cout << "1. Показать устройства" << endl;
        cout << "2. Средний срок эксплуатации" << endl;
        cout << "3. Редактировать" << endl;
        cout << "4. Завершить" << endl;
        cin >> choice;
        switch(choice) {
            case 1: {
                for (int i=0; i<6; i++) {
                    pDevice[i]->Show();
                }
            }break;
            case 2: {
                float param = 0;
                for (int i = 0; i < 6; i++) {
                    param += pDevice[i]->GetServiceLife();
                }
                cout << "Средний срок эксплуатации: " << param / 6 << endl;
            }break;
            case 3: {
                int num, choiceNum;
                cout << "Какое устройство вы хотите изменить?: ";
                cin >> num;
                cout << "Какой параметр вы хотите изменить?" << endl;
                cout << "1. Название" << endl;
                cout << "2. Скорость отклика/считывания" << endl;
                cout << "3. Скрок эксплуатации" << endl;
                cin >> choiceNum;
                switch (choiceNum) {
                    case 1: {
                        string _name;
                        cout << "Введите название: ";
                        cin >> _name;
                        pDevice[num-1]->SetName(_name);
                    }break;
                    case 2: {
                        int _paramSpeed;
                        cout << "Введите скорость отклика/считывания: ";
                        cin >> _paramSpeed;
                        pDevice[num-1]->SetSpeedParam(_paramSpeed);
                    }break;
                    case 3: {
                        int _serviceLife;
                        cout << "Введите срок эксплуатации: ";
                        cin >> _serviceLife;
                        pDevice[num-1]->SetServiceLife(_serviceLife);
                    }break;
                    default: {
                        cout << "Введено неверное значение" << endl;
                    }
                }
            }break;
            case 4: {
                cout << "Завершение работы..." << endl;
            }
        }
    }
    return 0;
}