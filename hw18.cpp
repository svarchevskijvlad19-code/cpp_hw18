#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct Product {
    string name;
    double price;
};

Product products[5];

// Заповнення товарів
void init_price() {
    products[0] = { "Product 1", 100.50 };
    products[1] = { "Product 2", 200.00 };
    products[2] = { "Product 3", 150.75 };
    products[3] = { "Product 4", 300.25 };
    products[4] = { "Product 5", 500.00 };
}

// Виведення товарів сторінками по 2
void show_price() {
    const int pageSize = 2;

    for (int i = 0; i < 5; i++) {
        cout << products[i].name
            << " - " << products[i].price << " грн" << endl;

        // Після кожних 2 товарів чекаємо натискання клавіші
        if ((i + 1) % pageSize == 0 && i != 4) {
            cout << "\n> Press a key to continue...";
            _getch();
            cout << "\n\n";
        }
    }
}

int main() {
    init_price();
    show_price();

    return 0;
}
