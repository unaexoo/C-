//���� �ذ� ���� :
//���� �Լ�(virtual function)�� �Ļ� Ŭ�������� �������� ������ ����ϴ� ��� �Լ��� �ݵ�� �������ؾ߸� �ϴ� �Լ��� �ƴ� �����ǰ� ������ �Լ��� ����Ų��.
//���⼭ �ݵ�� �������ؾ� �ϴ� ��� �Լ��� ���� ���� �Լ�(pure virtual function)�̶�� �Ѵ�. �Լ��� ������ �����ϴ� ��ü�� ������ ���� �ʰ�, �Ļ� Ŭ�������� ���������� ������ ����� ���� ����.
//
//������ virtual ��� �Լ��� ���� = 0; �̶�� �ϰ� �ݵ�� �������̵� �Ǿ�߸� �ϴ� �Լ��� ���Ѵ�.��ü�� ���� ������ �Լ� ȣ���� �Ұ����ϴ�.
//�߻� Ŭ������ �ϳ� �̻��� ���� ���� �Լ��� �����ϴ� Ŭ������ ���Ѵ�.�ݵ�� ����Ǿ�� �ϴ� ��� �Լ��� �߻� Ŭ������ ���� ���� �Լ��� ������ ������ 
//�� Ŭ�����κ��� �Ļ��� ��� Ŭ���������� �� ���� �Լ��� �ݵ�� �������ؾ� �Ѵ�.�߻� Ŭ������ ������ ���ǵ��� ���� ���� ���� �Լ��� �����ϰ� �ֱ⿡ �ν��Ͻ��� ������ �� ����.
//���� ����� ���� �Ļ� Ŭ������ �����, ���� �Ļ� Ŭ�������� ���� ���� �Լ��� ��� �������̵� �ϰ� ������ �Ļ� Ŭ������ �ν��Ͻ��� ������ �� �ְ� �ȴ�.
//�߻� Ŭ���� Ÿ���� �����Ϳ� ������ �ٷ� ����� �� �ִ�. �ش� ������ VendingMachine�� ������ ��� �� purchaseProduct()�Լ��� virtual�� �����Լ��� �����Ѵ�.
//�׸��� �ش� �Լ��� ������ ClassicVM�� MultiVM Ŭ�������� ���ϴ� ������ �°� �ۼ��� �Ѵ�.ClassicVM�� ��� �Ϲ��� ���Ǳ��� ������ �ۼ��Ѵ�.
//������ ������ �� �ٷ� ��ȯ�� �Ǵ� ���·� �ۼ��Ͽ���.MultiVM�� ��� ��Ƽ ���Ǳ� �������� ��ư�� ������ �� Ȯ���� ������ ������ �ǸŰ� �̷������ �Ͽ���.

//VendingMachine: ���Ǳ�
//
//���Ǳ�� ������ ������� �԰�, ��ǰ ���� ���� �����ϰ� ����� ����� ȭ������, ��ǰ ����, �Ž����� ��ȯ ���� �����Ѵ�.
//���⼭ VendingMachine�� �� ����, ���ἱ��, ���� �Ǹ�& �Ž����� ��ȯ�Ѵ�.���⼭ ���� �Ǹ� �������� �ƴ���, ������ ������ üũ���� ������ ä�� �ִ´�.
//
//���⼭ VendingMachine�� �⺻���� ���Ǳ��� ����� �����Ѵ�.ClassicVM�� VendingMachine�� ��ӹް� VendingMachine�� ���� ���� �Լ��� purchaseProduct()�� �����Ѵ�.
//�� �Լ��� �����ϸ� �⺻���� ���Ǳ��� ����̰� �Ϲ����� ���Ǳ��� �Ǹ� �����̴�.
//
//MultiVM�� ��� ��ǰ�� ���̾� ������ ��ȣ�� ������ Ȯ���� üũ�ؾ� ��ǰ �ǸŰ� �Ϸ�ȴ�.ClassicVM�� �Ǹſ��� ���̰� �ֱ⿡ purchaseProduct()�� ���� �������ش�.
//���⼭�� ������ �ڵ忡���� ���¿� �ٸ��� do - while ()���� ����Ͽ� Ȯ�� ��ư�� ���� ������ ��ǰ �ǸŸ� ����ϴµ� ���⼭ minprice�� check ������ ���� �ܾ��� �Ǹ� ���� ��ǰ �� �ּҰ����� 
//�۴ٸ� �ǸŰ� �Ұ����ϰ� �ƴ϶�� ����ڰ� ��ǰ ���Ÿ� �Ϸ��� ������ �����Ѵ�.
//
//ButtonVM��  �־��� interface GUI�� �������� �ۼ��Ͽ���.���������� purchaseProduct() �Լ��� �������ִµ� MultiVm�� ���ǵ� ����� ����ϰ� ������ �Ͽ���.
//�׸��� UI Ŭ������ �����Ͽ� ��ư�� ������ �����ϰ� ���־���.UI Ŭ������ ��� ������ Button* button1 - 9���� �����صξ��� �ش� ��ư�� Ŭ���Ͽ��� �� ��ǰ ���Ÿ� ǥ���ϵ��� �ۼ��Ͽ���.

// Main�������� switch-case�� �����ϰ� ���� �ִ� ��¹����� case4�� ��ǰ���� �κи� do-while���� ���ؼ� button�� ������ �ݺ��ϰ� ���־���.
#include "VendingMachine.h"
#include"ClassicVM.h"
#include"MultiVM.h"
#include"ButtonVM.h"
//VendingMachine* vm;
int main() {
    VendingMachine* vm = new ButtonVM();
    EventQueue& eve = EventQueue::getInstance();
    UI ui;
    int inp = 0;
    int selection; 
    vm->addProduct("��ī�ݶ�", 1000, 10, "DeptAI");
    vm->addProduct("��ī�ݶ�zero", 1100, 5, "DeptAI");
    vm->addProduct("��ټ�", 800, 8, "DeptAI");
    do {
        // Display stock of each product
        cout << "========= ��ǰ ��� =========" << std::endl;
        vm->displayStock();
        cout << "===============================" << std::endl;

        cout << "========= ���Ǳ� �޴� =========" << std::endl;
        cout << "1. ��ǰ �߰�" << endl;
        cout << "2. ��ǰ ����" << endl;
        cout << "3. �԰�" << endl;
        cout << "4. ��ǰ ����" << endl;
        cout << "5. �ݾ� ����" << endl;
        cout << "6. �ܾ� ��ȯ" << endl;
        cout << "7. ����" << endl;
        cout << "===============================" << std::endl;
        cout << "�ܾ�: " << vm->getBalance() << endl;
        cout << "����: ";
        cin >> selection;
        cin.ignore(); // Ignore the newline character

        string enteredPassword;

        switch (selection) {
        case 1: {
            string productName;
            int price;
            int initialStock;
            cout << "��ǰ �̸�: ";
            getline(cin, productName);
            cout << "��ǰ ����: ";
            cin >> price;
            cout << "�ʱ� ���: ";
            cin >> initialStock;
            cin.ignore(); // Ignore the newline character

            cout << "������ ��й�ȣ: ";
            getline(cin, enteredPassword);

            vm->addProduct(productName, price, initialStock, enteredPassword);
            break;
        }
        case 2: {
            string productName;
            cout << "������ ��ǰ �̸�: ";
            getline(cin, productName);

            cout << "������ ��й�ȣ: ";
            getline(cin, enteredPassword);

            vm->removeProduct(productName, enteredPassword);
            break;
        }
        case 3: {
            string productName;
            int additionalStock;
            cout << "�԰��� ��ǰ �̸�: ";
            getline(cin, productName);
            cout << "�߰��� ���: ";
            cin >> additionalStock;
            cin.ignore(); // Ignore the newline character

            cout << "������ ��й�ȣ: ";
            getline(cin, enteredPassword);

            vm->updateStock(productName, additionalStock, enteredPassword);
            break;
        }
        case 4: {
            do {
                vm->purchaseProduct();

                while (cin >> skipws >> inp && inp > 0) {
                    vm->purchaseProduct();
                    cout << "(0: �̺�Ʈ �Է� ����, -1: ���α׷� ����) >> ";
                    ui.click(inp);
                }

                eve.exeEvent();
                cout << endl;
            } while (inp > -1);

            eve.releaseInstance();
            break;
        }
        case 5: {
            int amount;
            cout << "������ �ݾ�: ";
            cin >> amount;
            cin.ignore(); // Ignore the newline character
            vm->insertCoin(amount);
            break;
        }
        case 6: {
            vm->returnChange();
            break;
        }
        case 7:
            break;
        }

        system("pause");

    } while (selection != 7);
    //cout << "choice : " << "1. ClassicVM\t" << "2.MultiVM" << endl;
    //int choice = 0;
    //cin >> choice;

    //if (choice == 1) {
    //   vm = new ClassicVM();
    //}
    //else if (choice == 2) {
    //    vm = new MultiVM();
    //}
    //else {
    //    cout << "��ǰ ���� �� ��" << endl;
    //    exit(1);
    //}

    //int selection;

    //vm->addProduct("��ī�ݶ�", 1000, 10, "DeptAI");
    //vm->addProduct("��ī�ݶ�zero", 1100, 5, "DeptAI");
    //vm->addProduct("��ټ�", 800, 8, "DeptAI");
    //do {
    //    // Display stock of each product
    //    cout << "========= ��ǰ ��� =========" << std::endl;
    //    vm->displayStock();
    //    cout << "===============================" << std::endl;

    //    cout << "========= ���Ǳ� �޴� =========" << std::endl;
    //    cout << "1. ��ǰ �߰�" << endl;
    //    cout << "2. ��ǰ ����" << endl;
    //    cout << "3. �԰�" << endl;
    //    cout << "4. ��ǰ ����" << endl;
    //    cout << "5. �ݾ� ����" << endl;
    //    cout << "6. �ܾ� ��ȯ" << endl;
    //    cout << "7. ����" << endl;
    //    cout << "===============================" << std::endl;
    //    cout << "�ܾ�: " << vm->getBalance() << endl;
    //    cout << "����: ";
    //    cin >> selection;
    //    cin.ignore(); // Ignore the newline character

    //    string enteredPassword;

    //    switch (selection) {
    //    case 1: {
    //        string productName;
    //        int price;
    //        int initialStock;
    //        cout << "��ǰ �̸�: ";
    //        getline(cin, productName);
    //        cout << "��ǰ ����: ";
    //        cin >> price;
    //        cout << "�ʱ� ���: ";
    //        cin >> initialStock;
    //        cin.ignore(); // Ignore the newline character

    //        cout << "������ ��й�ȣ: ";
    //        getline(cin, enteredPassword);

    //        vm->addProduct(productName, price, initialStock, enteredPassword);
    //        break;
    //    }
    //    case 2: {
    //        string productName;
    //        cout << "������ ��ǰ �̸�: ";
    //        getline(cin, productName);

    //        cout << "������ ��й�ȣ: ";
    //        getline(cin, enteredPassword);

    //        vm->removeProduct(productName, enteredPassword);
    //        break;
    //    }
    //    case 3: {
    //        string productName;
    //        int additionalStock;
    //        cout << "�԰��� ��ǰ �̸�: ";
    //        getline(cin, productName);
    //        cout << "�߰��� ���: ";
    //        cin >> additionalStock;
    //        cin.ignore(); // Ignore the newline character

    //        cout << "������ ��й�ȣ: ";
    //        getline(cin, enteredPassword);

    //        vm->updateStock(productName, additionalStock, enteredPassword);
    //        break;
    //    }
    //    case 4: {
    //        vm->purchaseProduct();
    //        break;
    //    }
    //    case 5: {
    //        int amount;
    //        cout << "������ �ݾ�: ";
    //        cin >> amount;
    //        cin.ignore(); // Ignore the newline character
    //        vm->insertCoin(amount);
    //        break;
    //    }
    //    case 6: {
    //        vm->returnChange();
    //        break;
    //    }
    //    case 7:
    //        break;
    //    }

    //    system("pause");

    //} while (selection != 7);

    //int selection;
    //button->addProduct("��ī�ݶ�", 1000, 10, "DeptAI");
    //button->addProduct("��ī�ݶ�zero", 1100, 5, "DeptAI");
    //button->addProduct("��ټ�", 800, 8, "DeptAI");
    //do {
    //    cout << "========= ��ǰ ��� =========" << std::endl;
    //    button->displayStock();
    //    cout << "===============================" << std::endl;

    //    cout << "========= ���Ǳ� �޴� =========" << std::endl;
    //    cout << "1. ��ǰ �߰�" << endl;
    //    cout << "2. ��ǰ ����" << endl;
    //    cout << "3. �԰�" << endl;
    //    cout << "4. ��ǰ ����" << endl;
    //    cout << "5. �ݾ� ����" << endl;
    //    cout << "6. �ܾ� ��ȯ" << endl;
    //    cout << "7. ����" << endl;
    //    cout << "===============================" << std::endl;
    //    cout << "�ܾ�: " << vm->getBalance() << endl;
    //    cout << "����: ";
    //    cin >> selection;
    //    cin.ignore(); // Ignore the newline character

    //    string enteredPassword;

    //    switch (selection) {
    //    case 1: {
    //        string productName;
    //        int price;
    //        int initialStock;
    //        cout << "��ǰ �̸�: ";
    //        getline(cin, productName);
    //        cout << "��ǰ ����: ";
    //        cin >> price;
    //        cout << "�ʱ� ���: ";
    //        cin >> initialStock;
    //        cin.ignore(); // Ignore the newline character

    //        cout << "������ ��й�ȣ: ";
    //        getline(cin, enteredPassword);

    //        button->addProduct(productName, price, initialStock, enteredPassword);
    //        break;
    //    }
    //    case 2: {
    //        string productName;
    //        cout << "������ ��ǰ �̸�: ";
    //        getline(cin, productName);

    //        cout << "������ ��й�ȣ: ";
    //        getline(cin, enteredPassword);

    //        button->removeProduct(productName, enteredPassword);
    //        break;
    //    }
    //    case 3: {
    //        string productName;
    //        int additionalStock;
    //        cout << "�԰��� ��ǰ �̸�: ";
    //        getline(cin, productName);
    //        cout << "�߰��� ���: ";
    //        cin >> additionalStock;
    //        cin.ignore(); // Ignore the newline character

    //        cout << "������ ��й�ȣ: ";
    //        getline(cin, enteredPassword);

    //        button->updateStock(productName, additionalStock, enteredPassword);
    //        break;
    //    }
    //    case 4: {
    //        button->purchaseProduct();
    //        break;
    //    }
    //    case 5: {
    //        int amount;
    //        cout << "������ �ݾ�: ";
    //        cin >> amount;
    //        cin.ignore(); // Ignore the newline character
    //        button->insertCoin(amount);
    //        break;
    //    }
    //    case 6: {
    //        button->returnChange();
    //        break;
    //    }
    //    case 7:
    //        break;
    //    }

    //    system("pause");

    //} while (selection != 7);

    //delete vm;
   // delete button;
    return 0;
}