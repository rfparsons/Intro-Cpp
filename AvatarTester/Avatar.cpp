#include "Avatar.h"

Avatar::Avatar(std::string name) {
    username = name;
    pos[0] = SPAWN_POINT_X;
    pos[1] = SPAWN_POINT_Y;
    isVisible = false;
    imageURL = "https://img.dmacc.edu/SiteCollectionImages/dmacc2016/dmacclogo-white.png";
}

void Avatar::changeUsername(std::string newName){
    username = newName;
}

std::string Avatar::getUsername() {
    return username;
}

void Avatar::setVisible(bool visible) {
    isVisible = visible;
}

bool Avatar::getVisible() {
    return isVisible;
}

void Avatar::setImage(string url) {
    imageURL = url;
}

std::string Avatar::getImage() {
    return imageURL;
}

void Avatar::setPos(double x, double y) {
    pos[0] = x;
    pos[1] = y;
}

std::array<double, 2> Avatar::getPos() {
    return pos;
}

void Avatar::showSummary() {
    cout << "User " << username << endl;
    cout << "Located at: " << pos[0] << ", " << pos[1] << endl;
    if (isVisible) {
        cout << "Visible" << endl;
    }
    else
    {
        cout << "invisible" << endl;
    }
    
    cout << "Profile picture: " << imageURL << endl;
}