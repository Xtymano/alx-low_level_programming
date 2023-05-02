#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: 0 (success)
 *
 */

int main(void)
{
	 srand(time(NULL));


    string valid_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int num_valid_chars = valid_chars.length();

    int password_length = 8;
    string password = "";

 for (int i = 0; i < password_length; i++) {
        int random_index = rand() % num_valid_chars;
        password += valid_chars[random_index];
    }
    cout << "Generated password: " << password << endl;

    return 0;
}
