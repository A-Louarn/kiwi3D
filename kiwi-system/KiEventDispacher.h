#pragma once

#include "KiEventHandlers.h"
#include <SFML/Window.hpp>

namespace kiwi
{
    class EventDispacher
    {
        protected:
            EventDispacher();

            void handleEvent(sf::Event e) const;

        public:
            //setters
            void setClosedEventHandler(kiwi::EventHandler::Closed * closedEventHandler);
            void setResizedEventHandler(kiwi::EventHandler::Resized * resizedEventHandler);
            void setLostFocusEventHandler(kiwi::EventHandler::LostFocus * lostFocusEventHandler);
            void setGainedFocusEventHandler(kiwi::EventHandler::GainedFocus * gainedFocusEventHandler);
            void setTextEnteredEventHandler(kiwi::EventHandler::TextEntered * textEnteredEventHandler);
            void setKeyPressedEventHandler(kiwi::EventHandler::KeyPressed * keyPressedEventHandler);
            void setKeyReleasedEventHandler(kiwi::EventHandler::KeyReleased * keyReleasedEventHandler);
            void setMouseWheelScrolledEventHandler(kiwi::EventHandler::MouseWheelScrolled * mouseWheelScrolledEventHandler);
            void setMouseButtonPressedEventHandler(kiwi::EventHandler::MouseButtonPressed * mouseButtonPressedEventHandler);
            void setMouseButtonReleasedEventHandler(kiwi::EventHandler::MouseButtonReleased * mouseButtonReleasedEventHandler);
            void setMouseMovedEventHandler(kiwi::EventHandler::MouseMoved * mouseMovedEventHandler);
            void setMouseEnteredEventHandler(kiwi::EventHandler::MouseEntered * mouseEnteredEventHandler);
            void setMouseLeftEventHandler(kiwi::EventHandler::MouseLeft * mouseLeftEventHandler);
            void setJoystickButtonPressedEventHandler(kiwi::EventHandler::JoystickButtonPressed * joystickButtonPressedEventHandler);
            void setJoystickButtonReleasedEventHandler(kiwi::EventHandler::JoystickButtonReleased * joystickButtonReleasedEventHandler);
            void setJoystickMovedEventHandler(kiwi::EventHandler::JoystickMoved * joystickMovedEventHandler);
            void setJoystickConnectedEventHandler(kiwi::EventHandler::JoystickConnected * joystickConnectedEventHandler);
            void setJoystickDisconnectedEventHandler(kiwi::EventHandler::JoystickDisconnected * joystickDisconnectedEventHandler);
            void setTouchBeganEventHandler(kiwi::EventHandler::TouchBegan * touchBeganEventHandler);
            void setTouchMovedEventHandler(kiwi::EventHandler::TouchMoved * touchMovedEventHandler);
            void setTouchEndedEventHandler(kiwi::EventHandler::TouchEnded * touchEndedEventHandler);
            void setSensorChangedEventHandler(kiwi::EventHandler::SensorChanged * sensorChangedEventHandler);

            //getters
            kiwi::EventHandler::Closed * getClosedEventHandler() const;
            kiwi::EventHandler::Resized * getResizedEventHandler() const;
            kiwi::EventHandler::LostFocus * getLostFocusEventHandler() const;
            kiwi::EventHandler::GainedFocus * getGainedFocusEventHandler() const;
            kiwi::EventHandler::TextEntered * getTextEnteredEventHandler() const;
            kiwi::EventHandler::KeyPressed * getKeyPressedEventHandler() const;
            kiwi::EventHandler::KeyReleased * getKeyReleasedEventHandler() const;
            kiwi::EventHandler::MouseWheelScrolled * getMouseWheelScrolledEventHandler() const;
            kiwi::EventHandler::MouseButtonPressed * getMouseButtonPressedEventHandler() const;
            kiwi::EventHandler::MouseButtonReleased * getMouseButtonReleasedEventHandler() const;
            kiwi::EventHandler::MouseMoved * getMouseMovedEventHandler() const;
            kiwi::EventHandler::MouseEntered * getMouseEnteredEventHandler() const;
            kiwi::EventHandler::MouseLeft * getMouseLeftEventHandler() const;
            kiwi::EventHandler::JoystickButtonPressed * getJoystickButtonPressedEventHandler() const;
            kiwi::EventHandler::JoystickButtonReleased * getJoystickButtonReleasedEventHandler() const;
            kiwi::EventHandler::JoystickMoved * getJoystickMovedEventHandler() const;
            kiwi::EventHandler::JoystickConnected * getJoystickConnectedEventHandler() const;
            kiwi::EventHandler::JoystickDisconnected * getJoystickDisconnectedEventHandler() const;
            kiwi::EventHandler::TouchBegan * getTouchBeganEventHandler() const;
            kiwi::EventHandler::TouchMoved * getTouchMovedEventHandler() const;
            kiwi::EventHandler::TouchEnded * getTouchEndedEventHandler() const;
            kiwi::EventHandler::SensorChanged * getSensorChangedEventHandler() const;



        protected:
            kiwi::EventHandler::Closed * m_closedEventHandler;
            kiwi::EventHandler::Resized * m_resizedEventHandler;
            kiwi::EventHandler::LostFocus * m_lostFocusEventHandler;
            kiwi::EventHandler::GainedFocus * m_gainedFocusEventHandler;
            kiwi::EventHandler::TextEntered * m_textEnteredEventHandler;
            kiwi::EventHandler::KeyPressed * m_keyPressedEventHandler;
            kiwi::EventHandler::KeyReleased * m_keyReleasedEventHandler;
            kiwi::EventHandler::MouseWheelScrolled * m_mouseWheelScrolledEventHandler;
            kiwi::EventHandler::MouseButtonPressed * m_mouseButtonPressedEventHandler;
            kiwi::EventHandler::MouseButtonReleased * m_mouseButtonReleasedEventHandler;
            kiwi::EventHandler::MouseMoved * m_mouseMovedEventHandler;
            kiwi::EventHandler::MouseEntered * m_mouseEnteredEventHandler;
            kiwi::EventHandler::MouseLeft * m_mouseLeftEventHandler;
            kiwi::EventHandler::JoystickButtonPressed * m_joystickButtonPressedEventHandler;
            kiwi::EventHandler::JoystickButtonReleased * m_joystickButtonReleasedEventHandler;
            kiwi::EventHandler::JoystickMoved * m_joystickMovedEventHandler;
            kiwi::EventHandler::JoystickConnected * m_joystickConnectedEventHandler;
            kiwi::EventHandler::JoystickDisconnected * m_joystickDisconnectedEventHandler;
            kiwi::EventHandler::TouchBegan * m_touchBeganEventHandler;
            kiwi::EventHandler::TouchMoved * m_touchMovedEventHandler;
            kiwi::EventHandler::TouchEnded * m_touchEndedEventHandler;
            kiwi::EventHandler::SensorChanged * m_sensorChangedEventHandler;
    };
}
