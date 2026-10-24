#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// 1. Define struct Item
struct Item {
    string name;
    int qty;
    double price;
};

int main() {
    // 2. Create inventory.txt with three starting items (using default mode)
    ofstream outfile("i.txt");
    if (!outfile.is_open()) {
        cout << "Error: cannot open file for writing" << endl;
        return 1;
    }

    outfile << "Notebook 50 25.5" << endl;
    outfile << "Pencil 200 5" << endl;
    outfile << "Eraser 80 7.25" << endl;
    outfile.close(); // Close stream

    // 3. Append one more item that the user types in
    string inputName;
    int inputQty;
    double inputPrice;

    cout << "Enter name qty price: ";
    cin >> inputName >> inputQty >> inputPrice;

    ofstream appfile("i.txt", ios::app);
    if (!appfile.is_open()) {
        cout << "Error: cannot open file for appending" << endl;
        return 1;
    }

    appfile << inputName << " " << inputQty << " " << inputPrice << endl;
    appfile.close(); // Close stream

    // 4. Read the whole file, print every item, and calculate the total value
    ifstream infile("i.txt");
    if (!infile.is_open()) {
        cout << "Error: cannot open file for reading" << endl;
        return 1;
    }

    Item currentItem;
    double totalValue = 0.0;

    // Read loop using while (in >> ...) instead of eof()
    while (infile >> currentItem.name >> currentItem.qty >> currentItem.price) {
        cout << currentItem.name << " " << currentItem.qty << " " << currentItem.price << endl;
        totalValue += (currentItem.qty * currentItem.price);
    }
    infile.close(); // Close stream

    // Print the total value
    cout << "Total value: " << totalValue << endl;

    return 0;
}

