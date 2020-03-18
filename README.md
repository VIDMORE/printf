# _printf
####  March, 2020.

The ```_printf``` program,  is a simulation of the real ```printf``` function. It is used to print the character, string, float, integer, octal and hexadecimal values onto the output screen.

### Prototype 
```bash
int _printf(const char *, ...);
```

### Format Specifiers:

Identifier | Input | Output
| --- | --- | --- |
%c | "This is a char: [%c]\n", 'C' | This is a char: [C]
%s | "This is a string: [%s]\n", "Hello World" | This is a string: [Hello World])
%d or %i | "This is a number: [%i]\n", 20 | This is a number: [20]
%u | "Unsigned wNeg (with Negative): [%u], -123" | Unsigned wNeg (with Negative): [4294967173]
%o | "98 in octal notation is: [%o], 98" | 98 in octal notation is: [142]
%X | "2035495 in hexadecimal (X) notation is: [%X], 2035495" | 2035495 in hexadecimal (X) notation is: [1F0F27]
%% | "Printing a percentage: [%%]\n" | Printing a percentage: [%]

### Return Values:
* On success, it returns the number of characters printed (except the null byte).
* On failure returns (-1).

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
David Corredor | [GITHUB](https://github.com/VIDMORE)

Steven Brand   | [GITHUB](https://github.com/kajoomba99)
