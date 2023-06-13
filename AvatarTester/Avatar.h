#ifndef AVATAR_H
#define AVATAR_H

const double SPAWN_POINT_X = 0.0;
const double SPAWN_POINT_Y = 0.0;

class Avatar {
    private:
        std::string username;
        bool isVisible;
        std::string imageURL;
        std::array<double, 2> pos;
    public:
        Avatar(std::string);
        void changeUsername(std::string);
        std::string getUsername();
        void setVisible(bool);
        bool getVisible();
        void setImage(std::string);
        std::string getImage();
        void setPos(double, double);
        std::array<double, 2> getPos();
        void showSummary();
};

#endif