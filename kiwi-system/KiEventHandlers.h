#pragma once

#include <SFML/Window.hpp>
#include <cstdint>

namespace kiwi
{
    namespace EventHandler
    {
        class Closed
        {
            public:
                /**
                 * @brief handles a WindowClosed event
                 */
            virtual void handleClosedEvent() = 0;
        };

        class Resized
        {
            public:
                /**
                 * @brief handles a WindowResized event
                 *
                 * @param width: the new width (in pixels)
                 * @param height: the new height (in pixels)
                 */
            virtual void handleResizedEvent(unsigned int width, unsigned int height) = 0;
        };

        class LostFocus
        {
            public:
                /**
                 * @brief handles a WindowLostFocus event
                 */
            virtual void handleLostFocusEvent() = 0;
        };

        class GainedFocus
        {
            public:
                /**
                 * @brief handles a WindowGainedFocus event
                 */
            virtual void handleGainedFocusEvent() = 0;
        };

        class TextEntered
        {
            public:
                /**
                 * @brief handles a TextEntered event
                 *
                 * @param unicode: the UTF-32 unicode value of the character entered
                 */
            virtual void handleTextEnteredEvent(uint32_t unicode) = 0;
        };

        class KeyPressed
        {
            public:
                /**
                 * @brief handles a KeyPressed event
                 *
                 * @param keyCode: code of the key that have been pressed
                 * @param alt: is the alt key pressed?
                 * @param control: is the ctrl key pressed?
                 * @param shift: is the shift key pressed?
                 * @param system: is the system key pressed?
                 */
            virtual void handleKeyPressedEvent(sf::Keyboard::Key keyCode, bool alt, bool control, bool shift, bool system) = 0;
        };

        class KeyReleased
        {
            public:
                /**
                 * @brief handles a keyReleased event
                 *
                 * @param keyCode: code of the key that have been pressed
                 * @param alt: is the alt key pressed?
                 * @param control: is the ctrl key pressed?
                 * @param shift: is the shift key pressed?
                 * @param system: is the system key pressed?
                 */
            virtual void handleKeyReleasedEvent(sf::Keyboard::Key keyCode, bool alt, bool control, bool shift, bool system) = 0;
        };

        class MouseWheelScrolled
        {
            public:
                /**
                 * @brief handles a MouseWheelScrolled event
                 *
                 * @param wheel: which wheel (for mices with multiple wheels) have been scrolled
                 * @param delta: wheel offset (positive if up/left, negative is down/right) (might be non-integer for high-precision wheels)
                 * @param x: X position of the mouse pointer, relative to the left of the window
                 * @param y: Y position of the mouse pointer, relative to the top of the window
                 */
            virtual void handleMouseWheelScrolledEvent(sf::Mouse::Wheel wheel, float delta, int x, int y) = 0;
        };

        class MouseButtonPressed
        {
            public:
                /**
                 * @brief handles a MouseButtonPressed event
                 *
                 * @param button: code of the button that have been pressed
                 * @param x: X position of the mouse pointer, relative to the left of the window
                 * @param y: Y position of the mouse pointer, relative to the top of the window
                 */
            virtual void handleMouseButtonPressedEvent(sf::Mouse::Button button, int x, int y) = 0;
        };

        class MouseButtonReleased
        {
            public:
                /**
                 * @brief handles a MouseButtonReleased event
                 *
                 * @param button: code of the button that have been pressed
                 * @param x: X position of the mouse pointer, relative to the left of the window
                 * @param y: Y position of the mouse pointer, relative to the top of the window
                 */
            virtual void handleMouseButtonReleasedEvent(sf::Mouse::Button button, int x, int y) = 0;
        };

        class MouseMoved
        {
            public:
                /**
                 * @brief handles a MouseMoved event
                 *
                 * @param x: X position of the mouse pointer, relative to the left of the window
                 * @param y: Y position of the mouse pointer, relative to the top of the window
                 */
            virtual void handleMouseMovedEvent(int x, int y) = 0;
        };

        class MouseEntered
        {
            public:
                /**
                 * @brief handles a MouseEntered event (when the mouse enters a window)
                 */
            virtual void handleMouseEnteredEvent() = 0;
        };

        class MouseLeft
        {
            public:
                /**
                 * @brief handles a MouseLeft event (when the mouse leaves a window)
                 */
            virtual void handleMouseLeftEvent() = 0;
        };

        class JoystickButtonPressed
        {
            public:
                /**
                 * @brief handles a JoystickButtonPressed event
                 *
                 * @param jostickId: index of the joystick (between 0 and sf::Joystick::Count-1)
                 * @param button: index of the button that triggered the event (between 0 and sf::Joystick::ButtonCount-1)
                 */
            virtual void handleJoystickButtonPressedEvent(unsigned int jostickId, unsigned int button) = 0;
        };

        class JoystickButtonReleased
        {
            public:
                /**
                 * @brief handles a JoystickButtonReleased event
                 *
                 * @param jostickId: index of the joystick (between 0 and sf::Joystick::Count-1)
                 * @param button: index of the button that triggered the event (between 0 and sf::Joystick::ButtonCount-1)
                 */
            virtual void handleJoystickButtonReleasedEvent(unsigned int jostickId, unsigned int button) = 0;
        };

        class JoystickMoved
        {
            public:
                /**
                 * @brief handles a JoystickButtonMoved event
                 *
                 * @param jostickId: index of the joystick (between 0 and sf::Joystick::Count-1)
                 * @param button: index of the button that triggered the event (between 0 and sf::Joystick::ButtonCount-1)
                 */
            virtual void handleJoystickMovedEvent(unsigned int jostickId, sf::Joystick::Axis axis, float position) = 0;
        };

        class JoystickConnected
        {
            public:
                /**
                 * @brief handles a JoystickConnected event
                 *
                 * @param joystickId: index of the joystick (between 0 and sf::Joystick::Count-1)
                 */
            virtual void handleJoystickConnectedEvent(unsigned int joystickId) = 0;
        };

        class JoystickDisconnected
        {
            public:
                /**
                 * @brief handles a JoystickConnected event
                 *
                 * @param joystickId: index of the joystick (between 0 and sf::Joystick::Count-1)
                 */
            virtual void handleJoystickDisconnectedEvent(unsigned int jostickId) = 0;
        };

        class TouchBegan
        {
            public:
                /**
                 * @brief handles a TouchBegan event
                 *
                 * @param finger: index of the finger (multi-touch events)
                 * @param x: X position of the touch (relative to the left of the window)
                 * @param y: Y position of the touch (relative to the top of the window)
                 */
            virtual void handleTouchBeganEvent(unsigned int finger, int x, int y) = 0;
        };

        class TouchMoved
        {
            public:
                /**
                 * @brief handles a TouchMoved event
                 *
                 * @param finger: index of the finger (multi-touch events)
                 * @param x: X position of the touch (relative to the left of the window)
                 * @param y: Y position of the touch (relative to the top of the window)
                 */
            virtual void handleTouchMovedEvent(unsigned int finger, int x, int y) = 0;
        };

        class TouchEnded
        {
            public:
                /**
                 * @brief handles a TouchEnded event
                 *
                 * @param finger: index of the finger (multi-touch events)
                 * @param x: X position of the touch (relative to the left of the window)
                 * @param y: Y position of the touch (relative to the top of the window)
                 */
            virtual void handleTouchEndedEvent(unsigned int finger, int x, int y) = 0;
        };

        class SensorChanged
        {
            public:
                /**
                 * @brief handles a SensorChanged event
                 *
                 * @param sensorType: type of the sensor (Accelerometer, gyroscope, ...)
                 * @param x: current value of the sensor on the X axis
                 * @param y: current value of the sensor on the Y axis
                 * @param z: current value of the sensor on the Z axis
                 */
            virtual void handleSensorChangedEvent(sf::Sensor::Type sensorType, float x, float y, float z) = 0;
        }; 
    }
}
