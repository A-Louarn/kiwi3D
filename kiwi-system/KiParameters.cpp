#include "KiParameters.h"

using namespace kiwi;

Parameters::Parameters(std::string windowTitle, unsigned int width, unsigned int height):
    m_windowTitle(windowTitle),
    m_windowWidth(width),
    m_windowHeight(height)
{
}

std::string Parameters::windowTitle() const{return m_windowTitle;}
unsigned int Parameters::width() const{return m_windowWidth;}
unsigned int Parameters::height() const{return m_windowHeight;}
