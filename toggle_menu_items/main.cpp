#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/fl.H>
#include <iostream>

class AppWindow : public Fl_Double_Window
{
private:
    Fl_Menu_Bar menu;
    int set_menu_state(Fl_Menu_Bar* menubar, const char* name, int state)
    {
        auto m = (Fl_Menu_Item*)menubar->find_item(name);
        if(!m)
            return -1;
        if(state) {
            m->set();
        } else {
            m->clear();
        }
        return 0;
    }

public:
    AppWindow()
        : Fl_Double_Window(720, 486)
        , menu(0, 0, 720, 25)
    {
        menu.add("Options/One", 0, 0, 0, FL_MENU_TOGGLE);
        menu.add("Options/Two", 0, 0, 0, FL_MENU_TOGGLE);
        menu.add("Options/Three", 0, 0, 0, FL_MENU_TOGGLE);

        if(set_menu_state(&menu, "Options/One", 0) < 0) {
            std::cerr << "FAILED [1]\n";
        }

        if(set_menu_state(&menu, "Options/Two", 0) < 0) {
            std::cerr << "FAILED [2]\n";
        }

        if(set_menu_state(&menu, "Options/Three", 0) < 0) {
            std::cerr << "FAILED [3]\n";
        }
    }
};

int main(int argc, char** argv)
{
    AppWindow window;
    window.show(argc, argv);
    return Fl::run();
}
