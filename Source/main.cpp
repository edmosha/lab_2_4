#include "../Header/peripheral_device.h"
#include "../Header/keyboard.h"
#include "../Header/scanner.h"

int main() {
    while (choice != 6) {
        cout << "\n===============================================" << endl;
        cout << "*                    МЕНЮ                     *" << endl;
        cout << "===============================================" << endl;
        cout << "1. Поехать" << endl;
        cout << "2. Открыть двери" << endl;
        cout << "3. Закрыть двери" << endl;
        cout << "4. Проверить соответствие расписанию" << endl;
        cout << "5. Статус поезда" << endl;
        cout << "6. Завершить поездку" << endl;
        cin >> choice;
    return 0;
}
