# Text editor

## Compiling

In the command line at the project root, run:

```
make
```

## Running

After running `make`, run:

```
./texor
```

## Usage

### Create New File

Create a new file by running `text` with no command-line argument.

```
./text
```

### Edit Existing File

Edit an existing file by running `text` with the filename as a command-line argument.

```
./text test_file
```

### Status Bar

A status bar is shown in the second-from-the-bottom row, and uses inverted colors. This tells you the file's name, how many lines it has, the filetype (if detected) and what line your cursor is on.

### Message Bar

A message bar is shown in the bottom row and initially gives you some instructions to this program. As you use the program, it may display other information when needed.

### Editing Text

You can edit text normally by type characters, insert new lines, backspacing across lines, or splitting lines, etc.

### Navigating

To move around the file more quickly you can use:

- Arrow keys
- Home
- End
- Page Up
- Page Down

### Saving

When you have modified a file, you can type `Ctrl-S` to save the file.

Note: If you are saving a new file, it will prompt you for a filename.

### Searching

Type `Ctrl-F` to search.

Type in your search term and the screen will highlight the first match found. Use the arrow keys to go to the next and previous search results.

Type `Enter` to finish searching and leave your cursor on that search result or `Esc` to cancel and return your cursor to where it was before the search.

### Quitting

Type `Ctrl-Q` to quit.

Note: If you have unsaved changes, you'll have to type `Ctrl-Q` three more times to close the program and lose your unsaved changes.

## License

BSD 2-Clause

## Credits

Project: https://github.com/snaptoken/kilo-tutorial/  
License: CC BY 4.0, https://creativecommons.org/licenses/by/4.0/

Project: https://github.com/antirez/kilo  
Copyright (c) 2016, Salvatore Sanfilippo <antirez at gmail dot com>  
License: BSD 2-Clause, https://github.com/antirez/kilo/blob/master/LICENSE

Project: https://github.com/kyletolle/texor
License: BSD 2-Clause, https://github.com/kyletolle/texor/blob/master/LICENSE
