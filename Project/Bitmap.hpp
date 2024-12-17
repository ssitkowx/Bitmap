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
        const uint16_t * Data = nullptr;
        uint16_t         Id   = 0;

        struct Dimensions
        {
            uint16_t Width;
            uint16_t Height;
        } Dimension;

        struct Coordinates
        {
            uint16_t X;
            uint16_t Y;
        } Coordinate;

        Bitmap () = default;
        virtual ~Bitmap () = default;

    protected:
        bool isTouched (const uint16_t vId, const Bitmap::Coordinates & vCoordinates)
        {
            return (( Id           == vId)                               &&
                    ( Coordinate.X <= vCoordinates.X)                    &&
                    ((Coordinate.X + Dimension.Width) >= vCoordinates.X) &&
                    ( Coordinate.Y <= vCoordinates.Y)                    &&
                    ((Coordinate.Y + Dimension.Height) >= vCoordinates.Y)) ? true : false;
        }
};

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
