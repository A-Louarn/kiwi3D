#include "KiEventDispacher.h"

using namespace kiwi;

EventDispacher::EventDispacher():
    m_closedEventHandler(nullptr),
    m_resizedEventHandler(nullptr),
    m_lostFocusEventHandler(nullptr),
    m_gainedFocusEventHandler(nullptr),
    m_textEnteredEventHandler(nullptr),
    m_keyPressedEventHandler(nullptr),
    m_keyReleasedEventHandler(nullptr),
    m_mouseWheelScrolledEventHandler(nullptr),
    m_mouseButtonPressedEventHandler(nullptr),
    m_mouseButtonReleasedEventHandler(nullptr),
    m_mouseMovedEventHandler(nullptr),
    m_mouseEnteredEventHandler(nullptr),
    m_mouseLeftEventHandler(nullptr),
    m_joystickButtonPressedEventHandler(nullptr),
    m_joystickButtonReleasedEventHandler(nullptr),
    m_joystickMovedEventHandler(nullptr),
    m_joystickConnectedEventHandler(nullptr),
    m_joystickDisconnectedEventHandler(nullptr),
    m_touchBeganEventHandler(nullptr),
    m_touchMovedEventHandler(nullptr),
    m_touchEndedEventHandler(nullptr),
    m_sensorChangedEventHandler(nullptr)
{}

void EventDispacher::handleEvent(sf::Event e) const
{
    switch(e.type)
    {
        case sf::Event::Closed:
            if(m_closedEventHandler != nullptr)
                m_closedEventHandler->handleClosedEvent();
            break;
        case sf::Event::Resized:
            if(m_resizedEventHandler != nullptr)
                m_resizedEventHandler->handleResizedEvent(e.size.width, e.size.height);
            break;
        case sf::Event::LostFocus:
            if(m_lostFocusEventHandler != nullptr)
                m_lostFocusEventHandler->handleLostFocusEvent();
            break;
        case sf::Event::GainedFocus:
            if(m_gainedFocusEventHandler != nullptr)
                m_gainedFocusEventHandler->handleGainedFocusEvent();
            break;
        case sf::Event::TextEntered:
            if(m_textEnteredEventHandler != nullptr)
                m_textEnteredEventHandler->handleTextEnteredEvent(e.text.unicode);
            break;
        case sf::Event::KeyPressed:
            if(m_keyPressedEventHandler != nullptr)
                m_keyPressedEventHandler->handleKeyPressedEvent(e.key.code, e.key.alt, e.key.control, e.key.shift, e.key.system);
            break;
        case sf::Event::KeyReleased:
            if(m_keyReleasedEventHandler != nullptr)
                m_keyReleasedEventHandler->handleKeyReleasedEvent(e.key.code, e.key.alt, e.key.control, e.key.shift, e.key.system);
            break;
        case sf::Event::MouseWheelScrolled:
            if(m_mouseWheelScrolledEventHandler != nullptr)
                m_mouseWheelScrolledEventHandler->handleMouseWheelScrolledEvent(e.mouseWheelScroll.wheel, e.mouseWheelScroll.delta, e.mouseWheelScroll.x, e.mouseWheelScroll.y);
            break;
        case sf::Event::MouseButtonPressed:
            if(m_mouseButtonPressedEventHandler != nullptr)
                m_mouseButtonPressedEventHandler->handleMouseButtonPressedEvent(e.mouseButton.button, e.mouseButton.x, e.mouseButton.y);
            break;
        case sf::Event::MouseButtonReleased:
            if(m_mouseButtonReleasedEventHandler != nullptr)
                m_mouseButtonReleasedEventHandler->handleMouseButtonReleasedEvent(e.mouseButton.button, e.mouseButton.x, e.mouseButton.y);
            break;
        case sf::Event::MouseMoved:
            if(m_mouseMovedEventHandler != nullptr)
                m_mouseMovedEventHandler->handleMouseMovedEvent(e.mouseMove.x, e.mouseMove.y);
            break;
        case sf::Event::MouseEntered:
            if(m_mouseEnteredEventHandler != nullptr)
                m_mouseEnteredEventHandler->handleMouseEnteredEvent();
            break;
        case sf::Event::MouseLeft:
            if(m_mouseLeftEventHandler != nullptr)
                m_mouseLeftEventHandler->handleMouseLeftEvent();
            break;
        case sf::Event::JoystickButtonPressed:
            if(m_joystickButtonPressedEventHandler != nullptr)
                m_joystickButtonPressedEventHandler->handleJoystickButtonPressedEvent(e.joystickButton.joystickId, e.joystickButton.button);
            break;
        case sf::Event::JoystickButtonReleased:
            if(m_joystickButtonReleasedEventHandler != nullptr)
                m_joystickButtonReleasedEventHandler->handleJoystickButtonReleasedEvent(e.joystickButton.joystickId, e.joystickButton.button);
            break;
        case sf::Event::JoystickMoved:
            if(m_joystickMovedEventHandler != nullptr)
                m_joystickMovedEventHandler->handleJoystickMovedEvent(e.joystickMove.joystickId, e.joystickMove.axis, e.joystickMove.position);
            break;
        case sf::Event::JoystickConnected:
            if(m_joystickConnectedEventHandler != nullptr)
                m_joystickConnectedEventHandler->handleJoystickConnectedEvent(e.joystickConnect.joystickId);
            break;
        case sf::Event::JoystickDisconnected:
            if(m_joystickDisconnectedEventHandler != nullptr)
                m_joystickDisconnectedEventHandler->handleJoystickDisconnectedEvent(e.joystickConnect.joystickId);
            break;
        case sf::Event::TouchBegan:
            if(m_touchBeganEventHandler != nullptr)
                m_touchBeganEventHandler->handleTouchBeganEvent(e.touch.finger, e.touch.x, e.touch.y);
            break;
        case sf::Event::TouchMoved:
            if(m_touchMovedEventHandler != nullptr)
                m_touchMovedEventHandler->handleTouchMovedEvent(e.touch.finger, e.touch.x, e.touch.y);
            break;
        case sf::Event::TouchEnded:
            if(m_touchEndedEventHandler != nullptr)
                m_touchEndedEventHandler->handleTouchEndedEvent(e.touch.finger, e.touch.x, e.touch.y);
            break;
        case sf::Event::SensorChanged:
            if(m_sensorChangedEventHandler != nullptr)
                m_sensorChangedEventHandler->handleSensorChangedEvent(e.sensor.type, e.sensor.x, e.sensor.y, e.sensor.z);
            break;
        default:
            break;
    }
}

void EventDispacher::setClosedEventHandler(kiwi::EventHandler::Closed * closedEventHandler)
{m_closedEventHandler = closedEventHandler;}

void EventDispacher::setResizedEventHandler(kiwi::EventHandler::Resized * resizedEventHandler)
{m_resizedEventHandler = resizedEventHandler;}

void EventDispacher::setLostFocusEventHandler(kiwi::EventHandler::LostFocus * lostFocusEventHandler)
{m_lostFocusEventHandler = lostFocusEventHandler;}

void EventDispacher::setGainedFocusEventHandler(kiwi::EventHandler::GainedFocus * gainedFocusEventHandler)
{m_gainedFocusEventHandler = gainedFocusEventHandler;}

void EventDispacher::setTextEnteredEventHandler(kiwi::EventHandler::TextEntered * textEnteredEventHandler)
{m_textEnteredEventHandler = textEnteredEventHandler;}

void EventDispacher::setKeyPressedEventHandler(kiwi::EventHandler::KeyPressed * keyPressedEventHandler)
{m_keyPressedEventHandler = keyPressedEventHandler;}

void EventDispacher::setKeyReleasedEventHandler(kiwi::EventHandler::KeyReleased * keyReleasedEventHandler)
{m_keyReleasedEventHandler = keyReleasedEventHandler;}

void EventDispacher::setMouseWheelScrolledEventHandler(kiwi::EventHandler::MouseWheelScrolled * mouseWheelScrolledEventHandler)
{m_mouseWheelScrolledEventHandler = m_mouseWheelScrolledEventHandler;}

void EventDispacher::setMouseButtonPressedEventHandler(kiwi::EventHandler::MouseButtonPressed * mouseButtonPressedEventHandler)
{m_mouseButtonPressedEventHandler = mouseButtonPressedEventHandler;}

void EventDispacher::setMouseButtonReleasedEventHandler(kiwi::EventHandler::MouseButtonReleased * mouseButtonReleasedEventHandler)
{m_mouseButtonReleasedEventHandler = mouseButtonReleasedEventHandler;}

void EventDispacher::setMouseMovedEventHandler(kiwi::EventHandler::MouseMoved * mouseMovedEventHandler)
{m_mouseMovedEventHandler = mouseMovedEventHandler;}

void EventDispacher::setMouseEnteredEventHandler(kiwi::EventHandler::MouseEntered * mouseEnteredEventHandler)
{m_mouseEnteredEventHandler = mouseEnteredEventHandler;}

void EventDispacher::setMouseLeftEventHandler(kiwi::EventHandler::MouseLeft * mouseLeftEventHandler)
{m_mouseLeftEventHandler = m_mouseLeftEventHandler;}

void EventDispacher::setJoystickButtonPressedEventHandler(kiwi::EventHandler::JoystickButtonPressed * joystickButtonPressedEventHandler)
{m_joystickButtonPressedEventHandler = joystickButtonPressedEventHandler;}

void EventDispacher::setJoystickButtonReleasedEventHandler(kiwi::EventHandler::JoystickButtonReleased * joystickButtonReleasedEventHandler)
{m_joystickButtonReleasedEventHandler = joystickButtonReleasedEventHandler;}

void EventDispacher::setJoystickMovedEventHandler(kiwi::EventHandler::JoystickMoved * joystickMovedEventHandler)
{m_joystickMovedEventHandler = joystickMovedEventHandler;}

void EventDispacher::setJoystickConnectedEventHandler(kiwi::EventHandler::JoystickConnected * joystickConnectedEventHandler)
{m_joystickConnectedEventHandler = joystickConnectedEventHandler;}

void EventDispacher::setJoystickDisconnectedEventHandler(kiwi::EventHandler::JoystickDisconnected * joystickDisconnectedEventHandler)
{m_joystickDisconnectedEventHandler = joystickDisconnectedEventHandler;}

void EventDispacher::setTouchBeganEventHandler(kiwi::EventHandler::TouchBegan * touchBeganEventHandler)
{m_touchBeganEventHandler = touchBeganEventHandler;}

void EventDispacher::setTouchMovedEventHandler(kiwi::EventHandler::TouchMoved * touchMovedEventHandler)
{m_touchMovedEventHandler = touchMovedEventHandler;}

void EventDispacher::setTouchEndedEventHandler(kiwi::EventHandler::TouchEnded * touchEndedEventHandler)
{m_touchEndedEventHandler = touchEndedEventHandler;}

void EventDispacher::setSensorChangedEventHandler(kiwi::EventHandler::SensorChanged * sensorChangedEventHandler)
{m_sensorChangedEventHandler = sensorChangedEventHandler;}


kiwi::EventHandler::Closed * EventDispacher::getClosedEventHandler() const
{return m_closedEventHandler;}

kiwi::EventHandler::Resized * EventDispacher::getResizedEventHandler() const
{return m_resizedEventHandler;}

kiwi::EventHandler::LostFocus * EventDispacher::getLostFocusEventHandler() const
{return m_lostFocusEventHandler;}

kiwi::EventHandler::GainedFocus * EventDispacher::getGainedFocusEventHandler() const
{return m_gainedFocusEventHandler;}

kiwi::EventHandler::TextEntered * EventDispacher::getTextEnteredEventHandler() const
{return m_textEnteredEventHandler;}

kiwi::EventHandler::KeyPressed * EventDispacher::getKeyPressedEventHandler() const
{return m_keyPressedEventHandler;}

kiwi::EventHandler::KeyReleased * EventDispacher::getKeyReleasedEventHandler() const
{return m_keyReleasedEventHandler;}

kiwi::EventHandler::MouseWheelScrolled * EventDispacher::getMouseWheelScrolledEventHandler() const
{return m_mouseWheelScrolledEventHandler;}

kiwi::EventHandler::MouseButtonPressed * EventDispacher::getMouseButtonPressedEventHandler() const
{return m_mouseButtonPressedEventHandler;}

kiwi::EventHandler::MouseButtonReleased * EventDispacher::getMouseButtonReleasedEventHandler() const
{return m_mouseButtonReleasedEventHandler;}

kiwi::EventHandler::MouseMoved * EventDispacher::getMouseMovedEventHandler() const
{return m_mouseMovedEventHandler;}

kiwi::EventHandler::MouseEntered * EventDispacher::getMouseEnteredEventHandler() const
{return m_mouseEnteredEventHandler;}

kiwi::EventHandler::MouseLeft * EventDispacher::getMouseLeftEventHandler() const
{return m_mouseLeftEventHandler;}

kiwi::EventHandler::JoystickButtonPressed * EventDispacher::getJoystickButtonPressedEventHandler() const
{return m_joystickButtonPressedEventHandler;}

kiwi::EventHandler::JoystickButtonReleased * EventDispacher::getJoystickButtonReleasedEventHandler() const
{return m_joystickButtonReleasedEventHandler;}

kiwi::EventHandler::JoystickMoved * EventDispacher::getJoystickMovedEventHandler() const
{return m_joystickMovedEventHandler;}

kiwi::EventHandler::JoystickConnected * EventDispacher::getJoystickConnectedEventHandler() const
{return m_joystickConnectedEventHandler;}

kiwi::EventHandler::JoystickDisconnected * EventDispacher::getJoystickDisconnectedEventHandler() const
{return m_joystickDisconnectedEventHandler;}

kiwi::EventHandler::TouchBegan * EventDispacher::getTouchBeganEventHandler() const
{return m_touchBeganEventHandler;}

kiwi::EventHandler::TouchMoved * EventDispacher::getTouchMovedEventHandler() const
{return m_touchMovedEventHandler;}

kiwi::EventHandler::TouchEnded * EventDispacher::getTouchEndedEventHandler() const
{return m_touchEndedEventHandler;}

kiwi::EventHandler::SensorChanged * EventDispacher::getSensorChangedEventHandler() const
{return m_sensorChangedEventHandler;}
