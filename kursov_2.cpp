#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <limits>

using namespace std;

// Destination class
class Destination {
private:
    string name;
    double runwayLength;
    double distance;
public:
    // Constructors
    Destination() : name(""), runwayLength(0.0), distance(0.0) {}
    Destination(string n, double rl, double d) : name(n), runwayLength(rl), distance(d) {}

    // Getters and setters
    void setName(string n) { name = n; }
    void setRunwayLength(double rl) { runwayLength = rl; }
    void setDistance(double d) { distance = d; }

    string getName() const { return name; }
    double getRunwayLength() const { return runwayLength; }
    double getDistance() const { return distance; }

    // Overload <<
    friend ostream& operator<<(ostream& os, const Destination& dest) {
        os << "Destination: " << dest.name << ", Runway Length: " << dest.runwayLength
           << " m, Distance: " << dest.distance << " km";
        return os;
    }
};

// AirplaneClass class
class AirplaneClass {
private:
    string manufacturer;
    string model;
    int numSeats;
    double minRunwayLength;
    double personnelCost;
    double fuelConsumptionPerKmPerSeat;
    double fuelTankCapacity;
    double averageSpeed;

public:
    // Constructors
    AirplaneClass() : manufacturer(""), model(""), numSeats(0), minRunwayLength(0.0),
        personnelCost(0.0), fuelConsumptionPerKmPerSeat(0.0), fuelTankCapacity(0.0), averageSpeed(0.0) {}

    AirplaneClass(string manu, string mod, int seats, double minRL, double pCost,
                  double fuelCons, double fuelTank, double avgSpeed)
        : manufacturer(manu), model(mod), numSeats(seats), minRunwayLength(minRL),
          personnelCost(pCost), fuelConsumptionPerKmPerSeat(fuelCons),
          fuelTankCapacity(fuelTank), averageSpeed(avgSpeed) {}

    // Getters and setters
    void setManufacturer(string manu) { manufacturer = manu; }
    void setModel(string mod) { model = mod; }
    void setNumSeats(int seats) { numSeats = seats; }
    void setMinRunwayLength(double minRL) { minRunwayLength = minRL; }
    void setPersonnelCost(double pCost) { personnelCost = pCost; }
    void setFuelConsumptionPerKmPerSeat(double fuelCons) { fuelConsumptionPerKmPerSeat = fuelCons; }
    void setFuelTankCapacity(double fuelTank) { fuelTankCapacity = fuelTank; }
    void setAverageSpeed(double avgSpeed) { averageSpeed = avgSpeed; }

    string getManufacturer() const { return manufacturer; }
    string getModel() const { return model; }
    int getNumSeats() const { return numSeats; }
    double getMinRunwayLength() const { return minRunwayLength; }
    double getPersonnelCost() const { return personnelCost; }
    double getFuelConsumptionPerKmPerSeat() const { return fuelConsumptionPerKmPerSeat; }
    double getFuelTankCapacity() const { return fuelTankCapacity; }
    double getAverageSpeed() const { return averageSpeed; }

    // Calculate maximum range
    double getMaxRange() const {
        double totalFuelConsumptionPerKm = fuelConsumptionPerKmPerSeat * numSeats;
        if (totalFuelConsumptionPerKm == 0) return 0;
        return fuelTankCapacity / totalFuelConsumptionPerKm;
    }

    // Overload <<
    friend ostream& operator<<(ostream& os, const AirplaneClass& ac) {
        os << "Manufacturer: " << ac.manufacturer << ", Model: " << ac.model
           << ", Seats: " << ac.numSeats << ", Min Runway Length: " << ac.minRunwayLength
           << " m, Personnel Cost: " << ac.personnelCost << " USD"
           << ", Fuel Consumption: " << ac.fuelConsumptionPerKmPerSeat << " L/km/seat"
           << ", Fuel Tank Capacity: " << ac.fuelTankCapacity << " L"
           << ", Average Speed: " << ac.averageSpeed << " km/h";
        return os;
    }
};

// Airplane class
class Airplane {
private:
    string ID;
    AirplaneClass airplaneClass;

public:
    // Constructors
    Airplane() : ID(""), airplaneClass() {}
    Airplane(string id, AirplaneClass ac) : ID(id), airplaneClass(ac) {}

    // Getters and setters
    void setID(string id) { ID = id; }
    void setAirplaneClass(AirplaneClass ac) { airplaneClass = ac; }

    string getID() const { return ID; }
    AirplaneClass getAirplaneClass() const { return airplaneClass; }

    // Overload <<
    friend ostream& operator<<(ostream& os, const Airplane& ap) {
        os << "Airplane ID: " << ap.ID << endl;
        os << ap.airplaneClass;
        return os;
    }
};

// Function prototypes
void displayMenu();
void addAirplane(vector<Airplane>& airplanes);
void searchAirplanes(const vector<Airplane>& airplanes, const Destination& dest);
void saveAirplanesToFile(const vector<Airplane>& airplanes, const string& filename);
void loadAirplanesFromFile(vector<Airplane>& airplanes, const string& filename);
void inputValidation(double& value, const string& prompt);
void inputValidation(int& value, const string& prompt);

int main() {
    vector<Airplane> airplanes;
    int choice;
    string filename = "airplanes.txt";

    // Load airplanes from file
    loadAirplanesFromFile(airplanes, filename);

    do {
        displayMenu();
        cout << "Enter your choice: ";
        inputValidation(choice, "");

        switch (choice) {
        case 1:
            addAirplane(airplanes);
            break;
        case 2: {
            // Search for airplanes
            string destName;
            double destRunwayLength, destDistance;
            cout << "Enter destination name: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, destName);
            inputValidation(destRunwayLength, "Enter destination runway length (in meters): ");
            inputValidation(destDistance, "Enter distance to destination (in km): ");
            Destination dest(destName, destRunwayLength, destDistance);
            searchAirplanes(airplanes, dest);
            break;
        }
        case 3:
            // Display all airplanes
            for (const auto& airplane : airplanes) {
                cout << airplane << endl << "-------------------------" << endl;
            }
            break;
        case 4:
            // Save airplanes to file
            saveAirplanesToFile(airplanes, filename);
            cout << "Data saved to " << filename << endl;
            break;
        case 5:
            cout << "Exiting application." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}

// Display menu
void displayMenu() {
    cout << "===== Airplane Management Application =====" << endl;
    cout << "1. Add Airplane" << endl;
    cout << "2. Search Airplanes for Destination" << endl;
    cout << "3. Display All Airplanes" << endl;
    cout << "4. Save Airplanes to File" << endl;
    cout << "5. Exit" << endl;
}

// Add airplane function
void addAirplane(vector<Airplane>& airplanes) {
    string id, manufacturer, model;
    int numSeats;
    double minRunwayLength, personnelCost, fuelConsumptionPerKmPerSeat, fuelTankCapacity, averageSpeed;

    cout << "Enter Airplane ID: ";
    cin >> id;

    cout << "Enter Manufacturer: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, manufacturer);

    cout << "Enter Model: ";
    getline(cin, model);

    inputValidation(numSeats, "Enter Number of Seats: ");
    inputValidation(minRunwayLength, "Enter Minimum Runway Length (in meters): ");
    inputValidation(personnelCost, "Enter Personnel Cost (in USD): ");
    inputValidation(fuelConsumptionPerKmPerSeat, "Enter Fuel Consumption per km per seat (in liters): ");
    inputValidation(fuelTankCapacity, "Enter Fuel Tank Capacity (in liters): ");
    inputValidation(averageSpeed, "Enter Average Speed (in km/h): ");

    AirplaneClass airplaneClass(manufacturer, model, numSeats, minRunwayLength,
                                personnelCost, fuelConsumptionPerKmPerSeat,
                                fuelTankCapacity, averageSpeed);

    Airplane airplane(id, airplaneClass);
    airplanes.push_back(airplane);

    cout << "Airplane added successfully!" << endl;
}

// Search airplanes that can reach a given destination
void searchAirplanes(const vector<Airplane>& airplanes, const Destination& dest) {
    cout << "Searching for airplanes that can reach " << dest.getName() << "..." << endl;
    bool found = false;
    for (const auto& airplane : airplanes) {
        double maxRange = airplane.getAirplaneClass().getMaxRange();
        double minRunwayLength = airplane.getAirplaneClass().getMinRunwayLength();
        if (maxRange >= dest.getDistance() && minRunwayLength <= dest.getRunwayLength()) {
            cout << airplane << endl << "-------------------------" << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No suitable airplanes found for the destination." << endl;
    }
}

// Save airplanes to file
void saveAirplanesToFile(const vector<Airplane>& airplanes, const string& filename) {
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error opening file for writing." << endl;
        return;
    }
    for (const auto& airplane : airplanes) {
        outFile << airplane.getID() << endl;
        AirplaneClass ac = airplane.getAirplaneClass();
        outFile << ac.getManufacturer() << endl;
        outFile << ac.getModel() << endl;
        outFile << ac.getNumSeats() << endl;
        outFile << ac.getMinRunwayLength() << endl;
        outFile << ac.getPersonnelCost() << endl;
        outFile << ac.getFuelConsumptionPerKmPerSeat() << endl;
        outFile << ac.getFuelTankCapacity() << endl;
        outFile << ac.getAverageSpeed() << endl;
    }
    outFile.close();
}

// Load airplanes from file
void loadAirplanesFromFile(vector<Airplane>& airplanes, const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        // File does not exist, no data to load
        return;
    }
    while (!inFile.eof()) {
        string id, manufacturer, model;
        int numSeats;
        double minRunwayLength, personnelCost, fuelConsumptionPerKmPerSeat, fuelTankCapacity, averageSpeed;

        getline(inFile, id);
        if (id.empty()) break; // End of file

        getline(inFile, manufacturer);
        getline(inFile, model);
        inFile >> numSeats;
        inFile >> minRunwayLength;
        inFile >> personnelCost;
        inFile >> fuelConsumptionPerKmPerSeat;
        inFile >> fuelTankCapacity;
        inFile >> averageSpeed;
        inFile.ignore(numeric_limits<streamsize>::max(), '\n'); // Skip newline

        AirplaneClass airplaneClass(manufacturer, model, numSeats, minRunwayLength,
                                    personnelCost, fuelConsumptionPerKmPerSeat,
                                    fuelTankCapacity, averageSpeed);

        Airplane airplane(id, airplaneClass);
        airplanes.push_back(airplane);
    }
    inFile.close();
}

// Input validation for double values
void inputValidation(double& value, const string& prompt) {
    while (true) {
        if (!prompt.empty()) cout << prompt;
        cin >> value;
        if (cin.fail() || value < 0) {
            cout << "Invalid input. Please enter a positive number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
}

// Input validation for integer values
void inputValidation(int& value, const string& prompt) {
    while (true) {
        if (!prompt.empty()) cout << prompt;
        cin >> value;
        if (cin.fail() || value <= 0) {
            cout << "Invalid input. Please enter a positive integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }
}
