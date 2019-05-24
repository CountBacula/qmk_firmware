#  CountBacula BFO9000 Layout
## Layout

### Colemak

* The 2U gaps in the layout are where the Pro Micro / LCD is mounted
* XX = KC_NO

```
,------.      ,----------------------------------+------+------.   ,------.      ,------------------------------------------------.
| Esc  |      |  Esc |  F1  |  F2  |  F3  |  F4  |  F5  |  XX  |   |  XX  |      |  F6  |  F7  |  F8  |  F9  | F10  | F11  |  F12 |
|------|      |------+------+------+------+------+------+------|   |------|      |------+------+------+------+------+------+------|
| PgUp |      |   `  |   1  |   2  |   3  |   4  |   5  |  XX  |   |  XX  |      |   6  |   7  |   8  |   9  |   0  |   -  |   =  |       
|------+------+------+------+------+------+------+------+------|   |------+------+------+------+------+------+------+------+------|
| PgDn |  Up  | Tab  |   A  |   R  |   S  |   T  |   D  | Del  |   | Bksp |   J  |   L  |   U  |   Y  |   ;  |   [  |   ]  |RGBHU |
|------+------+------+------+------+------+------+------+------|   |------+------+------+------+------+------+------+------+------|
| RGBP | Down |Shift |   Z  |   X  |   C  |   V  |   B  |Enter |   |Enter |   H  |   N  |   E  |   I  |   O  |   '  |Shift |RGBHD |
|------+------+------+------+------+------+------+------+------|   |------+------+------+------+------+------+------+------+------|
| Left |Right |Shift |   Q  |   W  |   F  |   P  |   G  |Enter |   |Enter |   K  |   M  |   ,  |   .  |   /  |   #  |Shift |RGBVU |
|------+------+------+------+------+------+------+------+------|   |------+------+------+------+------+------+------+------+------|
| RGBM |  XX  | Ctrl |  XX  |  XX  | Win  | Alt  |Space |Space |   |Space |Space | Alt  | Win  |  XX  |  XX  | Down | Ctrl |RGBVD |
`--------------------------------------------------------------'   `--------------------------------------------------------------'
```

## Layers

TBC

## Changes

The following changes to default configuration have been made:

MOUSEKEY_ENABLE  = no   # Mouse keys (-4700)  
CONSOLE_ENABLE   = yes  # Console for debug (+400)  
COMMAND_ENABLE   = no   # This is deprecated anyway  
RGBLIGHT_ENABLE  = yes  # Enable WS2812 RGB underlight  

RGB_ANIMATIONS is defined with RGBLED_NUM = 14  

I'm also hoping to move to I2C and build in 2x SSD1306 OLED LCDs in a similar fashion to the Helix board
