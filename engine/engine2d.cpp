


class Engine2d{
    public:
        window win;
        EventHandler events;
        gameObject gameObjects[100];
        Engine2d(){
            win= window();
            win.open();
            events = EventHandler(win.dis, win.win);
            glOrtho(0.0f, win.size.x, win.size.y, 0.0f, -100.0f, 100.0f);
        };
};