#include "KiWindow.h"

using namespace kiwi;

Window::Window(Parameters * params):
    m_params(params)
{
    this->setClosedEventHandler(this);
}

int Window::exec()
{
    m_window.create(sf::VideoMode(m_params->width(), m_params->height()), m_params->windowTitle());

    while(m_running)
    {
        sf::Event e;
        while(m_window.pollEvent(e))
        {
            handleEvent(e);
        }
    }
    m_window.close();

    return EXIT_SUCCESS;
}

void Window::handleClosedEvent()
{
    m_running = false;
}
