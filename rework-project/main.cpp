#include <iostream>
using namespace std ;
main()
{
    int mainTrans, mainIDX = 25,
    subIDX,
    pizzaFlavor, pizzaSize,
    orderA1, orderA2, orderA3, orderA4, orderA5,
    orderB1, orderB2, orderB3, orderB4, orderB5,
    orderC1, orderC2, orderC3, orderC4, orderC5,
    orderD1, orderD2, orderD3, orderD4, orderD5,
    orderE1, orderE2, orderE3, orderE4, orderE5 ;

    // Total price, amount paid by the customer, change
    float totalPrice = 0, paid = 0, change = 0 ;

    // Main Menu with Loop
    while (mainIDX >= 0)
    {
    cout
    << "Pizza Store" << endl
    << "1. Pizza" << endl
    << "2. Drinks" << endl
    << "3. Pasta" << endl
    << "4. Snack" << endl
    << "5. Desert" << endl
    << "0. End Transaction" << endl
    << "\nEnter a number accordingly to the menu above: ";
    cin >> mainTrans ;
    mainIDX-- ;
    subIDX = 1 ;

        // Begin loop for Sub Menu
        while (subIDX >= 0)
        {
            // Begin Nested Switch for Sub Menu
            switch (mainTrans)
            {
                // Pizza Flavors Sub Menu
                case 1:
                    cout 
                    << flush 
                    << "Pizza Flavors:" << endl
                    << "1. Hawaiian" << endl
                    << "2. Bacon" << endl
                    << "3. Pepperoni" << endl
                    << "4. All In" << endl
                    << "5. Veggies & Cheese" << endl
                    << "Please pick your pizza flavor: " ;
                        cin >> pizzaFlavor;
                
                switch (pizzaFlavor)
                {
                    case 1:
                    cout
                    << flush
                    << "Pizza Sizes:" << endl
                    << "1. 6 inches = ₱111.00" << endl
                    << "2. 9 inches = ₱245.00" << endl
                    << "3. 12 inches = ₱403.00" << endl
                    << "4. 15 inches = ₱571.00" << endl
                    << "5. Placeholder E = ₱laceholder" << endl
                    << "Select your pizza size: " ;
                        cin >> pizzaSize;
                    if (pizzaSize = 1)
                    {
                        
                    }
                }
            }
        }
    }

    return 0;
}