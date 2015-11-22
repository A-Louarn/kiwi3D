#pragma once

#include <SFML/OpenGL.hpp>
#include "KiWindow.h"

namespace kiwi
{
    class WindowGL : public Window
    {
        public:
            WindowGL(Parameters * params);

            virtual void draw();
    };
}
