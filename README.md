# Step up
Install a Compiler:
-----------------------------------------------------------------------------
Cygwin: https://cygwin.com/install.html
Setting:
Choose A Downloade Site: https 	://cygwin.mirror.constant.com
- gcc-g++			            : 11.2.0-1
- gcc-debuginfo			        : 11.2.0-1
- gcc-core			            : 11.2.0-1
- gdb 				            : 9.2-1
- make				            : newest (4.3.1)
copy: C:\cygwin64\bin
Umgebungsvariablen ... -> Path -> C:\cygwin64\bin
-----------------------------------------------------------------------------
Testing:
-----------------------------------------------------------------------------
cmd
    make --version
    gdb --version
    gcc --version
    g++ --version
-----------------------------------------------------------------------------
VS-Code: Extensions
-----------------------------------------------------------------------------
- C/C++
- C/C++ Config
- C/C++ Extension Pack
- C/C++ Runner
- C/C++ Themes
- Coding Tools Extension Pack
- CodeSnap -> VSCode, Preferences, Keyboard Shortcuts: Ctrl+Shift+NumLock
-----------------------------------------------------------------------------
Run C++ Code
-----------------------------------------------------------------------------
Ctrl+Shift+P -> C/C++ Config: Generate C++ Config Files [Execute once]
Ctrl+Shift+B -> Cpp: Debug (Single File)		[created the exe file]
Ctrl+Shift+B -> Cpp: Execute: Debug Program		[starts the script]
