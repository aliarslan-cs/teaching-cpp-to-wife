# Set Up C++ on Windows with VS Code

This guide uses MSYS2 with the MinGW-w64 toolchain. It installs the C++ compiler (`g++`) and debugger (`gdb`) required to build, run, and debug C++ programs in Visual Studio Code.

## 1. Install VS Code

1. Download and install [Visual Studio Code](https://code.visualstudio.com/).
2. During installation, select **Add to PATH** if the installer offers it.

## 2. Install MSYS2 and the C++ Toolchain

1. Download and install [MSYS2](https://www.msys2.org/). Keep the default installation directory: `C:\msys64`.
2. Open **MSYS2 UCRT64** from the Start menu.
3. Update MSYS2:

   ```bash
   pacman -Syu
   ```

   If it asks you to close the terminal, close it, reopen **MSYS2 UCRT64**, and run the command again.

4. Install the compiler, debugger, and build tool:

   ```bash
   pacman -S --needed mingw-w64-ucrt-x86_64-toolchain mingw-w64-ucrt-x86_64-gdb mingw-w64-ucrt-x86_64-make
   ```

## 3. Add the Toolchain to PATH

1. Open the Windows Start menu and search for **Edit the system environment variables**.
2. Select **Environment Variables**.
3. Under **User variables**, select `Path`, then select **Edit**.
4. Add this entry:

   ```text
   C:\msys64\ucrt64\bin
   ```

5. Confirm all dialogs and restart VS Code.

## 4. Verify the Installation

Open a new VS Code terminal with **Terminal: New Terminal** and run:

```powershell
g++ --version
gdb --version
mingw32-make --version
```

Each command should print its version. If Windows reports that a command is not recognized, check the PATH entry and restart VS Code.

## 5. Install the VS Code C++ Extension

1. Open Extensions in VS Code with `Ctrl+Shift+X`.
2. Install **C/C++** by Microsoft (`ms-vscode.cpptools`).

This extension provides C++ language features, build-task integration, and debugging support.

## 6. Build and Run a Program

Create a file named `hello.cpp`:

```cpp
#include <iostream>

int main() {
   std::cout << "Hello, C++!\n";
    return 0;
}
```

In the VS Code terminal, compile and run it:

```powershell
g++ -g -Wall -Wextra -std=c++17 hello.cpp -o hello.exe
.\hello.exe
```

The `-g` option includes debug symbols, which are needed for breakpoints and step-through debugging.

## 7. Debug in VS Code

1. Open `hello.cpp`.
2. Click in the gutter beside a line to set a breakpoint.
3. Press `F5`.
4. When prompted, choose **C++ (GDB/LLDB)**, then choose **g++.exe build and debug active file**.

VS Code creates `.vscode/tasks.json` and `.vscode/launch.json` for the workspace. After that, press `F5` to build and start debugging, use `F10` to step over, `F11` to step into, and `Shift+F5` to stop.

## Troubleshooting

- **A package download returns HTTP `429`:** A mirror has rate-limited the request. Wait a few minutes and rerun the same `pacman` command. If it repeats, open `/etc/pacman.d/mirrorlist.mingw` in the **MSYS2 UCRT64** terminal, move a different `Server` entry above the `ftp.nluug.nl` entry, save the file, then rerun the command. The failed transaction is rolled back, so it is safe to retry.
- **`g++` or `gdb` is not recognized:** Ensure `C:\msys64\ucrt64\bin` is in your user PATH, then completely restart VS Code.
- **Breakpoints are hollow or skipped:** Rebuild with `-g` and make sure `launch.json` starts the newly built `.exe` file.
- **The debugger cannot start:** Confirm that `gdb --version` works in the VS Code terminal and rerun the generated build task with `Ctrl+Shift+B`.