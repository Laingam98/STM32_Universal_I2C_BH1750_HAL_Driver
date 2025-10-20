# STM32 Universal I2C BH1750 HAL Driver (Portable Embedded C) 

This project provides a **portable, high-performance driver** for the BH1750 Ambient Light Sensor, designed for use across the entire **STM32 microcontroller family** using the **STM32 HAL Library**.

The driver is written in clean, universal Embedded C, ensuring easy migration between different STM32 development boards (Nucleo, Discovery, Custom) by simply reconfiguring the I2C pins in STM32CubeIDE.

---

## 🛠 Project Components & Keywords

* **Target MCU Family:** STM32L4, STM32F4, etc. (Universal Design)
* **Sensor:** BH1750 Digital Ambient Light Sensor
* **Protocol:** **I2C Communication** (Master Mode)
* **Libraries:** STM32 Hardware Abstraction Layer (HAL)
* **Language:** Embedded C/C++
* **Functionality:** Direct measurement output in **Lux (lx)** units.

## ⚙️ Universal Portability Guide

The strength of this driver lies in its portability. To adapt this code to any STM32 board:

1.  **I2C Reconfiguration:** In STM32CubeIDE, enable the desired I2C peripheral (e.g., I2C1, I2C3) and map the SCL and SDA pins to the physical pins on your target board.
2.  **Code Linkage:** The driver (`BH1750.h`) only requires the `I2C_HandleTypeDef` structure, ensuring a clean, universal interface across all HAL versions.

*(Insert your screenshots here: Configuration, Code Snippet, and Serial Output.)*

## 🔗 Connect with the Embedded Engineer

If this code helped your project, connect to discuss Embedded Systems and Edge AI:

* [**LinkedIn Profile**](https://www.linkedin.com/in/laingam98) (Embedded Systems Engineer | Edge AI Deployment)
