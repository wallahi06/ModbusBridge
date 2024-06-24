# Modbus TCP Bridge for Arduino
This project provides an implementation of a Bridge class for Arduino to facilitate communication between two Modbus TCP servers. The Bridge class allows the Arduino to act as an intermediary, bridging various types of Modbus data (coils, discrete inputs, holding registers, and input registers) between the two servers. This approach is useful in scenarios where direct communication between servers is not possible due to network constraints, protocol differences, or security policies.
## Features
Flexible Bridging Methods: Bridge coils, discrete inputs, holding registers, and input registers between two Modbus TCP servers.
Customizable Interval: Set the interval for bridging operations to control the frequency of data transfer.
Dynamic Method Selection: Choose the appropriate bridging method dynamically within the Arduino loop.
Modular Design: Encapsulated timing and logic within the Bridge class for clean and maintainable code.
