#include <string>
#include <cstring>
#include <iostream>

class Car {
    // TODO: Declare private attributes
    private:
        std::string brand_;
        
    // TODO: Declare getter and setter for brand
    public:
        void brand(char*);
        std::string brand() const;
        
};

// Define setters
void Car::brand(char* brand)
{
    Car::brand_ = brand;
}

// Define getters
std::string Car::brand() const
{
    return brand_;
}

// Test in main()
int main() 
{
    Car car;
    char brand[] = "Peugeot";
    car.brand(brand);
    std::cout << car.brand() << "\n";   
}