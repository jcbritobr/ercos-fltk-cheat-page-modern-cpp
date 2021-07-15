#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>

int main(int argc, char **argv)
{
    auto window = Fl_Window(300, 100, "Resizing tutorial");
    auto icon = Fl_Box(0, 0, 50, 50, "!");
    auto text = Fl_Input(50, 0, 250, 40, "");
    text.value("Out of memory error");
    text.color(FL_YELLOW);
    auto btns = Fl_Group(50, 50, 250, 50);
    auto darn = Fl_Button(200, 50, 100, 50, "Darn!");
    auto r =  Fl_Box(50,50,150,50);
    r.hide();
    btns.resizable(&r);
    btns.end();
    window.resizable(&text);
    window.show();
    
	return Fl::run();
}
