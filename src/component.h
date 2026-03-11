#ifndef COMPONENT_H
#define COMPONENT_H
#endif

class Component{

    public :
        virtual void getparent();
        virtual void on_draw();
};

class Menu :public Component{

};
class Button: public Component{

};
class Input: public Component{

};
class Text: public Component{

};