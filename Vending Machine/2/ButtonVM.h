#ifndef BUTTONVM_H
#define BUTTONVM_H
#include<deque>
#include<string>
#include<iomanip>
#include "VendingMachine.h"

// InterfaceGUI ������ �����Ͽ� �ۼ��Ͽ���. Button Ŭ������ Button* button 1���� 9������ ��ư�� �������־��� �ش� ��ư�� �Է��Ͽ���. ��ư�� �Է��� �޾Ƽ� ������ �Ǹ����ش�. 
// ���⼭ MultiVM�� purchaseProduct()�� �Լ��� �����ϱ� �Ͽ����� do - while���� ���ְ� �����Ͽ���. ui.click(-)�� ���ؼ� ���ϴ� ������ �Ҵ�� button�� Ŭ���Ͽ� ���� �ǸŸ� ���ش�.
// �������� instance�� EventQueue�� ���ǵǾ� �ְ� Queue�� ���� ������ ������� �̷������.
// button�� �Է��� ui.click()�� ���� �����Ѵ�. button���� �� ��ȣ�� ���� ���� ������ ���� "0001"ó�� new Button("0001")�� ���� �Ҵ����ش�. EventQueue�� ���ؼ� button�� �Է°� ����� �������ش�.
// main������ EventQueue�� ������ ������ List�׸� ���� �����ش�.

class ButtonListenable {
public:
	virtual void onButtonClick(string eid) const = 0;
	virtual ~ButtonListenable() {}
};
class EventQueue {
public:
	static EventQueue& getInstance() {
		if (instance == nullptr) {
			instance = new EventQueue();
		}
		return *instance;
	}

	static void releaseInstance() {
		if (instance != nullptr) {
			delete instance;
			instance = nullptr;
		}
	}

	void addEvent(string id) {
		eve.push_back(id);
	}
	void addListener(ButtonListenable* lsn, string type_id) {
		lsner_type_id.push_back(type_id);
		lsner.push_back(lsn);
	}

	void exeEvent() {
		cout << "Event List in EventQueue: ";
		for (string e : eve) {
			cout << e << ", ";
		}
		cout << endl;

		while (!eve.empty()) {
			string eve_id = *(eve.begin());
			deque<ButtonListenable*>::iterator lsn_it = lsner.begin();
			for (deque<string>::iterator it = lsner_type_id.begin(); it != lsner_type_id.end(); it++) {
				if (eve_id == *it) {
					(*lsn_it)->onButtonClick(eve_id);
					eve.pop_front();
					break;
				}
				lsn_it++;
			}
		}
	}

private:
	EventQueue() {}
	~EventQueue() {}

	static EventQueue* instance;

private:
	deque<string> eve;

	deque<string> lsner_type_id;
	deque<ButtonListenable*> lsner;
};

EventQueue* EventQueue::instance = nullptr;


class Button {
private:
	string id;
	EventQueue& eve;

public:
	Button(string _id) : id(_id), eve(EventQueue::getInstance()) {}

	void addClickListener(ButtonListenable* lsner) {
		eve.addListener(lsner, "Button" + id);
	}

	void buttonClick() const {
		eve.addEvent("Button" + id);
	}

	string getId() {
		return id;
	}
};
class UI : public ButtonListenable {
public:
	UI() {
		button1 = new Button("0001");
		button2 = new Button("0002");
		button3 = new Button("0003");
		button4 = new Button("0004");
		button5 = new Button("0005");
		button6 = new Button("0006");
		button7 = new Button("0007");
		button8 = new Button("0008");
		button9 = new Button("0009");

		button1->addClickListener(this);
		button2->addClickListener(this);
		button3->addClickListener(this);
		button4->addClickListener(this);
		button5->addClickListener(this);
		button6->addClickListener(this);
		button7->addClickListener(this);
		button8->addClickListener(this);
		button9->addClickListener(this);
	}

	~UI() {
		delete button1;
		delete button2;
		delete button3;
		delete button4;
		delete button5;
		delete button6;
		delete button7;
		delete button8;
		delete button9;

	}
	void onButtonClick(string eid) const override {
		string btn_id = eid.substr(6);
		if (btn_id == "00001") {
			cout << "1��° ��ǰ ����" << endl;
		}
		else if (btn_id == "00002") {
			cout << "2��° ��ǰ ����" << endl;
		}
		else if (btn_id == "00003") {
			cout << "3��° ��ǰ ����" << endl;
		}
		else if (btn_id == "0004") {
			cout << "4��° ��ǰ ����" << endl;
		}
		else if (btn_id == "0005") {
			cout << "5��° ��ǰ ����" << endl;
		}
		else if (btn_id == "0006") {
			cout << "6��° ��ǰ ����" << endl;
		}
		else if (btn_id == "0007") {
			cout << "7��° ��ǰ ����" << endl;
		}
		else if (btn_id == "0008") {
			cout << "8��° ��ǰ ����" << endl;
		}
		else if (btn_id == "0009") {
			cout << "9��° ��ǰ ����" << endl;
		}
		else if (btn_id == "0010") {
			cout << "Ȯ��" << endl;
		}
		
	}
	void click(int inp) {
		switch (inp) {
		case 1:
			button1->buttonClick();
			break;
		case 2:
			button2->buttonClick();
			break;
		case 3:
			button3->buttonClick();
			break;
		case 4:
			button4->buttonClick();
			break;
		case 5:
			button5->buttonClick();
			break;
		case 6:
			button6->buttonClick();
			break;
		case 7:
			button7->buttonClick();
			break;
		case 8:
			button8->buttonClick();
			break;
		case 9:
			button9->buttonClick();
			break;
		}
	}

private:
	Button* button1;
	Button* button2;
	Button* button3;
	Button* button4;
	Button* button5;
	Button* button6;
	Button* button7;
	Button* button8;
	Button* button9;
};


class ButtonVM : public VendingMachine {
public:
	ButtonVM() :VendingMachine() {}

	void purchaseProduct() override {
		int minprice = INT_MAX;
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
		ui.click(selection);

		cout << "���Ǳ� �޴��� ���ư��� (inp -1 �Է�)" << endl;
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
		}
	}

private:
	UI ui;
};



#endif // BUTTONVM_H