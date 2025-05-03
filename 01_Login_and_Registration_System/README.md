# Login and Registration System

A simple console-based login and registration system implemented in C++. The system allows users to register new accounts, login with existing credentials, and recover forgotten passwords.

## Demonstration

![Login System Demo](../assets/login-system-demo.gif)

## Features

- User Registration
- User Login
- Password Recovery
- Data persistence using text file storage
- Simple console-based menu interface

## How to Use

1. **Registration**
   - Select option 2 from the main menu
   - Enter a username and password
   - Your credentials will be stored in records.txt

2. **Login**
   - Select option 1 from the main menu
   - Enter your username and password
   - System will verify your credentials

3. **Forgot Password**
   - Select option 3 from the main menu
   - Enter your username
   - System will display your password if the account exists

4. **Exit**
   - Select option 4 to exit the program

## Technical Details

- Language: C++
- Data Storage: Plain text file (records.txt)
- Build System: Standard C++ compiler

## Compilation Instructions

```bash
g++ main.cpp -o main
./main
```

## Security Note

This is a basic implementation for learning purposes. In a production environment, the following security measures should be considered:


## Development

Feel free to contribute to this project by:
- Adding new features
- Improving security measures
- Enhancing the user interface
- Fixing bugs or issues

## License

This project is open source and available for educational purposes.