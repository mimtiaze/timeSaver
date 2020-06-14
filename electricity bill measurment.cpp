#include<iostream>

using namespace std;


double calculateBill(double unitPrice, int unit, int segSize, int seg){
    int remUnit = unit - segSize;
    if(unit >= segSize) unit = segSize;
    else remUnit = 0;


    double tempBill = unitPrice * unit;
    cout << "  " << seg << "\t   " << unitPrice << "\t\t    " << unit << "\t\t" << tempBill << "\t\t" << remUnit << endl;

    return tempBill;
}

int main(){

    int unit;
    cout << "Total unit consumed: ";
    cin >> unit;

    double bill = 0;
    double seg[] = {75, 125, 100, 100};
    double segPrice[] = {4.19, 5.72, 6.00, 6.34};
    int segCount = 4;

    cout << endl;
    cout << "Segment  |  Unit Price  |  Unit Count  |  Bill  |  Remaining Unit" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    for (int i=0; i < segCount; i++) {
        if(unit > 0) {
            bill += calculateBill(segPrice[i], unit, seg[i], i+1);
            unit -= seg[i];
        }
    }


    cout << endl << endl;
    cout << "Total unit Bill: " << bill << endl;
    cout << "Demand charge: " << 120 << endl;
    bill += 120;
    cout << "VAT (5.00%%): " << bill*0.05 << endl;
    bill+=bill*0.05;
    cout << "Total bill: " << bill << endl;

    return 0;
}
