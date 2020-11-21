#include "visual.hpp"
#include <cpp-terminal/terminal.h>
#include "utils.hpp"

/*
 * .----..-. .-..----..-. .-.
 * { {__  |  `| || {_  | |/ /
 * .-._} }| |\  || {__ | |\ \
 * `----' `-' `-'`----'`-' `-'
 * ###########################
 * #                         #
 * #    Ooooooooooooooooo    #
 * #    Singleplayer  <--    #
 * #    Multiplayer   <--    #
 * #    Online Mode   <--    #
 * #    Settings      <--    #
 * #    Manual        <--    #
 * #    About         <--    #
 * #    License       <--    #
 * #    ???           <--    #
 * #    ooooooooooooooooO    #
 * #    >               <    #
 * #                         #
 * ###########################
 *
 * size: 15x27
 * inner size: 13x25
 *
 */

void anim::snekMenuBase()
{
    utils::timer timer(70);

    std::cout << Term::color(Term::bg::blue)
              << Term::color(Term::fg::black)
              << Term::move_cursor(5,14)
              << " "
              << std::flush;
    while (!timer.done());

    // draws the top line
    for (unsigned int i = 1; i < 14; i++)
    {
        timer.reset();
        std::cout << Term::move_cursor(5,14 - i)
                  << " "
                  << Term::move_cursor(5,14 + i)
                  << " "
                  << std::flush;
        while (!timer.done());
    }
    // left and right rows
    for (unsigned int i = 0; i < 14; i++)
    {
        timer.reset();
        std::cout << Term::move_cursor(5 + i,1)
                  << " "
                  << Term::move_cursor(5 + i,27)
                  << " "
                  << std::flush;
        while (!timer.done());
    }
    // bottom row
    for (unsigned int i = 0; i < 14; i++)
    {
        timer.reset();
        std::cout << Term::move_cursor(19,1 + i)
                  << " "
                  << Term::move_cursor(19,27 - i)
                  << " "
                  << std::flush;
        while (!timer.done());
    }
    std::cout << Term::color(Term::fg::green)
              << Term::color(Term::bg::reset)
              << std::flush;
    for (unsigned short int i = 0; i < 21; i++)
    {
        timer.reset();
        // draw head
        std::cout << Term::move_cursor(7,26 - i)
                  << "O"
                  << Term::move_cursor(16,2 + i)
                  << "O";
        // draw tail
        if (i > 0)
            std::cout << Term::move_cursor(7,27 - i)
                      << "o"
                      << Term::move_cursor(16,1 + i)
                      << "o";
        // erase tail
        if (i > 16)
            std::cout << Term::move_cursor(7,27-(i-16))
                      << " "
                      << Term::move_cursor(16,1+(i-16))
                      << " ";
        // flush iostream
        std::cout << std::flush;
        while (!timer.done());
    }
    std::cout << Term::move_cursor(8,6)
              << Term::color(Term::bg::reset)
              << Term::color(Term::fg::blue)
              << Term::move_cursor(8,6)
              << "Singleplayer"
              << Term::move_cursor(9,6)
              << "Multiplayer"
              << Term::move_cursor(10,6)
              << "Online Mode"
              << Term::move_cursor(11,6)
              << "Settings"
              << Term::move_cursor(12,6)
              << "Manual"
              << Term::move_cursor(13,6)
              << "About"
              << Term::move_cursor(14,6)
              << "License"
              << Term::move_cursor(15,6)
              << "???"
              << Term::move_cursor(17,6)
              << ">"
              << Term::move_cursor_right(15)
              << "<"
              << Term::move_cursor(8,20)
              << Term::color(Term::fg::red)
              << "<--"
              << Term::color(Term::bg::reset)
              << Term::color(Term::fg::reset)
              << std::flush;
}

void anim::snekAbout()
{
    std::cout << Term::move_cursor(6,6)
              << Term::color(Term::bg::reset)
              << Term::color(Term::fg::yellow)
              << Term::move_cursor(6,12)
              << "ABOUT"
              << Term::color(Term::fg::red)
              << Term::move_cursor(8,6)
              << "SNEK V1.1.0 is a "
              << Term::move_cursor(9,6)
              << "game developed by"
              << Term::move_cursor(10,6)
              << "BlackVyperStudios"
              << Term::move_cursor(11,6)
              << "and it's members:"
              << Term::move_cursor(12,6)
              << "~ Damon Leven"
              << Term::move_cursor(13,6)
              << "~ Alex Prosser"
              << Term::move_cursor(14,6)
              << "And all contribu-"
              << Term::move_cursor(15,6)
              << "tors on Github!"
              << Term::move_cursor(17, 7)
              << "    Press Q    "
              << Term::color(Term::bg::reset)
              << Term::color(Term::fg::reset)
              << std::flush;
}

void anim::snekHeader()
{
    utils::timer timer(70);

    std::cout << Term::color(Term::bg::reset)
              << Term::color(Term::fg::green)
              << Term::move_cursor(1,1)
              << " .----."
              << Term::move_cursor(2,1)
              << "{ {__  "
              << Term::move_cursor(3,1)
              << ".-._} }"
              << Term::move_cursor(4,1)
              << "`----' "
              << std::flush;
    while (!timer.done());
    timer.reset();
    std::cout << Term::move_cursor(1,8)
              << ".-. .-."
              << Term::move_cursor(2,8)
              << "|  `| |"
              << Term::move_cursor(3,8)
              << "| |\\  |"
              << Term::move_cursor(4,8)
              << "`-' `-'"
              << std::flush;
    while (!timer.done());
    timer.reset();
    std::cout << Term::move_cursor(1,15)
              << ".----."
              << Term::move_cursor(2,15)
              << "| {_  "
              << Term::move_cursor(3,15)
              << "| {__ "
              << Term::move_cursor(4,15)
              << "`----'"
              << std::flush;
    while (!timer.done());
    std::cout << Term::move_cursor(1,21)
              << ".-. .-."
              << Term::move_cursor(2,21)
              << "| |/ / "
              << Term::move_cursor(3,21)
              << "| |\\ \\ "
              << Term::move_cursor(4,21)
              << "`-' `-'"
              << std::flush
              << Term::color(Term::fg::reset)
              << Term::color(Term::bg::reset);
}


/* === sub menu ====
 *  .----..-. .-..----..-. .-.
 * { {__  |  `| || {_  | |/ /
 * .-._} }| |\  || {__ | |\ \
 * `----' `-' `-'`----'`-' `-'
 * ###########################
 * #      SINGLEPLAYER       #
 * #    Ooooooooooooooooo    #
 * #    Easy          <--    #
 * #    Normal        <--    #
 * #    hard          <--    #
 * #    Nightmare     <--    #
 * #    ==Special modes==    #
 * #    infinite mode <--    #
 * #    Chaos Mode    <--    #
 * #    creative Mode <--    #
 * #    ooooooooooooooooO    #
 * #    >               <    #
 * #                         #
 * ###########################
 */

/* === Text sub menu ===
 *  .----..-. .-..----..-. .-.
 * { {__  |  `| || {_  | |/ /
 * .-._} }| |\  || {__ | |\ \
 * `----' `-' `-'`----'`-' `-'
 * ###########################
 * #          ABOUT          #
 * #    Ooooooooooooooooo    #
 * #    SNEK V1.1.1 is a     #
 * #    game developed by    #
 * #    BlackVyperStudios    #
 * #    and it's members:    #
 * #    ~ Damon Leven        #
 * #    ~ Alex Prosser       #
 * #    And all contribu-    #
 * #    tors on Github!      #
 * #    ooooooooooooooooO    #
 * #    >  Press ENTER  <    #
 * #                         #
 * ###########################
 *
 * size: 15x27
 * inner size: 13x25
 */

 /* === settings sub menu ===
 *  .----..-. .-..----..-. .-.
 * { {__  |  `| || {_  | |/ /
 * .-._} }| |\  || {__ | |\ \
 * `----' `-' `-'`----'`-' `-'
 * ###########################
 * #                         #
 * #    Ooooooooooooooooo    #
 * #    Singleplayer  <--    #
 * #    Multiplayer   <--    #
 * #    Online Mode   <--    #
 * #    Settings      <--    #
 * #    Manual        <--    #
 * #    About         <--    #
 * #    License       <--    #
 * #    ???           <--    #
 * #    ooooooooooooooooO    #
 * #    >               <    #
 * #                         #
 * ###########################
 *
 * size: 15x27
 * inner size: 13x25
 *
 */

void draw::snekMenuBase()
{
    std::cout << Term::move_cursor(7,6)
              << Term::color(Term::fg::green)
              << Term::color(Term::bg::reset)
              << "Ooooooooooooooooo"
              << Term::color(Term::fg::blue)
              << Term::move_cursor(8,6)
              << "Singleplayer"
              << Term::move_cursor(9,6)
              << "Multiplayer"
              << Term::move_cursor(10,6)
              << "Online Mode"
              << Term::move_cursor(11,6)
              << "Settings"
              << Term::move_cursor(12,6)
              << "Manual"
              << Term::move_cursor(13,6)
              << "About"
              << Term::move_cursor(14,6)
              << "License"
              << Term::move_cursor(15,6)
              << "???"
              << Term::color(Term::fg::green)
              << Term::move_cursor(16,6)
              << "ooooooooooooooooO"
              << Term::color(Term::fg::blue)
              << Term::move_cursor(17,6)
              << ">               <"
              << Term::color(Term::fg::reset)
              << std::flush;
}
void draw::clearField()
{
    std::cout << Term::color(Term::fg::reset)
              << Term::color(Term::bg::reset);
    for(unsigned short int i = 0; i < 13; i++)
    {
        std::cout << Term::move_cursor(6 + i, 2)
                  << "                         ";
    }
    std::cout << std::flush;
}
void draw::dummyField()
{

}
