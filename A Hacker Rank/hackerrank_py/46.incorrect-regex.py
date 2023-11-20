# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

def is_valid_regex(pattern):
    try:
        re.compile(pattern)
        return True
    except re.error:
        return False

def main():
    # Input the number of test cases
    num_test_cases = int(input())

    # Process each test case
    for _ in range(num_test_cases):
        # Input the regex pattern
        pattern = input()

        # Check if the regex is valid and print the result
        print(is_valid_regex(pattern))

if __name__ == "__main__":
    main()

"""
Input (stdin)
2
.*\+
.*+
Expected Output
True
False

"""