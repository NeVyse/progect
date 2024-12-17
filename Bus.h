#ifndef LAB1CCP_BUS_H
#define LAB1CCP_BUS_H

#include "Vehicle.h"
#include <string>
class Bus: public Vehicle
{
private:
    string brand;
    string model;
    string seat;
    string total;
    string finaldest;
protected:
    string fullBrand;
    string fullModel;
    string fullSeat;
    string fullTotal;
    string fullFinal;
public:
    Bus() : brand(""), model(""), seat(""), total(""),  finaldest(""){}
    Bus(const string& b, const string& m, const string& s, const string& t, const string& f)
        : fullBrand(b), fullModel(m), fullSeat(s), fullTotal(t), fullFinal(f){}

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
    void setSeat(const string& seat) {
        fullSeat = seat;
    }
    string getSeat() const {
        return fullSeat;
    }

    void setTotal(const string& total) {
        fullTotal = total;
    }
    string getTotal() const {
        return fullTotal;
    }

    void setFinal(const string& finadest) {
        fullFinal = finaldest;
    }
    string getFinal() const {
        return fullFinal;
    }
};
#endif //LAB1CCP_BUS_H