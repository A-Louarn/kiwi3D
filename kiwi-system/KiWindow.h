#pragma once

#include <SFML/Window.hpp>
#include "KiParameters.h"
#include "KiEventHandlers.h"
#include "KiEventDispacher.h"

/**
 * @brief class representing a window
 */
namespace kiwi
{
    class Window : public EventDispacher, public EventHandler::Closed
    {
        public:
            /**
             * @brief creates the whole environment for the window (but do not display it)
             */
        Window(Parameters * params);

        /**
         * @brief draws the window and reacts to events
         *
         * @return EXIT_SUCCESS or EXIT_FAILURE, depending on the state of the application
         */
        int exec();

        private:
        /**
         * @brief draws the window
         */
        virtual void draw() = 0;

        virtual void handleClosedEvent();

        protected:
        bool m_running;
        Parameters * m_params;
        sf::Window m_window;
    };
}
