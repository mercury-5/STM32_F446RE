# LCD Driver Library for STM32

## Introduction

This library provides a driver for controlling LCD displays via the I2C interface on STM32 microcontrollers. It supports features like custom characters, cursor control, and backlight control.

## Getting Started

### Prerequisites

- STM32 microcontroller with I2C support.
- Appropriate connections to an LCD display.
- STM32 development environment set up.

### Installation

Include the `lcd_driver.h` and `lcd_driver.c` files in your STM32 project. Ensure that you have set up the I2C communication correctly.

## Usage

### Initialization

#### `void LCD_Init(uint8_t rows)`

- Initializes the LCD.
- `rows`: Number of rows on the LCD (usually 1 or 2).

### Basic Functions

#### `void LCD_Clear()`

- Clears the LCD screen.

#### `void LCD_Home()`

- Moves the cursor to the home position.

#### `void LCD_SetCursor(uint8_t col, uint8_t row)`

- Sets the cursor position.
- `col`: Column (0 to 15).
- `row`: Row (0 for the first row, 1 for the second row in a 2-row display).

### Cursor and Display Control

#### `void LCD_NoDisplay()`

- Turns off the display.

#### `void LCD_Display()`

- Turns on the display.

#### `void LCD_NoCursor()`

- Hides the cursor.

#### `void LCD_Cursor()`

- Shows the cursor.

#### `void LCD_NoBlink()`

- Stops cursor blinking.

#### `void LCD_Blink()`

- Makes the cursor blink.

### Custom Characters

#### `void LCD_CreateSpecialChar(uint8_t location, uint8_t charmap[])`

- Creates a custom character.
- `location`: Location for the character (0 to 7).
- `charmap[]`: The character pattern as an array of 8 bytes.

#### `void LCD_PrintSpecialChar(uint8_t index)`

- Prints a custom character at the current cursor position.
- `index`: The location of the custom character (0 to 7).

## Contributing

We welcome contributions to this library. If you have any suggestions, bug reports, or feature requests, please open an issue or create a pull request.
