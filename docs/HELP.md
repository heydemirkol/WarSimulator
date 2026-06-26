<p align="center">
  <img src="../assets/gifs/Troubleshooting" alt="Troubleshooting" width="80%"/>
</p>

---

# ► **DESCRIPTION**

If you encounter issues while configuring, building, or running the project, this document provides troubleshooting guidance for common problems.

---

# ► **TROUBLESHOOTING**

## ⭕️ **CMAKE COMMAND NOT FOUND**

> ☕ If you get an error like:

```terminal
cmake: command not found
```

> ☕ It means **CMake** is not installed or not added to your system **PATH**.
> ☕ Install **CMake** and make sure it is accessible from the terminal.

---

## ⭕️ **COMPILER NOT FOUND**

> ☕ This means a **C++11** compiler is not installed or not configured properly:
> ☕ Make sure you have installed a supported compiler.

---

## ⭕️ **COMPILER VERSION TOO OLD**

> ☕ Update your compiler to a newer version that supports **C++11**.

---

## ⭕️ **SOURCE DIRECTORY DOES NOT CONTAIN CMakeLists.txt**

> ☕ If you see:

```terminal
CMake Error: The source directory does not appear to contain CMakeLists.txt
```

> ☕ Make sure you are running the `cmake ..` command from inside the `build` directory.
> ☕ Also verify that the project's root directory contains a **CMakeLists.txt** file.

---

## ⭕️ **BUILD DIRECTORY CONFIGURED WITH A DIFFERENT COMPILER**

> ☕ Example error:

```terminal
The CXX compiler identification is different
```

> ☕ CMake caches compiler information inside the `build` directory.
> ☕ If you switch from **GCC** to **Clang**, or to another compiler,
> ☕ delete the `build` directory and configure the project again.

---

## ⭕️ **PERMISSION DENIED (LINUX / MACOS)**

> ☕ If you get a "Permission denied" error when trying to run the executable:

```terminal
chmod +x ./WarSimulator
```

---

## ⭕️ **ACCESS DENIED OR EXECUTABLE MISSING (WINDOWS)**

> ☕ Antivirus or Windows Defender might falsely block or delete the file.
