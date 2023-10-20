#ifndef CLASSICVM_H
#define CLASSICVM_H

#include <iostream>
#include <iomanip>
#include <string>
#include"VendingMachine.h"

using namespace std;
// ClassicVM : VendingMachine�� ���� �����Ǿ� �ִ� purchaseProduct()�Լ��� �����־���. �Ϲ��� ������ ��ǰ���Ÿ� �������ش�.
class ClassicVM : public VendingMachine {
public:
    ClassicVM() :VendingMachine(){}
    void purchaseProduct() override {
        cout << "========= ���� ������ ��ǰ =========" << endl;
        cout << right << setw(4) << "��ȣ";
        cout << setw(20) << "��ǰ��";
        cout << setw(20) << "����" << endl;
        for (int i = 0; i < numProducts; i++) {
            if (stock[i] > 0 && balance >= prices[i]) {
                cout << setw(4) << (i + 1);
                cout << setw(20) << products[i];
                cout << setw(20) << prices[i] << endl;
            }
        }
        cout << "===================================" << endl;

        cout << "������ ��ǰ ��ȣ�� �����ϼ��� (�ڷ� ������ 0 �Է�): ";
        int selection;
        cin >> selection;
        cin.ignore(); // Ignore the newline character

        if (selection == 0) {
            cout << "���Ÿ� ����մϴ�." << endl;
            return;
        }

        if (selection < 1 || selection > numProducts) {
            cout << "��ȿ���� ���� ��ǰ ��ȣ�Դϴ�." << endl;
            return;
        }

        int productIndex = selection - 1;
        if (stock[productIndex] == 0) {
            cout << "�ش� ��ǰ�� ��� �����ϴ�." << endl;
            return;
        }

        if (balance < prices[productIndex]) {
            cout << "�ܾ��� �����Ͽ� �ش� ��ǰ�� ������ �� �����ϴ�." << endl;
            return;
        }

        // Perform the purchase
        cout << "��ǰ ���� �Ϸ�: " << products[productIndex] << endl;
        balance -= prices[productIndex];
        stock[productIndex]--;
    }
};

#endif // VENDINGMACHINE_H#pragma once
