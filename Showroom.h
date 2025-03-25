#pragma once
#ifndef SHOWROOM_H
#define SHOWROOM_H

#include <iostream>
#include <string>
using namespace std;

class ShowRoom {
	string Name_of_showroom;
	string Address;
	int contact_number;
	string email;
	int sales_tax_registration_number;
public:
	//ShowRoom();
	ShowRoom(string, string, int, string, int);
	void display() {
		cout << "*******************************************************";
		cout << "Name of Showroom: "<<"*****************" << Name_of_showroom << endl;
		cout << "Address: " << "*****************" << Address << endl;
		cout << "Contact Number: " << "*****************" << contact_number << endl;
		cout << "Email: " << "*****************" << email << endl;
		cout << "Sales Tax Registration Number: " << "*****************" << sales_tax_registration_number << endl;
		cout << "*******************************************************";
	}
	};
ShowRoom::ShowRoom(string name, string address, int contact, string email, int sale_tax) {
	Name_of_showroom = name;
	Address = address;
	contact_number = contact;
	email = email;
	sales_tax_registration_number = sale_tax;

}

#endif 