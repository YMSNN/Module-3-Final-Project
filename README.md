# Simple Interest Calculator

This project provides a simple interest calculator implemented in Bash and C++. It allows users to input a principal amount, annual interest rate, and time duration to calculate the simple interest and total amount.

## Features
- Takes user input for principal, interest rate, and time.
- Calculates simple interest using the formula:
  ```
  Simple Interest = (Principal * Rate * Time) / 100
  ```
- Displays the calculated interest and total amount.
- Supports both Bash and C++ implementations.

## Usage

### Bash Script
1. Clone the repository:
   ```sh
   git clone https://github.com/YSMNN/Module-3-Final-Project.git
   cd simple-interest-calculator
   ```
2. Make the script executable:
   ```sh
   chmod +x simple-interest.sh
   ```
3. Run the script:
   ```sh
   ./simple-interest.sh
   ```

### C++ Program
1. Compile the C++ file:
   ```sh
   g++ simple_interest.cpp -o simple_interest
   ```
2. Run the compiled program:
   ```sh
   ./simple_interest
   ```

## Example Output
```
Enter principal amount: 1000
Enter annual interest rate (in %): 5
Enter time (in years): 2
Simple Interest: 100.00
Total Amount after 2 years: 1100.00
```

## Contributing
Contributions are welcome! Please check the [CONTRIBUTING.md](CONTRIBUTING.md) file for guidelines.

## License
This project is open-source and available under the MIT License.

