# REVERSCRIPT

A C program that encrypt private files. txt and csv and markdown files are supported.

## Table of Contents
1. Description
2. Features
3. Installation
4. Examples
5. COntributing
6. License


### Features
* User Input: Accept input from user from stdout. For smooth running, Preferably from text, csv or markdown format.
* Text reversal: For optimum security, Reverses the order of characters in the input text.
* Encryption: After reversal, applies encription. Accept input from user.
* Decryption: After reversal and encription. The rich texts can be reformatted to human language.

> Note : After encryption of text: It is at users risk if the secret code for encryption is lost. This would cause perment lose of original file.

## Installation

* Clone the program directory

```bash
git clone https://github.com/Patoski-patoski/Reverscript.git 
```

* Change into the project directory
```bash
cd Reverscript
```

### Usage
```bash
make launch && ./launch < total.txt > newencrypted.txt 144
```
 The command line arguments above is used to launch the program
 1. make launch: launch the prgram
 2. && ./launch: and execute
 3. < total.txt: take user input from a file called 'total.txt'
4. (> newencrypted.txt): to display the executable in the newencrypted.txt file
 5. 144: The secret code of encryption. 

User may use the secretcode, stdin and stdout stream
of their choice to encrypt/decrypt. Use the same code for encryption and decryption.


### Examples 
1. Prompt for encryption
![terminal display](./resources/my%20main.png)

2. Result
![encryption display](./resources/encrypt.png)

### Contributing
The program is free to the public for updates, bug-fixes and pull-requests are welcomed by the owners of this software.
