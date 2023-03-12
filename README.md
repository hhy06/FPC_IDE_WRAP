# FPC_IDE_WRAP
a wrap to change font size before launching FPC

FreePASCAL IDE needs to be tweaked before working properly (especially on *CHINESE* (or other east-asian languages?) windows systems). This involves chcp to 437 codepage, changing font (so the character-UI of the IDE is shown correctly) and other desperate and blind clicking for me . What happened in my case  was that in the end, the IDE displays properly (both the background and the character-formed-border) but the font is simply too small. I suspects something is broken, because I can no longer change the front to Truetype in PROPERTY page. It is impossible to solve via DPI setting. It is also impossible to open a commandline, enlarge its font and then run FP-ide (since the idea pops up its own window). Therefore I created this wrapper in C, which enlarges itself and calls FP.exe. This works for me on win10 [ver 10.0.18362.1256]. 

The exe file was compiled via dev-cpp (TDM-GCC 4.9.2 64bit).

Hope this is helpful to  you.

