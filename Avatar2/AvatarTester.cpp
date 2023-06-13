#include <iostream>
#include <array>
#include "Avatar.h"

using namespace std;


int main() {
    Avatar luigi;
    Avatar mario("Mario");

    luigi.changeUsername("LIsReal2401");
    cout << luigi.getImage() << endl;
    luigi.setImage("https://giantbomb1.cbsistatic.com/uploads/scale_medium/9/99864/2389814-nsmbuluigi.png");
    cout << luigi.getUsername() << endl;
    luigi.setPos(luigi.getPos()[0] + 1.2, luigi.getPos()[1] + 2.1);
    luigi.setVisible(!luigi.getVisible());

    cout << "-----------" << endl;

    cout << mario.getImage() << endl;
    mario.setImage("https://giantbomb1.cbsistatic.com/uploads/scale_medium/15/153607/2555000-2339414779-Mario.png");
    cout << mario.getUsername() << endl;
    mario.changeUsername("Super_Mario85");
    mario.setPos(mario.getPos()[0] + 1.1, mario.getPos()[1] + 2.3);
    mario.setVisible(!mario.getVisible());

    cout << "-----------" << endl;
    luigi.showSummary();
    cout << "-----------" << endl;
    mario.showSummary();

    return 0;
}
