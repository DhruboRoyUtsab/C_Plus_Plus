#include <iostream>
#include <string>
using namespace std;

class Car {
    private:
        string company;
        string model;
        int year;

    public:
        // Parameterized constructor
        Car(string c, string m, int y) : company(c), model(m), year(y) {}

        // Getter functions
        string getCompany() {
            return company;
        }

        string getModel() {
            return model;
        }

        int getYear() {
            return year;
        }
};

int main() {
    // Creating three Car objects
    Car car1("Tesla", "Model S", 2021);
    Car car2("BMW", "i8", 2020);
    Car car3("Mercedes-Benz", "S-Class", 2022);

    // Displaying company, model, and year for each Car object
    cout << "Company: " << car1.getCompany() << ", Model: " << car1.getModel() << ", Year: " << car1.getYear() << endl;
    cout << "Company: " << car2.getCompany() << ", Model: " << car2.getModel() << ", Year: " << car2.getYear() << endl;
    cout << "Company: " << car3.getCompany() << ", Model: " << car3.getModel() << ", Year: " << car3.getYear() << endl;

    return 0;
}