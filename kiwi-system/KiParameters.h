#pragma once

#include <iostream>

namespace kiwi
{
    class Parameters
    {
        public:
            Parameters(std::string windowTitle = "Hello World", unsigned int width = 800, unsigned int height = 600);

            std::string windowTitle() const;
            unsigned int width() const;
            unsigned int height() const;

        private:
            std::string m_windowTitle;
            unsigned int m_windowWidth;
            unsigned int m_windowHeight;
    };
}
