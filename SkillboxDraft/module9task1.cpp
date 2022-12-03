#include <iostream>
#include <string>

int main()
{
    std::string departureTime;
    std::string arrivalTime;

    while(true)
    {
        do {
            std::cout << "Enter departure time (HH:MM): \n";
            std::cin >> departureTime;
        } while(departureTime.length() != 5 || departureTime[2] != ':' ||       // input control
                departureTime[0] < '0' || departureTime[0] > '9' ||
                departureTime[1] < '0' || departureTime[1] > '9' ||
                departureTime[3] < '0' || departureTime[3] > '9' ||
                departureTime[4] < '0' || departureTime[4] > '9');

        do {
            std::cout << "Enter arrival time (HH:MM): \n";
            std::cin >> arrivalTime;
        } while(arrivalTime.length() != 5 || arrivalTime[2] != ':' ||       // input control
                arrivalTime[0] < '0' || arrivalTime[0] > '9' ||
                arrivalTime[1] < '0' || arrivalTime[1] > '9' ||
                arrivalTime[3] < '0' || arrivalTime[3] > '9' ||
                arrivalTime[4] < '0' || arrivalTime[4] > '9');

        int departureHour = 10 * (departureTime[0] - '0') + (departureTime[1] - '0');       // convert char to int
        int departureMinutes = 10 * (departureTime[3] - '0') + (departureTime[4] - '0');    // convert char to int

        int arrivalHour = 10 * (arrivalTime[0] - '0') + (arrivalTime[1] - '0');             // convert char to int
        int arrivalMinutes = 10 * (arrivalTime[3] - '0') + (arrivalTime[4] - '0');          // convert char to int

        if(departureHour > 23 || departureMinutes > 59 && arrivalHour > 23 || arrivalMinutes > 59){std::cout << "Wrong!\n"; return 0;}  // debug



        int minDep = 60 * departureHour + departureMinutes;     // convert to minutes
        int minArr = 60 * arrivalHour + arrivalMinutes;         // convert to minutes

        int result;

        if(minArr < minDep){result = (minArr - minDep) + (24*60);}
        else if(minArr == minDep){result = 24*60;}
        else {result = minArr - minDep;}

        std::cout << "The trip was " << result / 60 << "h. " << result % 60 << "m. \n";
    }
}
