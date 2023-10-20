#ifndef VENDINGMACHINE_H
#define VENDINGMACHINE_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class VendingMachine {
protected:  // private -> protected
    string products[20];    // ������ ��ȣ   
    int prices[20];         // ������ ����
    int stock[20];          // ���
    int numProducts;        // ������ ����
    int balance;            // �ܾ�
    string password = "DeptAI"; // ������ ��й�ȣ

public:
    VendingMachine() : numProducts(0), balance(0) {
        for (int i = 0; i < 20; ++i) {
            prices[i] = 0;
            stock[i] = 0;
        }
    }

    bool checkPassword(string _password) {  // ������ ��й�ȣ üũ
        if (password != _password) {
            cout << "������ ��й�ȣ�� �߸��Ǿ����ϴ�." << std::endl;
            return false;
        }

        return true;
    }

    void addProduct(const string& productName, int price, int initialStock, const string& _password) {  // ��ǰ �߰�
        if (!checkPassword(_password)) return;

        if (numProducts < 20) {
            products[numProducts] = productName;
            prices[numProducts] = price;
            stock[numProducts] = initialStock;
            numProducts++;
            cout << "��ǰ �߰�: " << productName << endl;
        }
        else {
            cout << "�� �̻� ��ǰ�� �߰��� �� �����ϴ�." << endl;
        }
    }

    void removeProduct(const string& productName, const string& _password) {    // ��ǰ ����
        if (!checkPassword(_password)) return;

        for (int i = 0; i < numProducts; ++i) {
            if (products[i] == productName) {
                for (int j = i; j < numProducts - 1; ++j) {
                    products[j] = products[j + 1];
                    prices[j] = prices[j + 1];
                    stock[j] = stock[j + 1];
                }
                numProducts--;
                cout << "��ǰ ����: " << productName << endl;
                return;
            }
        }
        cout << "��ǰ�� ã�� �� �����ϴ�." << endl;
    }

    void checkStock(const string& productName) {    
        for (int i = 0; i < numProducts; ++i) {
            if (products[i] == productName) {
                cout << "��� Ȯ��: " << products[i] << " - " << stock[i] << "��" << endl;
                return;
            }
        }
        cout << "��ǰ�� ã�� �� �����ϴ�." << endl;
    }

    void updateStock(const string& productName, int newStock, string _password) {
        if (!checkPassword(_password)) return;

        for (int i = 0; i < numProducts; ++i) {
            if (products[i] == productName) {
                stock[i] = newStock;
                cout << "��� ������Ʈ: " << products[i] << " - " << stock[i] << "��" << endl;
                return;
            }
        }
        cout << "��ǰ�� ã�� �� �����ϴ�." << endl;
    }

    void displayStock() {
        cout << right << setw(8) << "��ǰ��";
        for (int i = 0; i < numProducts; i++) {
            cout << setw(15) << products[i];
        }

        cout << endl << setw(8) << "����";
        for (int i = 0; i < numProducts; i++) {
            cout << setw(15) << prices[i];
        }

        cout << endl << setw(8) << "�Ǹ���";
        for (int i = 0; i < numProducts; i++) {
            cout << setw(15) << (stock[i] > 0 ? "O" : "X");
        }

        cout << endl << setw(8) << "���ð���";
        for (int i = 0; i < numProducts; i++) {
            cout << setw(15) << (stock[i] > 0 && balance >= prices[i] ? "O" : "X");
        }

        cout << endl;
    }

    void insertCoin(int amount) {
        balance += amount;
    }

    void returnChange() {
        int bal = balance;
        cout << endl << "�ܾ� " << balance << "���� ��ȯ�մϴ�." << endl;
        int weight[] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };
        int amount;
        for (int i = 0; i < 8; i++) {
            amount = bal / weight[i];
            bal %= weight[i];
            if (amount) {
                cout << weight[i] << "���� " << amount << "�� ��ȯ, ";
                cout << "�ܾ�: " << bal << "��" << endl;
            }
        }
        balance = 0;
        cout << "�ܾ� ��ȯ�� �Ϸ� �Ǿ����ϴ�." << endl << endl;
    }

    virtual void purchaseProduct() = 0;

    int getBalance() const {
        return balance;
    }
};
#endif // VENDINGMACHINE_H