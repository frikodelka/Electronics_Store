// Module 6, Yurkina Marya

#include "IElectronics.h"
#include "Device.h"
#include "Appliances.h"
#include "Accessories.h"
#include "Headphones.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

    IElectronics* electronics[10];

    electronics[0] = new Player(5, 1000);
    electronics[1] = new Smart(100, 128, 2);
    electronics[2] = new Camera(10, 15);
    electronics[3] = new Laptop(50, 11.6);
    electronics[4] = new Washing(30, 6);
    electronics[5] = new Vacuum(3, 500);
    electronics[6] = new DishWasher(40, 5);
    electronics[7] = new Microwave(15, 800);
    electronics[8] = new Headphones(2, string("Plastic"), string("Bluetooth"));
    electronics[9] = new Cases(string("Silicone"), string("Green"));

    bool open = true;
    while (open)
    {
        cout << "\nChoose a product:\n 1 - Player,\n 2 - Smart,\n 3 - Camera,\n 4 - Laptop, \n 5 - Washing,\n 6 - Vacuum,\n 7 - Dishwasher,\n 8 - Micriwave, \n 9 - Headphones,\n 10 - Cases,\n 0 - Exit\n" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            electronics[0]->ShowSpec();
            break;

        case 2:
            electronics[1]->ShowSpec();
            break;

        case 3:
            electronics[2]->ShowSpec();
            break;

        case 4:
            electronics[3]->ShowSpec();
            break;

        case 5:
            electronics[4]->ShowSpec();
            break;

        case 6:
            electronics[5]->ShowSpec();
            break;

        case 7:
            electronics[6]->ShowSpec();
            break;

        case 8:
            electronics[7]->ShowSpec();
            break;

        case 9:
            electronics[8]->ShowSpec();
            break;

        case 10:
            electronics[9]->ShowSpec();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Select a product from 1 to 10 or 0 to exit" << endl;
            break;
        }
    }

    delete electronics[0];
    delete electronics[1];
    delete electronics[2];
    delete electronics[3];
    delete electronics[4];
    delete electronics[5];
    delete electronics[6];
    delete electronics[7];
    delete electronics[8];
    delete electronics[9];

	return 0;
}