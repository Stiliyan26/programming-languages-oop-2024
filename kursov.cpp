#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <limits>

class AircraftClass {
private:
    std::string manufacturer;
    std::string model;
    int seatsCount;
    int minRunwayLength;
    double averageSpeed;
    double fuelPerKmPerSeat;
    int fuelTankCapacity;
    double personnelCost;

public:
    AircraftClass() : seatsCount(0), minRunwayLength(0), averageSpeed(0), 
                      fuelPerKmPerSeat(0), fuelTankCapacity(0), personnelCost(0) {}
    
    AircraftClass(std::string mfr, std::string mdl, int seats, int runway, 
                 double speed, double fuelCost, int tankCap, double persCost) 
        : manufacturer(mfr), model(mdl), seatsCount(seats), minRunwayLength(runway),
          averageSpeed(speed), fuelPerKmPerSeat(fuelCost), fuelTankCapacity(tankCap),
          personnelCost(persCost) {}

    // Getters
    std::string getManufacturer() const { return manufacturer; }
    std::string getModel() const { return model; }
    int getSeatsCount() const { return seatsCount; }
    int getMinRunwayLength() const { return minRunwayLength; }
    double getAverageSpeed() const { return averageSpeed; }
    double getFuelPerKmPerSeat() const { return fuelPerKmPerSeat; }
    int getFuelTankCapacity() const { return fuelTankCapacity; }
    double getPersonnelCost() const { return personnelCost; }

    // Setters with validation
    void setManufacturer(const std::string& mfr) {
        if (!mfr.empty()) manufacturer = mfr;
        else throw std::invalid_argument("Manufacturer cannot be empty");
    }

    void setModel(const std::string& mdl) {
        if (!mdl.empty()) model = mdl;
        else throw std::invalid_argument("Model cannot be empty");
    }

    void setSeatsCount(int seats) {
        if (seats > 0) seatsCount = seats;
        else throw std::invalid_argument("Seats count must be positive");
    }

    void setMinRunwayLength(int runway) {
        if (runway > 0) minRunwayLength = runway;
        else throw std::invalid_argument("Runway length must be positive");
    }

    friend std::ostream& operator<<(std::ostream& os, const AircraftClass& ac);
};

class Aircraft {
private:
    std::string identificationNumber;
    AircraftClass aircraftClass;

public:
    // Default constructor
    Aircraft() {}
    
    // Parameterized constructor
    Aircraft(std::string id, AircraftClass ac) : identificationNumber(id), aircraftClass(ac) {}

    // Getters
    std::string getIdentificationNumber() const { return identificationNumber; }
    AircraftClass getAircraftClass() const { return aircraftClass; }

    // Setters with validation
    void setIdentificationNumber(const std::string& id) {
        if (!id.empty()) identificationNumber = id;
        else throw std::invalid_argument("ID cannot be empty");
    }

    void setAircraftClass(const AircraftClass& ac) {
        aircraftClass = ac;
    }

    friend std::ostream& operator<<(std::ostream& os, const Aircraft& a);
};

// Implementation of operator<< for AircraftClass
std::ostream& operator<<(std::ostream& os, const AircraftClass& ac) {
    os << "Manufacturer: " << ac.manufacturer << "\n"
       << "Model: " << ac.model << "\n"
       << "Seats: " << ac.seatsCount << "\n"
       << "Min Runway Length: " << ac.minRunwayLength << " m\n"
       << "Average Speed: " << ac.averageSpeed << " km/h\n"
       << "Fuel per km per seat: " << ac.fuelPerKmPerSeat << " L\n"
       << "Fuel tank capacity: " << ac.fuelTankCapacity << " L\n"
       << "Personnel cost: " << ac.personnelCost << "\n";
    return os;
}

std::ostream& operator<<(std::ostream& os, const Aircraft& a) {
    os << "Aircraft ID: " << a.identificationNumber << "\n"
       << "Class Details:\n" << a.aircraftClass;
    return os;
}

class AircraftManagement {
private:
    std::vector<Aircraft> aircraftFleet;
    const std::string FILENAME = "aircraft_data.txt";

    void saveToFile() {
        std::ofstream file(FILENAME);
        if (!file.is_open()) {
            throw std::runtime_error("Unable to open file for writing");
        }

        for (const auto& aircraft : aircraftFleet) {
            AircraftClass ac = aircraft.getAircraftClass();
            file << aircraft.getIdentificationNumber() << "\n"
                 << ac.getManufacturer() << "\n"
                 << ac.getModel() << "\n"
                 << ac.getSeatsCount() << "\n"
                 << ac.getMinRunwayLength() << "\n"
                 << ac.getAverageSpeed() << "\n"
                 << ac.getFuelPerKmPerSeat() << "\n"
                 << ac.getFuelTankCapacity() << "\n"
                 << ac.getPersonnelCost() << "\n";
        }
        file.close();
    }

    void loadFromFile() {
        std::ifstream file(FILENAME);
        if (!file.is_open()) {
            return; // New file will be created when saving
        }

        aircraftFleet.clear();
        std::string id, manufacturer, model;
        int seats, runway, tankCap;
        double speed, fuelCost, persCost;

        while (std::getline(file, id)) {
            std::getline(file, manufacturer);
            std::getline(file, model);
            file >> seats >> runway >> speed >> fuelCost >> tankCap >> persCost;
            file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            AircraftClass ac(manufacturer, model, seats, runway, speed, fuelCost, tankCap, persCost);
            Aircraft aircraft(id, ac);
            aircraftFleet.push_back(aircraft);
        }
        file.close();
    }

public:
    AircraftManagement() {
        loadFromFile();
    }

    ~AircraftManagement() {
        saveToFile();
    }

    void addAircraft() {
        std::string id, manufacturer, model;
        int seats, runway, tankCap;
        double speed, fuelCost, persCost;

        std::cout << "Enter aircraft ID: ";
        std::getline(std::cin, id);

        std::cout << "Enter manufacturer: ";
        std::getline(std::cin, manufacturer);

        std::cout << "Enter model: ";
        std::getline(std::cin, model);

        std::cout << "Enter number of seats: ";
        std::cin >> seats;

        std::cout << "Enter minimum runway length (meters): ";
        std::cin >> runway;

        std::cout << "Enter average speed (km/h): ";
        std::cin >> speed;

        std::cout << "Enter fuel consumption per km per seat (liters): ";
        std::cin >> fuelCost;

        std::cout << "Enter fuel tank capacity (liters): ";
        std::cin >> tankCap;

        std::cout << "Enter personnel cost: ";
        std::cin >> persCost;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        try {
            AircraftClass ac(manufacturer, model, seats, runway, speed, fuelCost, tankCap, persCost);
            Aircraft aircraft(id, ac);
            aircraftFleet.push_back(aircraft);
            std::cout << "Aircraft added successfully!\n";
        } catch (const std::invalid_argument& e) {
            std::cout << "Error: " << e.what() << "\n";
        }
    }

    void findAircraftForRunway(int runwayLength) {
        bool found = false;
        std::cout << "\nAircraft suitable for runway length " << runwayLength << "m:\n";
        
        for (const auto& aircraft : aircraftFleet) {
            if (aircraft.getAircraftClass().getMinRunwayLength() <= runwayLength) {
                std::cout << aircraft << "\n";
                found = true;
            }
        }

        if (!found) {
            std::cout << "No suitable aircraft found.\n";
        }
    }

    void displayAllAircraft() {
        if (aircraftFleet.empty()) {
            std::cout << "No aircraft in the fleet.\n";
            return;
        }

        std::cout << "\nAll aircraft in fleet:\n";
        for (const auto& aircraft : aircraftFleet) {
            std::cout << aircraft << "\n";
        }
    }
};

void displayMenu() {
    std::cout << "\nAircraft Management System\n";
    std::cout << "1. Add new aircraft\n";
    std::cout << "2. Find aircraft for runway\n";
    std::cout << "3. Display all aircraft\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    AircraftManagement manager;
    int choice;
    
    while (true) {
        displayMenu();
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
            case 1:
                manager.addAircraft();
                break;
            case 2: {
                int runwayLength;
                std::cout << "Enter runway length (meters): ";
                std::cin >> runwayLength;
                manager.findAircraftForRunway(runwayLength);
                break;
            }
            case 3:
                manager.displayAllAircraft();
                break;
            case 4:
                std::cout << "Exiting program.\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
