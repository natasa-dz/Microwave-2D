# 2D Microwave Simulation Project

This project is a 2D graphical simulation of a microwave with several interactive features, including a functional timer, interactive buttons, and realistic animations for microwave operation. It visually represents the functioning of a microwave oven, allowing users to set the cooking time, start, stop, reset, and simulate errors or malfunctions.

---

## Features

- **Microwave Door**:  
  The door is represented with semi-transparent light-blue glass, behind which is a plate of food.

- **Interior Light**:  
  A small round light inside the microwave illuminates while the microwave is in operation, lighting up the plate of food with its color.

- **Numerical Keypad**:  
  The microwave features a keypad for adjusting the cooking time (in minutes and seconds). The time is displayed on a text indicator.

- **Control Buttons**:  
  - **Start**: Starts the microwave and begins the countdown of the timer.
  - **Stop**: Stops the microwave’s operation.
  - **Reset**: Resets the timer to the initial state.

- **Real-Time Timer**:  
  The microwave timer decreases in real-time, and the input time is restricted to a format of **MM:SS**.

- **Completion Indicator**:  
  A lamp on the outside of the microwave lights up once the timer reaches 0, indicating the microwave has finished. The lamp pulses while the microwave is operating.

- **Door Operation**:  
  - Press the "O" button to open the microwave door.
  - Press the "Z" button to close it.
  - Opening the door stops the microwave, and it can't be started until the door is closed.

- **Microwave Malfunction (Error State)**:  
  Pressing the "X" button simulates a microwave malfunction. The scene darkens gradually, and a dim effect appears. The light in the microwave turns off, and the microwave stops working. The timer displays **ERROR** and blinks. The microwave cannot be started again until it is serviced.

- **Servicing Mode**:  
  A service button resets the microwave, turning the scene back to its initial state with the timer set to “:”, the lights restored, and the smoke dissipated.

- **Interactive Glass Transparency**:  
  The transparency of the glass is enabled at the start and can be toggled with custom keys.

- **Credits**:  
  Display the user's name, surname, and index number in any corner of the screen.

---

## Requirements

- **Programming Language**:  
  The project is implemented using **OpenGL** for the 2D graphical simulation.

- **Graphics**:  
  The scene includes animated elements such as the microwave door, timer countdown, error states, and visual effects for malfunctions.

- **Controls**:  
  - **O**: Open microwave door.
  - **Z**: Close microwave door.
  - **Start**: Begin microwave operation.
  - **Stop**: Stop microwave operation.
  - **Reset**: Reset the microwave timer.
  - **X**: Simulate a microwave malfunction (Error state).
  - **Service Button**: Activate servicing mode.

---

## Installation and Usage

1. **Clone the Repository**  
   To clone the project, use the following command:
   ```bash
   git clone https://github.com/yourusername/Microwave-2D.git
