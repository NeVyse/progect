#ifndef LAB1CCP_MOTOCYCLE_H
#define LAB1CCP_MOTOCYCLE_H

#include "Vehicle.h"
#include <string>
class Motocycle: public Vehicle
{
private:
    string brand;
    string model;
    string engine;
    string power;
    string terrain;
protected:
    string fullBrand;
    string fullModel;
    string fullEngine;
    string fullPower;
    string fullTerrain;
public:
    Motocycle() : brand(""), model(""), engine(""), power(""),  terrain("") {}
    Motocycle(const string& b, const string& m, const string& e, const string& p, const string& t )
        : fullBrand(b), fullModel(m), fullEngine(e), fullPower(p), fullTerrain(t) {}

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

    void setPower(const string& power) {
        fullPower = power;
    }
    string getPower() const {
        return fullPower;
    }

    void setTerrain(const string& terrain) {
        fullTerrain = terrain;
    }
    string getTerrain() const {
        return fullTerrain;
    }
};
#endif //LAB1CCP_MOTOCYCLE_H