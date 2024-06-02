// engine.h
#ifndef ENGINE_H
#define ENGINE_H

class Engine {
public:
    Engine();
    ~Engine();

    void initialize();
    void update();
    void render();
    void shutdown();

private:
    // Add any necessary member variables or resources here
};

#endif // ENGINE_H
