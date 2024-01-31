#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
string defangIPaddr(string address);
int subtractProductAndSum(int n);
int countNegatives(vector<vector<int>>& grid);
vector<int> smallerNumbersThanCurrent(vector<int>& nums);
int numIdenticalPairs(vector<int>& nums);
int diagonalSum(vector<vector<int>>& mat);
bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2);
int maximumWealth(vector<vector<int>>& accounts);
string interpret(string command);
int numberOfMatches(int n);
vector<int> getConcatenation(vector<int>& nums);
int finalValueAfterOperations(vector<string>& operations);
int sum(int num1, int num2);
int smallestEvenMultiple(int n);
vector<double> convertTemperature(double celsius);
int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target);
vector<int> findWordsContaining(vector<string>& words, char x);
bool isToeplitzMatrix(vector<vector<int>>& matrix);
int numJewelsInStones(string jewels, string stones);
vector<vector<int>> transpose(vector<vector<int>>& matrix);
int main()
{
    cout << "<This is a simple program including 20 functions>" << endl;
start:
    cout << "--------------------------------------------------------------" << endl;
    cout << "List of Functions: " << endl;
    cout << "1. Defanging an IP Address" << endl;
    cout << "2. Subtract the Product and Sum of Digits of an Integer" << endl;
    cout << "3. Count Negative Numbers in a Sorted Matrix" << endl;
    cout << "4. How Many Numbers Are Smaller Than the Current Number" << endl;
    cout << "5. Number of Good Pairs" << endl;
    cout << "6. Matrix Diagonal Sum" << endl;
    cout << "7. Check If Two String Arrays are Equivalent" << endl;
    cout << "8. Richest Customer Wealth" << endl;
    cout << "9. Interpret Command" << endl;
    cout << "10. Number of Matches Played in a Tournament" << endl;
    cout << "11. Concatenation of Arrays" << endl;
    cout << "12. Final Value of Variable After Performing Operations" << endl;
    cout << "13. Add Two Integers" << endl;
    cout << "14. Smallest Even Multiple" << endl;
    cout << "15. Convert Temperature" << endl;
    cout << "16. Number of Employees Who Met the Target" << endl;
    cout << "17. Find Words Containing Character" << endl;
    cout << "18. Toeplitx Matrix" << endl;
    cout << "19. Jewels and Stones" << endl;
    cout << "20. Transpose Matrix" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "The answer of which problem do you want: ";
    int a;
    cin >> a;
    switch (a) {
    case 1: {
        cout << "This function converts an undefanged IpAdress to defanged IpAdress.\n" << "--\n";
        string address;
        cout << "Type an adress: ";
        cin >> address;
        cout << "Undefanged IpAdress: " << address << endl;
        string defanged_ip = defangIPaddr(address);
        
        cout << "The defanged IpAddress is: " << defanged_ip;
        break;
    }
    case 2: {
        cout << "This functions returns the difference between the product of a number's digits and the sum of its digits.\n" << "--\n";
        int n;
        cout << "Type a number: ";
        cin >> n;
        int result = subtractProductAndSum(n);
        cout << "The difference between the product of its digits and the sum of its digits is: " << result;
        break;
    }
    case 3: {
        cout << "This functions counts the negative numbers in a matrix.\n" << "--\n";
        vector<vector<int>> grid = {
            {4, -3, 6, -7},
            {-1, 5, 7, -9},
            {2, -5, 7, -1},
            {-2, 6, -7 , 1}
        };
        
        
        cout << "The matrix: {" << endl;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid.size(); j++) {
                cout << setw(4) << grid[i][j];
            }
            cout << endl;
        }
        cout << "}" << endl;

        int result = countNegatives(grid);
        cout << "Number of negative numbers: " << result;
        break;
    }
    case 4: {
        cout << "This functions finds for each number in the array how many numbers in the array are smaller than it.\n" << "--\n";
        vector<int> nums = { 8, 1, 2, 2, 3 };
        vector<int> result = smallerNumbersThanCurrent(nums);
        int n = nums.size();
        cout << "The vector:{";
        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                cout << nums[i] << "}";
            }
            else {
                cout << nums[i] << ",";
            }
        }
        cout << "\nSmaller numbers than current: ";
        for (int num : result) {
            cout << num << " ";
        }
        break;
    }
    case 5: {
        cout << "This functions returns the number of good pairs in an array.\n" << "--\n";
        vector<int> nums = { 1, 2, 3, 1, 1, 3 };
        int n = nums.size();
        cout << "The vector: {";
        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                cout << nums[i] << "}";
            }
            else {
                cout << nums[i] << ",";
            }
        }

        int result = numIdenticalPairs(nums);

        cout << "\nNumber of good pairs: " << result;
        break;
    }
    case 6: {
        cout << "This function returns the sum of the matrix diagonals.\n" << "--\n";
        vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
        };
        int n = mat.size();
        cout << "The matrix: {" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << setw(4) << mat[i][j];
            }
            cout << endl;
        }
        cout << "}" << endl;


        int result = diagonalSum(mat);

        cout << "Sum of matrix diagonals: " << result;
        break;
    }
    case 7: {
        cout << "This function finds out if two strings are equivalent.\n" << "--\n";
        vector<string> word1 = { "ab", "c" };
        vector<string> word2 = { "a", "bc" };
        cout << "Word1: {";
        for (int i = 0; i < word1.size(); i++) {
            if (i == word1.size() - 1) {
                cout << word1[i] << "}";
            }
            else {
                cout << word1[i];
            }
        }
        cout << "\nWord2: {";
        for (int i = 0; i < word2.size(); i++) {
            if (i == word2.size() - 1) {
                cout << word2[i] << "}";
            }
            else {
                cout << word2[i];
            }
        }
        bool result = arrayStringsAreEqual(word1, word2);

        cout << (result ? "\nThe arrays represent the same string." : "\nThe arrays do not represent the same string.");
    }
    case 8: {
        cout << "This function finds out the wealthiest costumer (the first line shows the bank of the first costumer).\n" << "--\n-";
        vector<vector<int>> accounts = {
        {1, 2, 3},
        {3, 2, 1},
        {5, 6, 7}
        };
        cout << "The accounts: {" << endl;
        for (int i = 0; i < accounts.size(); i++) {
            for (int j = 0; j < accounts.size(); j++) {
                cout << setw(4) << accounts[i][j];
            }
            cout << endl;
        }
        cout << "}";

        int result = maximumWealth(accounts);

        cout << "\nThe wealth of the richest customer is: " << result;
        break;

    }
    case 9: {
        cout << "This function interprets an array.\n" << "--\n";
        string command = "G()(al)";
        string result = interpret(command);
        cout << "The command: " << command << endl;
        cout << "Interpreted string: " << result << endl;
        break;
    }
    case 10: {
        cout << "This function tells how many matches are played in a tournament.\n" << "--\n";
        int n;
        cout << "Type the number of teams: ";
        cin >> n;
        int result = numberOfMatches(n);

        cout << "Number of matches played in the tournament: " << result;
        break;
    }
    case 11: {
        cout << "This function converts an unConcatenated array to a Concatenated array.\n" << "--\n";
        vector<int> nums = { 1, 2, 3 };
        vector<int> result = getConcatenation(nums);
        cout << "unConcatenated array: {";
        for (int i = 0; i < nums.size(); i++) {
            if (i == nums.size() - 1) {
                cout << nums[i] << "}";
            }
            else {
                cout << nums[i] << " ";;
            }
        }
        cout << "\nConcatenated array: {";
        for (int num : result) {
            cout << num << " ";
        }
        cout << "\b}";
        break;
    }

    case 12: {
        cout << "This function tells the final value of X after some operations.\n" << "--\n";
        vector<string> operations = { "--X", "X++", "X++" };
        cout << "X before operations: X = 0\n";
        cout << "Operations: {";
        for (int i = 0; i < operations.size(); i++) {
            if (i == operations.size() - 1) {
                cout << operations[i] << "}";
            }
            else {
                cout << operations[i] << ", ";;
            }
        }

        int result = finalValueAfterOperations(operations);

        cout << "\nFinal value of X: " << result;
        break;

    }
    case 13: {
        cout << "This function returns the sum of two integers.\n" << "--\n";
        int a, b;
        cout << "Give the first number: ";
        cin >> a;
        cout << "Give the second number: ";
        cin >> b;
        cout << "The sum of numbers is: " << sum(a, b);
        break;

    }
    case 14: {
        cout << "This function finds out the smallest multiple between 2 and a number.\n" << "--\n";
        cout << "Give a number: ";
        int n;
        cin >> n;

        int result = smallestEvenMultiple(n);

        cout << "Smallest positive integer that is a multiple of both 2 and " << n << ": " << result;
        break;

    }
    case 15: {
        cout << "This function converts the temperature from celcius to fahrenheit (celcius-fahrenheit).\n" << "--\n";
        double celsius;
        cout << "Give the temperature in Celcius: ";
        cin >> celsius;

        vector<double> result = convertTemperature(celsius);

        cout << "Temperature in Kelvin: " << result[0] << endl;
        cout << "Temperature in Fahrenheit: " << result[1] << endl;
        break;
    }
    case 16: {
        cout << "This function returns number of employees who met the target.\n" << "--\n";
        vector<int> hours = { 40, 30, 50, 20 };
        int target;
        cout << "Type the target: ";
        cin >> target;
        cout << "Hours of work for each employer: \n";
        for (int i = 0; i < hours.size(); i++) {
            cout << "Employer " << i + 1 << ": " << hours[i] << endl;
        }
        int result = numberOfEmployeesWhoMetTarget(hours, target);
        cout << "Number of employees who worked at least " << target << " hours: " << result << endl;
        break;

    }
    case 17: {
        cout << "This function finds out which words contain an letter.\n" << "--\n";
        vector<string> words = { "apple", "banana", "cherry", "orange" };
        for (int i = 0; i < words.size(); i++) {
            cout << "Word " << i << ": " << words[i] << endl;
        }
        char x;
        cout << "Type an character: ";
        cin >> x;

        vector<int> result = findWordsContaining(words, x);

        cout << "Indices of words containing the character " << x << ": ";
        for (int index : result) {
            cout << index << " ";
        }
        cout << endl;
        break;
    }
    case 18: {
        cout << "This function finds out if and matrix is toeplitz or not.\n" << "--\n";
        vector<vector<int>> matrix = {
       {1, 2, 3, 4},
       {5, 1, 2, 3},
       {9, 5, 1, 2}
        };
        cout << "The matrix: {" << endl;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.size(); j++) {
                cout << setw(4) << matrix[i][j];
            }
            cout << endl;
        }
        cout << "}";
        bool result = isToeplitzMatrix(matrix);

        cout << "\nIs the matrix Toeplitz? " << (result ? "Yes" : "No") << endl;
        break;
    }
    case 19: {
        cout << "This function finds out the number of stones that are also jewels.\n" << "--\n";
        string jewels, stones;
        cout << "Type the jewels: ";
        cin >> jewels;
        cout << "Type the stones: ";
        cin >> stones;
       
        int result = numJewelsInStones(jewels, stones);

        cout << "Number of stones that are also jewels: " << result << endl;
        break;
    }
    case 20: {
        cout << "This function returns an matrix after transpose.\n" << "--\n";
        vector<vector<int>> matrix = {
       {1, 2, 3},
       {4, 5, 6}
        };
        cout << "The matrix: {" << endl;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.size(); j++) {
                cout << setw(3) << matrix[i][j];
            }
            cout << endl;
        }
        cout << "}";
        vector<vector<int>> result = transpose(matrix);

        cout << "\nTransposed Matrix: {" << endl;
        for (const vector<int>& row : result) {
            for (int value : row) {
                cout << setw(3) << value;
            }
            cout << endl;
        }
        cout << "\b}";
        break;
    }
    default:
        cout << "<<Type numbers between 1-20>>";
    }
    cout << "\n--------------------------------------------------------------" << endl;
    cout << "Do you want to try it again (Yes/No): ";
    string x;
    cin >> x;
    if (x == "Yes" || x == "yes") {
        goto start;
    }
    else {
        "GoodBye";
    }

}
    string defangIPaddr(string address){
        int n = address.size();
        string defangedAdress;
        for (int i = 0; i < n; i++) {
            char c = address[i];
            if (c == '.') {
                defangedAdress += "[.]";
            }
            else {
                defangedAdress += c;
            }
        }
    return defangedAdress;

    }
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            product *= digit;
            sum += digit;
            n = n / 10;
        }
        return product - sum;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int k = 0;
        int row = grid.size();
        int cols = (row > 0) ? (grid[0].size()) : 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] < 0)
                {
                    k++;
                }
            }
        }
        return k;
    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> num(n);

        for (int i = 0; i < n; i++) {
            int smaller = 0;
            for (int j = 0; j < n; j++) {
                if (nums[i] > nums[j]) {
                    smaller++;
                }

            }
            num[i] = smaller;
        }
        return num;
    }
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int GoodPairs = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j] && i < j) {
                    GoodPairs++;
                }
            }

        }
        return GoodPairs;
    }
    int diagonalSum(vector<vector<int>>& mat) {
        int s = 0;
        int n = mat.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j || i + j == n - 1) {
                    s += mat[i][j];
                }
            }
        }
        return s;
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1, w2;
        int n1 = word1.size(), n2 = word2.size();
        for (int i = 0; i < n1; i++) {
            w1 += word1[i];
        }
        for (int i = 0; i < n2; i++) {
            w2 += word2[i];
        }

        return (w1 == w2);
    }
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows = accounts.size();
        int cols = (rows > 0) ? accounts[0].size() : 0;
        int maxWealth = 0;
        for (int i = 0; i < rows; i++) {
            int wealth = 0;
            for (int j = 0; j < cols; j++)
            {
                wealth += accounts[i][j];
            }
            maxWealth = max(maxWealth, wealth);
        }

        return maxWealth;
    }
    string interpret(string command) {
        int n = command.size();
        string result;
        int i = 0;
        while (i < n)
        {
            if (command[i] == 'G')
            {
                result += 'G';
                i++;
            }
            else if (command[i] == '(' && command[i + 1] == ')')
            {
                result += 'o';
                i += 2;
            }
            else if (command.substr(i, 4) == "(al)")
            {
                result += "al";
                i += 4;
            }


        }
        return result;
    }
    int numberOfMatches(int n) {
        int matches = 0;
        while (n > 1) {
            if (n % 2 == 0) {
                matches += n / 2;
                n = n / 2;
            }
            else {
                matches += (n - 1) / 2;
                n = (n - 1) / 2 + 1;
            }
        }
        return matches;
    }
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> rezultati(2 * n);
        for (int i = 0; i < n; i++) {
            rezultati[i] = nums[i];
            rezultati[i + n] = nums[i];
        }

        return rezultati;
    }
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        int n = operations.size();
        for (int i = 0; i < n; ++i) {
            const string op = operations[i];
            if (op == "++X" || op == "X++") {
                X++;
            }
            else if (op == "--X" || op == "X--") {
                X--;
            }
        }
        return X;
    }
    int sum(int num1, int num2) {
        return num1 + num2;
    }
    int smallestEvenMultiple(int n) {
        int rezultati;
        if (n % 2 == 0) {
            return rezultati = n;
        }
        else {
            return rezultati = 2 * n;
        }
    }
    vector<double> convertTemperature(double celsius) {

        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;

        return { kelvin, fahrenheit };
    }
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int numberOfEmployeesWhoMetTarget = 0;
        int n = hours.size();
        for (int i = 0; i < n; i++) {
            if (hours[i] >= target) {
                numberOfEmployeesWhoMetTarget++;
            }
        }
        return numberOfEmployeesWhoMetTarget++;
    }
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector <int> rezultati;
        for (int i = 0; i < words.size(); i++)
        {
            bool xfound = false;
            for (int j = 0; j < words[i].size(); j++)
            {
                if (words[i][j] == x)
                {
                    xfound = true;
                    break;
                }
            }
            if (xfound)
            {
                rezultati.push_back(i);
            }
        }

        return rezultati;
    }
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        for (int i = 0; i < rows - 1; i++) {
            for (int j = 0; j < cols - 1; j++) {
                if (matrix[i][j] != matrix[i + 1][j + 1]) {
                    return false;
                }
            }
        }

        return true;
    }
    int numJewelsInStones(string jewels, string stones) {
        int a = jewels.size(), b = stones.size();
        int n = 0;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                if (stones.at(j) == jewels.at(i)) {
                    n++;
                }
            }
        }
        return n;
    } 
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> result(cols, vector<int>(rows, 0));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[j][i] = matrix[i][j];
            }
        }
        return result;
    }
