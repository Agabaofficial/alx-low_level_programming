#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
    int file_descriptor, text_length = 0, bytes_written;
    mode_t mode = S_IRUSR | S_IWUSR;

    if (filename == NULL) {
        return -1;
    }

    if (text_content != NULL) {
        text_length = strlen(text_content);
    }

    file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);

    if (file_descriptor == -1) {
        return -1;
    }

    bytes_written = write(file_descriptor, text_content, text_length);

    if (bytes_written == -1) {
        close(file_descriptor);
        return -1;
    }

    close(file_descriptor);
    return 1;
}
