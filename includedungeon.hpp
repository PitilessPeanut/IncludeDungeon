/*
    You must add '#define INCLUDEDUNGEON_IMPLEMENTATION' before '#include'ing this in ONE source file.
    Like this:
        #define INCLUDEDUNGEON_IMPLEMENTATION
        #include "includedungeon.hpp"

    AUTHOR
        Pitiless Peanut (aka. Shaiden Spreitzer, Professor Peanut, etc...) of VECTORPHASE

    LICENSE
        MIT (See LICENSE)
*/

#ifndef INCLUDEDUNGEON_HPP
#define INCLUDEDUNGEON_HPP

#ifdef INCLUDEDUNGEON_IMPLEMENTATION


namespace include_dungeon {


/****************************************/
/*            color (for algorithm use) */
/****************************************/
    enum class Color : int { Red=0 };


/****************************************/
/*             "Segment" core primitive */
/****************************************/
    struct Segment
    {
        int size;
        Color color;
    };


} // namespace include_dungeon



#endif // INCLUDEDUNGEON_IMPLEMENTATION


#endif // INCLUDEDUNGEON_HPP
