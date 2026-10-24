#include <iostream>
#include <fstream>
#include <string> 
using namespace std; 
struct item {
    string name;
    int qty;
    double price;
};

int main () {
    ofstream outfile;
    outfile.open("inventory.txt", ios ::app); 
    if (!outfile.is_open()){
        cout <<"Error: cannot open" << endl;
        return 1;
    }

    outfile << "Notebook 50 25.5" << endl;
    outfile << "Pencil 200 5" << endl;
    outfile << "Eraser 80 7.25" << endl;
    outfile.close();

    string Name;
    int QTY;
    double PRICE; 
    cout << "Enter name qty price: "; 
    cin >> Name >> QTY >> PRICE; 
    
    ofstream file("inventory.txt", ios :: app);
    if(!file.is_open()){
        cout << "Error: cannot open for application" << endl; 
        return 1; 
    }
    file << Name << " " << QTY << " " << PRICE << endl; 
    file.close(); 

    ifstream infile("inventory.txt");
    if(!infile.is_open()){
        cout << "Enter: cannot open" << endl; 
        return 1; 
    }
    item ITEM; 
    double totalValue = 0.0; 
    while (infile >> ITEM.name >> ITEM.qty >> ITEM.price){
        cout << ITEM.name << " " << ITEM.qty << " " << ITEM.price << " " << endl;
        totalValue += (ITEM.qty * ITEM.price);
    }
    infile.close();
    cout << "Total Value " << totalValue << endl; 
    return 0; 
}