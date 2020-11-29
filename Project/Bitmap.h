#pragma once

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// INCLUDES /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include "Rectangle.h"

///////////////////////////////////////////////////////////////////////////////
/////////////////////////// CLASSES/STRUCTURES ////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

class Bitmap : public Rectangle
{
    public:
        const uint16_t * Data     = nullptr;
        bool             IsButton = false;
        uint8_t          Id       = 0;

        Bitmap () = default;
        virtual ~Bitmap () = default;
        virtual void Redraw (const uint8_t v_id, const Rectangle::Coordinates & v_coordinates) = 0;
};

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
