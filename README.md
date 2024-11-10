# 74 Series IC Tester

This project implements a low-cost, embedded IC testing system using the STM32F407 microcontroller. The system allows users to test various 74-series ICs at the gate level, performing leakage and continuity tests to determine if an IC is functioning correctly.

---

## Table of Contents
- [Project Overview](#project-overview)
- [Problem Statement](#problem-statement)
- [Proposed System](#proposed-system)
- [System Design](#system-design)
- [Hardware Implementation](#hardware-implementation)
- [Software Implementation](#software-implementation)
- [Results](#results)


---

## Project Overview

This IC tester is a budget-friendly, easy-to-use tool for determining the functionality of 74-series logic ICs. The system interfaces with an STM32F407 microcontroller to apply required input conditions to ICs and compares the output with truth tables stored in memory. Results are displayed on an LCD, indicating whether each IC gate is operational or faulty.

## Problem Statement

Faulty ICs can lead to incorrect data analysis and wasted resources. This project aims to develop a compact, cost-effective IC testing solution that is both user-friendly and time-efficient. Unlike commercially available testers, this system offers a reconfigurable design that can be expanded to test additional ICs in the future.

## Proposed System

The proposed IC tester is designed to:
1. Perform continuity and leakage tests on 74-series ICs.
2. Display the IC number or an error message on an LCD if the IC is unrecognized.
3. Be easily expandable for testing additional IC types.

## System Design

The system includes:
1. **STM32F407 Platform**: The main controller for applying input signals and processing test results.
2. **IC Holder Socket**: A 40-pin socket for easy connection and replacement of ICs.
3. **4x4 Matrix Keypad**: Used for inputting IC numbers or identifying unknown ICs.
4. **16x2 LCD Module**: Displays test results, showing each gate as "OK" or "NOT OK" based on its output compared to expected results in the truth table.

### Flowchart

The testing process follows a flowchart where the user enters the IC number. The system retrieves the relevant truth table and applies test signals to each gate of the IC. Test results are displayed on the LCD.

## Hardware Implementation

The hardware setup consists of:
- **STM32F407 Microcontroller**: Interfaced with the IC holder, keypad, and LCD.
- **Keypad**: Allows users to enter the IC code or "XXXX" for unknown ICs.
- **LCD**: Displays IC number and testing results.

### Circuit Diagram

The circuit includes the STM32F407 platform connected to an IC holder, keypad, and LCD. Pins of the microcontroller are configured to apply input signals to IC gates and read output responses.

## Software Implementation

- **STM32F407 IDE**: Used to write and upload the code onto the STM32F407.
- **C Programming**: Code is written in C to handle input from the keypad, test signals, and display results.
- **Functionality**: Tests each gate of an IC based on truth tables stored in memory. For unidentified ICs, only the first gate of each IC in the database is checked to identify potential matches.

## Results

The IC tester successfully performs continuity and leakage tests on various 74-series ICs, including Logic Gates, Decoders and Inverters. The LCD displays gate-by-gate results as "OK" or "NOT OK," allowing users to quickly assess the IC’s status.

