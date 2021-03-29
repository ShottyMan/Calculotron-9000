// Calculotron-9000.cpp : Defines the entry point for the application.
//


#include <iostream>

#include "MainHeader.hpp"

#include <cmath>

/*namespace Text {

    void Print(const char* z)
    {
        std::cout << z << std::endl;
    }

    void Printline(const char* z)
    {
        std::cout << z;
    }

    void endl()
    {
        std::cout << std::endl;
    }

}
void ClearScreen()
{
#if defined _WIN32
    system("cls");
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear")
#endif none
}






namespace Number
{
    void Print(int o)
    {
        std::cout << o << std::endl;
    }
    void PrintDb(double o)
    {
        std::cout << o << std::endl;
    }

    namespace interger {
        void ErrorCheckerRange(int& a, int b)
        {
            while (1)
            {
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore(INT16_MAX, '\n');

                    std::cout << "error wrong input(Out of interger range, or using strings): ";
                    std::cin >> a;
                }

                if (a > b) { Text::Printline("Value out of range, range is 1-"); Number::Print(b); std::cin >> a; }

                if (a <= 0) { Text::Printline("Value out of range, range is 1-"); Number::Print(b); std::cin >> a; }

                if (!std::cin.fail() && a <= b && a > 0) { break; }
            }
        }
        void ErrorCheckerNumber(int& a)
        {

            while (1)
            {
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore(INT16_MAX, '\n');

                    std::cout << "error wrong input or using strings: ";
                    std::cin >> a;
                }

                if (!std::cin.fail()) { break; }


            }
        }



    }
    namespace dble
    {

        void ErrorCheckerNumber(double& a)
        {
            while (1)
            {
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore(INT16_MAX, '\n');

                    std::cout << "error wrong input(Out of interger range, or using strings): ";
                    std::cin >> a;
                }

                if (!std::cin.fail()) { break; }


            }

        }
    }
}
*/

//This is supposed to be a repository of all of the equations I begin learning during class such as the equations in physics.







int main() {


    //Variable that tells if the main loop ends.
    bool end = false;
    static int Bg_state = 1;
    static int option = 0; static int option2 = 0; int c = 0; /*Input is used to determine which program from the above list is picked. */ static int Input = 0;
    do {


        static int Bg_state = 1;
        static int option = 0; static int option2 = 0; int c = 0; /*Input is used to determine which program from the above list is picked. */ static int Input = 0;

        ClearScreen();

        
        //Tells user of Program name and the options.
        switch (Bg_state) {

        case 1:
            std::cout << "Calculotron-9000\n" << "1. Energy Heat capacity\n" << "2. Kinematics\n4. Quit\n";

            //gets variable from the user.
            std::cin >> Input;

            Number::interger::ErrorCheckerRange(Input, 4);

            if (Input == 4) { return 0; }

            //Prevents from duplicating the sub-menue loops.
            std::cin.get();

            /*case 2:
            Input = 1;*/

        }


        //The switch which chooses the first sub-menue.
        switch (Input)
        {

            //This is the case for the Energy Heat sub menue.

        case 1:


            //This is a do while for this Energy Heat sub-menue.

            do
            {

                //This shows the options of the Energy Heat sub menue

                ClearScreen();

                std::cout << "Options: \n" << "1.See formula\n2.Calculator\n" << std::endl;

                //This is the picker for the options of the Energy heat options

                std::cin >> option2;

                Number::interger::ErrorCheckerRange(option2, 2);

                //The switch for the Energy Heat sub-menue.

                switch (option2) {

                    //This is the first case for learning the formula for Energy Heat.

                case 1:

                    //used to clear Screen
                    ClearScreen();

                    //This is the stating of the formula as well as the options to going back. 

                    std::cout << "Formula is: Q=mcΔT\n";
                    std::cout << "1. Exit to menue\n 2. Back\n 3.Exit out of Program" << std::endl;

                    //This is the variable that is used to choose the exit otions

                    std::cin >> c;

                    Number::interger::ErrorCheckerRange(c, 3);

                    //Used as exit program or thing
                    if (c == 3) { return 0; }
                    else if (c == 2) { break; option = 1; }  //used to go back to the menue before this one.
                    else if (c == 1) { break; } //Used to go to the main menue

                    break;

                case 2:

                    //This is the option for the equations used ot calculate the specific parts of specific heat.

                    std::cout << "Solve for 1.Q, 2.M, 3.ΔT or 4.C" << std::endl;
                    int In = 0;
                    std::cin >> In;

                    Number::interger::ErrorCheckerRange(In, 4);

                    double m = 0, q = 0, t = 0, C = 0;

                    switch (In)
                    {

                    case 1:

                        ClearScreen();

                        Text::Print("\nInput the mass");

                        std::cin >> m;
                        Number::dble::ErrorCheckerNumber(m);

                        Text::Print("Input the temperature");

                        std::cin >> t;

                        Text::Print("Input the heat capacity");

                        std::cin >> C;

                        Text::Printline("Thermal energy (q) is: ");

                        q = (m * t) * C;

                        Number::PrintDb(q);

                        Text::Print("1.Return to main menue\n2.Go back\n3.Exit program");

                        std::cin >> c;

                        Number::interger::ErrorCheckerRange(c, 3);

                        //Used as exit program or thing
                        if (c == 3) { return 0; }
                        else if (c == 2) { break; option = 1; }  //used to go back to the menue before this one.
                        else if (c == 1) { break; } //Used to go to the main menue

                        break;

                    case 2:

                        ClearScreen();

                        Text::Print("Input the temperature: ");

                        std::cin >> t;

                        Text::Print("Input the heat capacity: ");

                        std::cin >> C;

                        Text::Print("Input the the thermal energy: ");

                        std::cin >> q;

                        m = q / (t * C);

                        Number::PrintDb(m);

                        Text::Print("1.Return to main menue\n2.Go back\n3.Exit program");

                        std::cin >> c;

                        Number::interger::ErrorCheckerRange(c, 3);

                        //Used as exit program or thing
                        if (c == 3) { return 0; }
                        else if (c == 2) { break; option = 1; }  //used to go back to the menue before this one.
                        else if (c == 1) { break; } //Used to go to the main menue

                        break;

                    case 3:

                        ClearScreen();

                        Text::Print("Input the Thermal energy: ");

                        std::cin >> q;

                        Text::Print("Input the mass: ");

                        std::cin >> m;

                        Text::Print("Input the heat capacity: ");

                        std::cin >> C;

                        t = q / (m * C);

                        Text::Printline("The change in Temperature");

                        Number::PrintDb(t);

                        Text::Print("1.Return to main menue\n2.Go back\n3.Exit program");

                        std::cin >> c;

                        Number::interger::ErrorCheckerRange(c, 3);

                        //Used as exit program or thing
                        if (c == 3) { return 0; }
                        else if (c == 2) { break; option = 1; }  //used to go back to the menue before this one.
                        else if (c == 1) { break; } //Used to go to the main menue

                        break;

                    case 4:

                        ClearScreen();

                        Text::Print("Input the mass: ");

                        std::cin >> m;

                        Text::Print("Input the change in temperature: ");

                        std::cin >> t;

                        Text::Print("Input the amount of thermal energy: ");

                        std::cin >> q;

                        Text::Printline("The specific heat capacity is: ");

                        C = q / (m * t);

                        Number::PrintDb(C);

                        Text::endl();

                        Text::Print("1.Return to main menue\n2.Go back\n3.Exit program");

                        std::cin >> c;

                        Number::interger::ErrorCheckerRange(c, 3);

                        //Used as exit program or thing
                        if (c == 3) { return 0; }
                        else if (c == 2) { break; option = 1; }  //used to go back to the menue before this one.
                        else if (c == 1) { break; } //Used to go to the main menue
                        break;
                    }

                    //This is just the default which will exit out of the statement.
                    

                    std::cin.get();
                    break;
                }
                if (c == 1) { break; }
            } while (1 == 1);

         //Case 2 Refers to the Kinematic Equations so that is what this part of it refers to.

        case 2:
            do {

                ClearScreen();


                //Text to ask the user which formula that they want to solve for.
               
                Text::Printline("Choose the equations 1.d=((Vi+Vf)/2)*t, 2.d=Vi*t+1/2*a*t^2, 3.Vf=Vi+a*t, 4.Vf^2=Vi^2+2*a*d: ");

                //These variables are the ones that will be utilized for all of the 4 equations all initialized in the same spot.

                double d = 0, Vi = 0, a = 0, t = 0, Vf = 0;
                
                //Another variable which is used for storing which one has the user decided to go with.

                int solvefor = 0;

                std::cin >> option2;

                Number::interger::ErrorCheckerRange(option2, 4);

                switch (option2) {

                
                case 1:
                    
                    ClearScreen();

                    Text::Print("Pick which thing to solve, 1.Intial velocity(Vi), 2.Final Velocity(Vf), 3.Time(t) or 4.Displacement(d): ");

                    std::cin >> solvefor;

                    //This is input validation though for now it only works against strings and does not prevent decimal numbers from being inputed.
                    Number::interger::ErrorCheckerRange(solvefor, 4);

                    switch (solvefor)
                    {
                    case 1:

                        ClearScreen();

                        Text::Print("Input the final velocity(M/s): ");

                        std::cin >> Vf;

                        Number::dble::ErrorCheckerNumber(Vf);

                        Text::Print("Input the time(seconds): ");

                        std::cin >> t;

                        Number::dble::ErrorCheckerNumber(t);

                        Text::Print("Input the displacement(Meters): ");

                        std::cin >> d;

                        Number::dble::ErrorCheckerNumber(d);

                        Vi = ((d / t) * 2) - Vf;

                        Number::PrintDb(Vi);

                        Text::Print("1.Return to main menue\n2.Go back\n3.Exit program");

                        std::cin >> c;

                        Number::interger::ErrorCheckerRange(c, 3);

                        //Used as exit program or thing
                        if (c == 3) { return 0; }
                        else if (c == 2) { break; option = 1; }  //used to go back to the menue before this one.
                        else if (c == 1) { break; } //Used to go to the main menue
                        
                        break;

                    case 2:

                        ClearScreen();

                        Text::Printline("Input the displacement in meters(d): ");

                        std::cin >> d;

                        Number::dble::ErrorCheckerNumber(d);

                        Text::Printline("\nInput the time in seconds(t): ");

                        std::cin >> t;

                        Number::dble::ErrorCheckerNumber(t);

                        Text::Printline("\nInput the final velocity in M/s(Vf): ");

                        std::cin >> Vf;

                        Number::dble::ErrorCheckerNumber(Vf);

                        Vi = ((2 * d)/t)-Vf; 

                        Text::Printline("\nThe initial velocity in M/s is: ");

                        Number::PrintDb(Vi);

                        Text::Print("1.Return to main menue\n2.Go back\n3.Exit program");

                        std::cin >> c;

                        Number::interger::ErrorCheckerRange(c, 3);

                        //Used as exit program or thing
                        if (c == 3) { return 0; }
                        else if (c == 2) { break; option = 1; }  //used to go back to the menue before this one.
                        else if (c == 1) { break; } //Used to go to the main menue

                        
                        break;

                    case 3:

                        ClearScreen();

                        Text::Printline("Input the displacement in meters(d): ");

                        std::cin >> d;

                        Number::dble::ErrorCheckerNumber(d);

                        Text::Printline("\nIntial velocity in m/s(Vi): ");

                        std::cin >> Vi;

                        Number::dble::ErrorCheckerNumber(Vi);

                        Text::Printline("\nInput the final velocity in m/s(Vf): ");

                        std::cin >> Vf;

                        Number::dble::ErrorCheckerNumber(Vf);

                        t = ((2*d)-Vi)/Vf;

                        Text::Printline("\nThe time in m/s is: ");

                        Number::PrintDb(t);

                        Text::Print("1.Return to main menue\n2.Go back\n3.Exit program");

                        std::cin >> c;

                        Number::interger::ErrorCheckerRange(c, 3);

                        //Used as exit program or thing
                        if (c == 3) { return 0; }
                        else if (c == 2) { break; option = 1; }  //used to go back to the menue before this one.
                        else if (c == 1) { break; } //Used to go to the main menue


                        
                        break;

                    case 4:
                        

                        ClearScreen();

                        Text::Print("Input the initial velocity in M/s: ");

                        std::cin >> Vi;
                        Number::dble::ErrorCheckerNumber(Vi);

                        Text::Print("Input the final velocity in M/s: ");

                        std::cin >> Vf;
                        Number::dble::ErrorCheckerNumber(Vf);

                        Text::Print("Input the time in seconds: ");
                        
                        std::cin >> t;
                        Number::dble::ErrorCheckerNumber(t);

                        d = ((Vi + Vf)/2) * t;

                        Text::Printline("The displacement would be: ");

                        Number::PrintDb(d);

                        Text::Print("1.Return to main menue\n2.Go back\n3.Exit program");

                        std::cin >> c;

                        Number::interger::ErrorCheckerRange(c, 3);

                        //Used as exit program or thing
                        if (c == 3) { return 0; }
                        else if (c == 2) { break; option = 1; }  //used to go back to the menue before this one.
                        else if (c == 1) { break; } //Used to go to the main menue

                        break;

                    default:
                        break;
                    }
                  break;
                case 2:
                    
                    ClearScreen();

                    Text::Printline("Pick which value to solve for, 1. Intial Velocity 2. Time 3. Acceleration 4. Displacement");

                    std::cin >> solvefor;

                    switch(solvefor)
                    {
                        case 1:
                        
                        ClearScreen();
                        
                        Text::Printline("");

                        break;
                        case 2:

                        break;
                        case 3:

                        break;
                        case 4:

                        ClearScreen();

                        Text::Printline("Input the initial velocity in m/s(Vi): ");

                        std::cin >> Vi;

                        Text::Printline("\nInput the time in seconds(t): ");

                        std::cin >> t;

                        Text::Printline("\nInput the acceleration in m/s^2(a): ");

                        std::cin >> a;

                        d = Vi*t+0.5*a*pow(t,2);

                        Text::Printline("\nThe displacement is: ");

                        Number::PrintDb(d);

                        //Used as exit program or thing
                        if (c == 3) { return 0; }
                        else if (c == 2) { break; option = 1; }  //used to go back to the menue before this one.
                        else if (c == 1) { break; } //Used to go to the main menue
                        
                        break;
                    }
                    
                    break;

                case 3:
                    
                    Text::Print("Placeholder");

                    break;
                case 4:
                    
                    Text::Print("Placeholder");

                    break;
                default:
                    break;
                }
                if (c == 1) { break; }
            } while (1 == 1);



            break;
            

        }
    }while (1 == 1);
    return 0;
} 