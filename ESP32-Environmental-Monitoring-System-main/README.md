# ESP32-Based Environmental Monitoring System

An embedded environmental monitoring system built around the ESP32 microcontroller and DHT11 temperature and humidity sensor. The system acquires environmental data, processes sensor readings, and demonstrates an end-to-end embedded hardware development workflow, from circuit simulation and firmware development to PCB design and manufacturing file generation.

## Overview

This project explores the development of a microcontroller-based environmental monitoring system, with an emphasis on embedded programming, sensor interfacing, circuit design, and PCB development.

The ESP32 communicates with the DHT11 sensor to obtain temperature and humidity measurements. The firmware processes the readings and makes the data available for monitoring.

The hardware design was developed using KiCad, while Wokwi was used to simulate the circuit before potential physical implementation.

### Key Features

- Real-time temperature and humidity acquisition using a DHT11 sensor.
- Embedded firmware development using C/C++ and the Arduino framework.
- Sensor interfacing with the ESP32.
- Virtual circuit simulation using Wokwi.
- Schematic capture and PCB layout design using KiCad.
- PCB design-rule validation and Gerber file generation.

## System Architecture

The system consists of three primary components:

1. **ESP32 microcontroller:** Controls sensor communication and processes measurement data.
2. **DHT11 sensor:** Measures ambient temperature and relative humidity.
3. **Monitoring interface:** Displays or outputs sensor readings through the interface implemented in the firmware.

### Data Flow

`DHT11 Sensor → ESP32 → Data Processing → Serial Output / Configured Monitoring Interface`

The ESP32 reads measurements from the sensor, processes the data, and outputs the readings according to the firmware implementation.

## Hardware Components

| Component                        | Purpose                                       |
| -------------------------------- | --------------------------------------------- |
| ESP32-WROOM-32 development board | Main microcontroller platform                 |
| DHT11 sensor                     | Temperature and humidity measurement          |
| Connecting wires and connectors  | Electrical interconnections                   |
| Supporting passive components    | Circuit support, where required by the design |

Refer to the circuit schematic for the actual component connections and values.

## Tools and Technologies

| Tool / Technology | Application                              |
| ----------------- | ---------------------------------------- |
| ESP32             | Embedded processing                      |
| Embedded C/C++    | Firmware development                     |
| Arduino IDE       | Firmware development and compilation     |
| Wokwi             | Circuit and firmware simulation          |
| KiCad             | Schematic capture and PCB layout         |
| Gerber files      | PCB fabrication preparation              |
| Git and GitHub    | Source control and project documentation |

## Repository Structure

```text
ESP32-Environmental-Monitoring-System/
│
├── Arduino Code/
│   └── ESP32 Environmental Monitoring System.ino
│
├── Gerber/
│   └── PCB manufacturing output files
│
├── ESP32 Environmental Monitoring System.kicad_pro
├── ESP32 Environmental Monitoring System.kicad_sch
├── ESP32 Environmental Monitoring System.kicad_pcb
│
└── README.md
```

*The directory structure above describes the expected repository organization. File names and folders may differ in the actual repository.*

## Circuit Simulation

The circuit can be explored through the Wokwi online simulator.

**[Open the Wokwi Simulation](https://wokwi.com/projects/472157564927177729)**

The simulation can be used to examine the circuit configuration and observe firmware behavior without requiring physical electronic components.

Simulation results demonstrate the behavior supported by the virtual environment; they do not independently verify the performance of a fabricated circuit.

## PCB Design Workflow

The PCB design workflow uses KiCad to translate the circuit concept into a board layout.

The main stages include:

1. Creating the circuit schematic.
2. Assigning appropriate component footprints.
3. Transferring components and connections to the PCB editor.
4. Arranging components and routing signal and power connections.
5. Running electrical rule checks (ERC) and design rule checks (DRC).
6. Generating Gerber and drill files for potential manufacturing.

Gerber files represent manufacturing outputs and do not, by themselves, establish that the board has been fabricated or physically validated.

## Firmware Workflow

The firmware is developed using C/C++ with the Arduino framework.

The expected firmware workflow includes:

1. Initializing the ESP32 and sensor interface.
2. Reading temperature and humidity measurements from the DHT11.
3. Handling sensor initialization or measurement failures, where implemented.
4. Processing and formatting the readings.
5. Outputting the measurements through the configured monitoring interface.

Refer to the Arduino source file for the implementation details and the interfaces actually supported by the firmware.

## Validation and Testing

The project can be evaluated through simulation, firmware compilation, and PCB design checks.

| Validation activity   | Purpose                                          |
| --------------------- | ------------------------------------------------ |
| Firmware compilation  | Identify build errors                            |
| Wokwi simulation      | Examine simulated circuit and firmware behavior  |
| Sensor-reading checks | Verify expected behavior within the simulation   |
| KiCad ERC             | Identify electrical schematic issues             |
| KiCad DRC             | Check PCB layout against configured design rules |
| Gerber inspection     | Review manufacturing output files                |

Physical measurements, soldering validation, and hardware bring-up require a fabricated and assembled board. These should be documented separately if performed.

## Project Scope and Limitations

This project focuses on the fundamentals of embedded electronics development, including microcontroller programming, sensor interfacing, circuit simulation, and PCB design.

The current design uses a DHT11 sensor and is intended as a foundational environmental monitoring application. Wireless communication, battery-powered operation, and advanced power optimization are possible future extensions rather than assumed features.

## Future Improvements

- Add wireless data transmission using ESP32 Wi-Fi or Bluetooth Low Energy.
- Introduce configurable sensor sampling intervals.
- Evaluate low-power operating modes.
- Add a graphical dashboard for environmental measurements.
- Extend sensor error handling and data validation.
- Fabricate and assemble the PCB for physical testing.
- Measure power consumption and validate system performance on hardware.

## License

Refer to the repository's license file for the applicable terms governing use, modification, and redistribution.
