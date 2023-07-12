#include <iostream>
#include <string>
using namespace std;

// Base class for UAV
class UAV {
public:
    string name;
    double weight;
    double maxAltitude;
    UAV(string n, double w, double m) : name(n), weight(w), maxAltitude(m) {}
    virtual void takeOff() = 0;  // pure virtual method
    virtual void land() = 0;     // pure virtual method
    virtual void display() = 0;  // pure virtual method
};

// Surveillance UAV class, inherits from UAV
class SurveillanceUAV : public virtual UAV {
protected:
    double zoomLevel;
    double recordingCapacity;
    bool isNightVision;
public:
    SurveillanceUAV(string n, double w, double m, double z, double r, bool v)
        : UAV(n, w, m), zoomLevel(z), recordingCapacity(r), isNightVision(v) {}
    void captureImage() 
    {
         cout << "Capturing image...\n";
    }
    void recordVideo() 
    { 
        cout << "Recording video...\n";
    }
    void display()
     {
        cout << "I am a Surveillance UAV\n\n";
        cout << "My name is: " << name << "\n\n";
        cout << "My weight is: " << weight << " kg\n\n";
        cout << "My altitude is: " << maxAltitude << " ft\n\n";
        cout << "My zoom level is: " << zoomLevel << " x\n\n";
        cout << "My recording capacity is: " << recordingCapacity << " GB\n\n";
        if (isNightVision) {
            cout << "I have a night vision\n\n";
        }
    }
    void takeOff() 
    { 
        cout << "Taking off...\n";
    }
    void land() 
    { 
        cout << "Landing...\n"; 
    }
};

// Cargo delivery UAV class, inherits from UAV
class CargoDeliveryUAV : public virtual UAV {
protected:
    double cargoArea;
public:
    CargoDeliveryUAV(string n, double w, double m, double c)
        : UAV(n, w, m), cargoArea(c) {}
    void deliverCargo() 
    {
         cout << "Delivering cargo...\n"; 
    }
    void display()
     {
        cout << "I am a Cargo Delivery UAV\n\n";
        cout << "My name is: " << name << "\n\n";
        cout << "My weight is: " << weight << " kg\n\n";
        cout << "My altitude is: " << maxAltitude << " ft\n\n";
        cout << "My cargo area is: " << cargoArea << "\n\n";
    }
    void takeOff() { cout << "Taking off...\n"; }
    void land() { cout << "Landing...\n"; }
};

class MultiPurposeUAV : public SurveillanceUAV, public CargoDeliveryUAV {
protected:
    double solarPanelEfficiency;
public:
    MultiPurposeUAV(string n, double w, double m, double z, double r, bool v, double c, double s)
        : SurveillanceUAV(n, w, m, z, r, v), CargoDeliveryUAV(n, w, m, c), UAV(n, w, m), solarPanelEfficiency(s) {}
    void deliverCargoWithSurveillance() {
        takeOff();
        recordVideo();
        land();
        deliverCargo();
    }
    void display() 
    {
        cout << "I am a Multi Purpose UAV\n\n";
        cout << "My name is: " << name << "\n\n";
        cout << "My weight is: " << weight << " kg\n\n";
        cout << "My altitude is: " << maxAltitude << " ft\n\n";
        cout << "My zoom level is: " << zoomLevel << " x\n\n";
        cout << "My solar panel efficiency is: " << solarPanelEfficiency << endl;
        cout << "My recording capacity is: " << recordingCapacity << " GB\n\n";
        if (isNightVision) {
            cout << "I have a night vision\n\n";
        }
        cout << "My cargo area is: " << cargoArea << "\n\n";
    }
    void takeOff() 
    { 
        cout << "Taking off...\n"; 
    }
    void land()
    {
         cout << "Landing...\n"; 
    }
    void captureImage() 
    {
         cout << "Capturing image...\n"; 
    }
    void recordVideo() 
    {
         cout << "Recording video...\n"; 
    }
    void deliverCargo() 
    {
         cout << "Delivering cargo...\n";
     }
};

int main() {
    //we can also use cin for output but we need hard coding in this assignment...
    CargoDeliveryUAV cuav("Multi purpose drone", 14.5 ,3000 ,40);
    cuav.display();
    cuav.deliverCargo();

    SurveillanceUAV suav("Surveillance drone", 16.7 ,1000 ,20 ,3 ,true);
    suav.display();
    suav.recordVideo();

    MultiPurposeUAV muav("Multi purpose drone", 10.4, 2000, 20, 5, true, 5, 5);
    muav.display();
    muav.deliverCargoWithSurveillance();

    return 0;
}

