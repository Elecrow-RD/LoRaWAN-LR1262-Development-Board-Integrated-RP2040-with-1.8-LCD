### 1, Product picture

![crt01267d_lora_lr1262_dev_board_1](https://github.com/user-attachments/assets/5869e385-6278-4b3a-b4b7-b36f9769b094)


### 2, Product version number

|      | Hardware | Software | Remark |
| ---- | -------- | -------- | ------ |
| 1    | V1.0     | V1.0     | latest |

### 3, product information

#### Display Module Specifications

**GPIO Pin Definition**

| RP2040 | LR1262 Development Board                 |        |                                         |
| ------ | ---------------------------------------- | ------ | --------------------------------------- |
| GPIO0  | LR1262-RXD                               | GPIO15 | GPIO15/ Crowtail-D1                     |
| GPIO1  | LR1262-TXD                               | GPIO16 | LCD-DC                                  |
| GPIO2  | GPIO2                                    | GPIO17 | LCD-CS                                  |
| GPIO3  | GPIO3                                    | GPIO18 | LCD-SCK                                 |
| GPIO4  | Crowtail-UART1-TXD                       | GPIO19 | LCD-DIN                                 |
| GPIO5  | Crowtail-UART1-RXD                       | GPIO20 | I2C0-SDA0/Crowtail-I2C-SDA/PCA9555-SDA  |
| GPIO6  | GPIO6                                    | GPIO21 | I2C0-SCL0/Crowtail-I2C-SCL/ PCA9555-SCL |
| GPIO7  | GPIO7                                    | GPIO22 | LCD-RST                                 |
| GPIO8  | GPIO8/UART1-TX1/Crowtail-UART1-TX1/485TX | GPIO23 | LCD-BLK                                 |
| GPIO9  | GPIO9/UART1-RX1Crowtail-UART1-RX1/485RX  | GPIO24 | 485-EN                                  |
| GPIO10 | GPIO10/SPI1-SCK                          | GPIO25 | DATA                                    |
| GPIO11 | GPIO11/SPI1-MOSI                         | GPIO26 | A0/ Crowtail-A0                         |
| GPIO12 | GPIO12/SPI1-MISO                         | GPIO27 | A1/ Crowtail-A1                         |
| GPIO13 | GPIO13/SPI1-CS                           | GPIO28 | BUZZER                                  |
| GPIO14 | GPIO14/ Crowtail-D0                      | GPIO29 | ADC-KEY                                 |

 

 

## Feature

- Uses RP2040 as the main controller, with two 32-bit ARM Cortex M0+ processor cores (dual-core) ,and provides more powerful performance
- Integrates the LR1262 module supports the 868/915MHz frequency band and AT command control
- Abundant external interface resources, compatible with Crowtail series modules and other commonly interface modules on the market
- Integrates commonly used functionslike buzzer, LED light, LCD display and custom button, making it more concise and convenient when creating projects
- Onboard 1.8-inch 128*160 SPI-TFT-LCD, ST7735S driver chip
- Compatible with Arduino/Micropython, easy to carry out different projects.

 

## Specification

| Main Chip                      | Raspberry Pi chip RP2040, built-in 264KB SRAM, onboard 4MB Flash |
| ------------------------------ | ------------------------------------------------------------ |
| Processor                      | Dual Core Arm Cortex-M0+ @ 133MHz                            |
| LR1262 Supports frequency band | 803MHZ-930MHZ                                                |
| LR1262 Support Interface       | External antenna, SMA interface or IPEX first generation interface |
| LCD Display                    | Onboard 1.8-inch 128*160SPI-TFT-LCD                          |
| LCD Resolution                 | 128*160                                                      |
| LCD Driver                     | ST7735S (4-wire SPI)                                         |
| Development environment        | Arduino/Micropython                                          |
| Interface                      | 1x RS485 communication interface,8x 5V Crowtail interfaces (2x analog interfaces, 2xdigital interfaces, 2xUART interfaces, 2xIIC interfaces)12x 5V universal pin header IO interfaces14x 3.3V universal pin header IO interfaces1x 3.3V/5V switchable SPI interface1x 3.3V/5V switchable UART interface3x 3.3V/5V switchable IIC interfaces |
| Buttons and functions          | 1x passive buzzer,4x user-defined buttons,6x programmable LEDs |
| Working input voltage          | USB 5V-1A                                                    |
| Operating temperature          | -10°C ~ 65°C                                                 |
| Dimensions                     | 102mm(L)x76.5mm(W)                                           |



### 4,Quick Start

##### Arduino IDE starts

STEP1 Configure controller board&communication port
On top of the Arduino IDE, click “Tools>Board>” and select “*Rasperry Pi RP2040 Boards*” from the available options
![Lora RA-08H 1 7.png](https://www.elecrow.com/wiki/image/0/08/Lora_RA-08H_1_7.png)
STEP2 Select the COM port that indicates Rasperry Pi RP2040 Boards. Please note that the actual numbers after the “COM” word will vary from computer to computer, so they could be different from the ones shown in the figure.

### 6,Folder structure.

|--Datasheet: Includes datasheets for components used in the project, providing detailed specifications, electrical characteristics, and pin configurations.

|--Eagle_SCH&PCB: Contains **Eagle CAD** schematic (`.sch`) and PCB layout (`.brd`) files. These are used for circuit design and PCB manufacturing.

|--example: Provides example code and projects to demonstrate how to use the hardware and libraries. These examples help users get started quickly.

|--factory_firmware: Stores pre-compiled factory firmware that can be directly flashed onto the device. This ensures the device runs the default functionality.
