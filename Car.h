#ifndef LAB1CCP_CAR_H
#define LAB1CCP_CAR_H

#include "Vehicle.h"
#include <string>
class Car: public Vehicle
{
private:
    string brand;
    string model;
    string engine;
    string color;
    string transmission;
protected:
    string fullBrand;
    string fullModel;
    string fullEngine;
    string fullColor;
    string fullTransmission;
public:
    Car() : brand(""), model(""), engine(""), color(""),  transmission("") {}
    Car(const string& b, const string& m, const string& e, const string& c, const string& t)
        : fullBrand(b), fullModel(m), fullEngine(e), fullColor(c), fullTransmission(t){}

    void save(ofstream& file) override;
    void load(ifstream& file) override;
    void menu() override;
    void show() const override;

    void setBrand(const string& brand) {
        fullBrand = brand;
    }
    string getBrand() const {
        return fullBrand;
    }

    void setModel(const string& model) {
        fullModel = model;
    }
    string getModel() const {
        return fullModel;
    }

    void setEngine(const string& engine) {
        fullEngine = engine;
    }
    string getEngine() const {
        return fullEngine;
    }

    void setColor(const string& color) {
        fullColor = color;
    }
    string getColor() const {
        return fullColor;
    }

    void setTrans(const string& transmission) {
        fullTransmission = transmission;
    }
    string getTrans() const {
        return fullTransmission;
    }
};
#endif //LAB1CCP_CAR_H