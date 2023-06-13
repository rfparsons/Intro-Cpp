#ifndef AVATAR_H
#define AVATAR_H
#include <string>
#include <array>

using namespace std;

const double SPAWN_POINT_X = 0.0;
const double SPAWN_POINT_Y = 0.0;

class Avatar {
    private:
        string username;
        bool isVisible;
        string imageURL;
        array<double, 2> pos;
    public:
        Avatar();
        Avatar(string);
        ~Avatar();
        void changeUsername(string);
        string getUsername();
        void setVisible(bool);
        bool getVisible();
        void setImage(string);
        string getImage();
        void setPos(double, double);
        array<double, 2> getPos();
        void showSummary();
};

#endif
