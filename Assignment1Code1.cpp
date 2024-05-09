#include <iostream>
#include <vector>
using namespace std;
struct Product {
    int id;
    string name;
    double price;
}P1;

std::vector<Product> inventory;

void addProduct(int id, string name, double price) {
    P1.id = id;
    P1.name = name;
    P1.price = price;
    inventory.push_back(P1);
}

void removeProduct(int id) {
    for (auto it = inventory.begin(); it != inventory.end(); ++it) {
        if (it->id == id) {
            inventory.erase(it);
            break;
        }
    }
}

void displayInventory() {
    cout << "Inventory:\n";
    for (const auto& product : inventory) {
        cout << "ID: " << product.id << ", Name: " << product.name << ", Price: " << product.price << "\n";
    }
}

int main() {
    addProduct(1, "Product 1", 10.99);
    addProduct(2, "Product 2", 19.99);
    addProduct(3, "Product 3", 5.99);

    displayInventory();

    removeProduct(2);

    displayInventory();

    return 0;
}
