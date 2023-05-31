#include <iostream>
#include <string.h>
using namespace std;

class entity {
protected:
    string typeName;
public:
    entity() {}
    entity(string typeName) {
        this->typeName = typeName;
    }
    void setTypeName(string type) {
        this->typeName = typeName;
    }
    string getTypeName() {
        return typeName;
    }
};

class fisherman : public entity {
protected: 
    int fishingExperienceYrs;
public:
    fisherman(string typeName, int fishingExperienceYrs) {
        this->typeName = typeName;
        this->fishingExperienceYrs = fishingExperienceYrs;
    }
    void setFishingExperienceYrs(int fishingExperienceYrs) {
        this->fishingExperienceYrs = fishingExperienceYrs;
    }
    int getFishingExperienceYrs() {
        return fishingExperienceYrs;
    }
};

class granny : public entity {
protected:
    int impudence;
public:
    granny(string typeName, int impudence) {
        this->typeName = typeName;
        this->impudence = impudence;
    }
    void setImpudence(int impudence) {
        this->impudence = impudence;
    }
    int getImpudence() {
        return impudence;
    }
};

class goldfish : public entity {
protected:
    bool isCaught;
public:
    goldfish(string typeName, bool isCaught) {
        this->typeName = typeName;
        this->isCaught = isCaught;
    }
    void setIsCaught(bool isCaught) {
        this->isCaught = isCaught;
    }
    bool getIsCaught() {
        return isCaught;
    }
};

int main() {
    cout << "Class architecture initialized";
    return 0;
}
