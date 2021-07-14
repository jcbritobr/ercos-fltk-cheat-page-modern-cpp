#include <FL/Fl.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Window.H>

class AppWindow : public Fl_Window
{
private:
    Fl_Menu_Bar menu;

public:
    AppWindow()
        : Fl_Window(300, 200, "Change menu item")
        , menu(0, 0, 300, 25)
    {
        menu.add("File/Quit", FL_CTRL + 'q', [](Fl_Widget*, void*) { exit(EXIT_SUCCESS); });

        menu.add("Edit/Change", FL_CTRL + 'c', [](Fl_Widget* w, void*) {
            auto menu = (Fl_Menu_Bar*)w;
            auto p = (Fl_Menu_Item*)menu->find_item("Edit/Submenu");
            if(p) {
                p->label("New Submenu Name");
            }
            p = (Fl_Menu_Item*)menu->find_item("Edit/New Submenu Name/Aaa");
            if(p) {
                p->label("New Aaa Name");
            }
        });

        menu.add("Edit/Submenu/Aaa");
        menu.add("Edit/Submenu/Bbb");
    }
};

int main(int argc, char** argv)
{
    AppWindow window;
    window.show();
    return Fl::run();
}
