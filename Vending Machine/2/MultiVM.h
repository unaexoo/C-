#ifndef MULTIVM_H
#define MULTIVM_H

#include "VendingMachine.h"

// MultVM : VendingMachine�� ��ӹ޾Ƽ� purchaseProduct()�� �����Լ��� �������־���. int check ������ do-while���� ��� �ݺ������� Ȯ���ϴµ� ������ ���Ÿ� ����� �������� Ȯ�� ��ư�� �̹��̴�.
//          int minprice = INT_MAX�� �ʱ�ȭ ���ְ� minprice�� ���� �ִ� ��ǰ�� �ּҰ��� �����Ͽ� ��ǰ�� ����ؼ� ������ �� �ִ��� ���θ� üũ�Ѵ�. ���� ���� ȭ�鿡 ����Ͽ� ��ǰ�� �� �� �ִ� ������ 
//          ��Ÿ���ش�. ��ǰ�� �� �̻� �������� ���Ѵٸ� break�� ���ش�.
class MultiVM : public VendingMachine {
public:
	MultiVM() : VendingMachine(){}
    void purchaseProduct() override {
        int check = 0;
        int minprice = INT_MAX;
        do {
            cout << "========= ���� ������ ��ǰ =========" << endl;
            cout << right << setw(4) << "��ȣ";
            cout << setw(20) << "��ǰ��";
            cout << setw(20) << "����" << endl;
            for (int i = 0; i < numProducts; i++) {
                if (stock[i] > 0 && balance >= prices[i]) {
                    cout << setw(4) << (i + 1);
                    cout << setw(20) << products[i];
                    cout << setw(20) << prices[i] << endl;

                    if (prices[i] < minprice) {
                        minprice = prices[i];
                    }
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

            cout << "===================================" << endl;
            cout << "���� �� : " << balance << endl;
            cout << "===================================" << endl;
            if (balance < minprice) {
                cout << "��ǰ�� �� �̻� ������ �� �����ϴ�." << endl;
                break;
            }

            cout << "����ؼ� ��ǰ�� �����Ͻðڽ��ϱ�? (��: 0, �ƴϿ�: 1): ";
            cin >> check;
            cin.ignore(); // Ignore the newline character

        } while (check != 1);
    }

};

#endif