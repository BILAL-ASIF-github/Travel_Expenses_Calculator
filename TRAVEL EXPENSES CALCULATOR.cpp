#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << ":::::::::::::::::::::::::::::::::::::::::::::: TRAVEL EXPENSES CALCULATOR ::::::::::::::::::::::::::::::::::::::::::::::" << endl;

    string n;
    cout << " HELLO THERE!" << endl << " KINDLY WRITE UP YOUR NAME : ";
    cin >> n;

    cout << endl << "::::::::::::::::::::::::::::::::::::::::::::: LETS CALCULATE YOUR EXPENSES :::::::::::::::::::::::::::::::::::::::::::::" << endl;

    lab1:
    cout << " SO " << n << ", HOW MANY DAYS HAVE YOU SPENT IN TOTAL : ";
    int days, departure, arrival;
    cin >> days;
    if (days < 0) {
        cout << " WRONG INPUT :(";
        goto lab1;
    }

    lab2:
    cout << endl << " WHAT WAS YOUR DEPARTURE TIME (24 HOURS FORMAT) :";
    cin >> departure;
    if (departure < 0 || departure > 24) {
        cout << " WRONG INPUT :(";
        goto lab2;
    }

    lab3:
    cout << " WHAT WAS YOUR ARRIVAL TIME (24 HOURS FORMAT) :";
    cin >> arrival;
    if (arrival < 0 || arrival > 24) {
        cout << " WRONG INPUT :(";
        goto lab3;
    }

    label1:
    cout << endl << " HAVE YOU PAID ANY AIRFARE IN YOUR WHOLE TRIP (Y/N) : ";
    char a1, a2, a3;
    double airfare = 0, carfare = 0, prvcar = 0, parkfees = 0, taxifare = 0, seminarfee = 0, hotelcharges = 0;
    cin >> a1;
    if (a1 == 'Y' || a1 == 'y') {
        cout << " KINDLY ENTER ITS AMOUNT : ";
        cin >> airfare;
    } else if (a1 == 'n' || a1 == 'N') {
        cout << " OKAY, THAT'S GREAT!" << endl;
        airfare=0;
    } else {
        cout << " WRONG INPUT";
        goto label1;
    }

    label2:
    cout << " HAVE YOU RENTED ANY CAR IN YOUR TRIP (Y/N) : ";
    cin >> a2;
    if (a2 == 'Y' || a2 == 'y') {
        cout << " KINDLY ENTER ITS TOTAL RENT FARE : ";
        cin >> carfare;
    } else if (a2 == 'n' || a2 == 'N') {
        cout << " OKAY, THAT'S GREAT!" << endl;
        carfare=0;
    } else {
        cout << " WRONG INPUT";
        goto label2;
    }

    label3:
    cout << " HAVE YOU USED ANY PRIVATE CAR IN YOUR TRIP (Y/N) : ";
    cin >> a3;
    if (a3 == 'Y' || a3 == 'y') {
        cout << " KINDLY ENTER THE TOTAL MILES DRIVEN ON IT : ";
        cin >> prvcar;
    } else if (a3 == 'n' || a3 == 'N') {
        cout << " OKAY, THAT'S GREAT!" << endl;
        prvcar=0;
    } else {
        cout << " WRONG INPUT";
        goto label3;
    }

    cout << endl << "::::::::::::::::::::::::::::::::::::::::::::::::::::: SIDE EXPENSES ::::::::::::::::::::::::::::::::::::::::::::::::::::";
    cout << endl << " YOUR TOTAL PARKING FEES PER DAY : ";
    cin >> parkfees;
    cout << " YOUR TOTAL TAXI FARE PER DAY : ";
    cin >> taxifare;
    cout << " ANY CONFERENCE OR SEMINAR FEES : ";
    cin >> seminarfee;

    cout << endl << ":::::::::::::::::::::::::::::::::::::::::::::::::::: HOTELING AND FOOD :::::::::::::::::::::::::::::::::::::::::::::::::";
    cout << endl << " SO " << n << ", HOW MUCH HAVE YOU PAID EACH DAY FOR THE HOTEL : ";
    cin >> hotelcharges;
    cout << " HOW MUCH HAVE YOU PAID PER DAY FOR YOUR BREAKFAST : ";
    int breakfast, lunch, dinner;
    cin >> breakfast;
    cout << " HOW MUCH HAVE YOU PAID PER DAY FOR YOUR LUNCH : ";
    cin >> lunch;
    cout << " HOW MUCH HAVE YOU PAID PER DAY FOR YOUR DINNER : ";
    cin >> dinner;

    cout << endl << "                                                        THANK YOU :)                                                     ";
    system("CLS");
    cout <<endl<< "::::::::::::::::::::::::::::::::::::::::::::::::::::: FINAL RECIEPT ::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    cout <<" "<<n<<", YOUR FINAL RECIEPT IS HERE!"<<endl;
    cout<<endl<<" TOTAL AIRFARE : "<<airfare<<"$";
    cout<<endl<<" TOTAL CARFARE : "<<carfare<<"$";
    double prvcarexpenses;
    prvcarexpenses=prvcar*0.27;
    cout<<endl<<" PRIVATE CAR EXPENSES : "<<prvcarexpenses<<"$";
    double payableparkingfee=(parkfees*days)-(days*6);
    cout<<endl<<" TOTAL PARKING FEES FOR ALL DAYS : "<<payableparkingfee<<"$";
    double totaltaxifare=taxifare*days;
    cout<<endl<<" TOTAL TAXI FARE FOR ALL DAYS : "<<totaltaxifare<<"$";
    cout<<endl<<" TOTAL CONFERENCE OR SEMINAR FEES : "<<seminarfee<<"$";
    double totalhotelfare=hotelcharges*days;
    cout<<endl<<" TOTAL HOTEL CHARGES FOR WHOLE TRIP : "<<totalhotelfare<<"$";
    double totalbreakfastexpense=breakfast*days;
    cout<<endl<<" TOTAL BREAKFAST CHARGES : "<<totalbreakfastexpense<<"$";
    double totallunchexpense=lunch*days;
    cout<<endl<<" TOTAL LUNCH CHARGES : "<<totallunchexpense<<"$";
    double totaldinnerexpense=dinner*days;
    cout<<endl<<" TOTAL DINNER CHARGES : "<<totaldinnerexpense<<"$"<<endl;
    cout << endl << ":::::::::::::::::::::::::::::::::::::::::::::::::::::: TOTALS :::::::::::::::::::::::::::::::::::::::::::::::::::";
    double totals=totaldinnerexpense+totallunchexpense+totalbreakfastexpense+totalhotelfare+seminarfee+totaltaxifare+payableparkingfee+prvcarexpenses+airfare+carfare;
    cout<<endl<<" DEAR "<<n<<",";
    cout<<endl<<" YOUR FINAL EXPENSES FOR THIS WHOLE TRIP ARE "<<totals<<"$";   
    if (parkfees<=6)
    {
    	payableparkingfee=0;
    }
    else
    {
    	payableparkingfee=payableparkingfee-days*6;
    }
    
     if (taxifare<=10)
    {
    	totaltaxifare=0;
    }
    else
    {
    	totaltaxifare=totaltaxifare-days*10;
    }
    if (hotelcharges<=90)
    {
    	totalhotelfare=0;
    }
    else
    {
    	totalhotelfare=totalhotelfare-days*90;
    }
    if(breakfast<=9)
    {
    	totalbreakfastexpense=0;
    }
    else
    {
    	totalbreakfastexpense=totalbreakfastexpense-days*9;
    }
     if(lunch<=12)
    {
    	totallunchexpense=0;
    }
    else
    {
    	totallunchexpense=totallunchexpense-days*12;
    }
     if(dinner<=16)
    {
    	totaldinnerexpense=0;
    }
    else
    {
    	totaldinnerexpense=totaldinnerexpense-days*16;
    }
       double payabletotal=totaldinnerexpense+totallunchexpense+totalbreakfastexpense+totalhotelfare+seminarfee+totaltaxifare+payableparkingfee+prvcarexpenses+airfare+carfare;
    cout<<endl<<" AFTER ALL THE CALCULATIONS AND COMPANY ALLOWANCES YOUR PAYABLE AMOUNT IS : "<<payabletotal<<"$";   
}

