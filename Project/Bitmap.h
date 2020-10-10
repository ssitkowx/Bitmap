#pragma once

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// INCLUDES /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include <stdint.h>

///////////////////////////////////////////////////////////////////////////////
/////////////////////////// CLASSES/STRUCTURES ////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

class Bitmap
{
    public:
        struct Rectangle
        {
            struct
            {
                uint16_t Width;
                uint16_t Height;
            } Dimension;

            struct
            {
                uint16_t X;
                uint16_t Y;
            } Coordinate;

            uint16_t * Data;
        } Rect;

        explicit Bitmap (const Rectangle & v_rect) : Rect (v_rect) { }
        virtual ~Bitmap () = default;

        virtual void Redraw (const Rectangle & v_rect) = 0;
};

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////