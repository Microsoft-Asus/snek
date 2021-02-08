#pragma once

namespace menu
{
    class menu
    {
    private:
        // indicates the current state of the menu cursor (y = 7 + cursorState)
        unsigned short int cursorState = 1;
        // indicates if the easter egg is unlocked
        bool eU = false;
    public:
        menu() = default;

        // start the menu
        unsigned short int start(Term::Terminal *term);

        // base menu
        void updateCursor(unsigned short int);
        void updateDesc() const;

        virtual ~menu() = default;
    };
    class microSnake
    {
    private:

        unsigned short int snake1Pos[2][16]{};
        unsigned short int snake2Pos[2][16]{};
    public:
        microSnake();

        void update();

        void updateSnakePos();

        void drawSnake();

        virtual ~microSnake() = default;
    };
}