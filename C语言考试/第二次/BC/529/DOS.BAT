@ECHO OFF
PATH=C:\WLKS\Pdos;C:\Ucdos;C:\WLKS\Dos;C:\WLKS\Language\F7;C:\WLKS\Language\TC;C:\WLKS\Language\FB;C:\WLKS\Language\QB;C:\WLKS\Language\F2;C:\WLKS\Language\TC3;
C:
C:\WLKS\Dos\tway32.exe VGA
: Main
Cls
FOR %%1 IN (0 1 2 ) DO ECHO.
FOR %%1 IN (0 1 2 ) DO ECHO.
ECHO                         ┏━━━━━━━━━━━━━━━━┓
ECHO                         ┃             考试系统           ┃
ECHO                         ┣━━━━━━━━━━━━━━━━┫
ECHO                         ┃                                ┃
ECHO                         ┃ 　 　　１． 开始答题　　　     ┃
ECHO                         ┃                                ┃
ECHO                         ┃ 　 　　２． 返回DOS提示符      ┃
ECHO                         ┃                                ┃
ECHO                         ┃ 　 　　３． 返回WINDOWS        ┃
ECHO                         ┃                                ┃
ECHO                         ┣━━━━━━━━━━━━━━━━┫
ECHO                         ┃请使用数字键1,2,3选择相应的功能 ┃
ECHO                         ┣━━━━━━━━━━━━━━━━┫
ECHO                         ┃ Dos界面使用Exit命令返回本菜单  ┃
ECHO                         ┗━━━━━━━━━━━━━━━━┛
ECHO.
CD C:\WLKS\Dos
CHOICE/C:123/N
FOR %%1 IN (0 1 2 3 4) DO ECHO.
FOR %%1 IN (0 1 2 3) DO ECHO.
IF ERRORLEVEL 3 GOTO 3
IF ERRORLEVEL 2 GOTO 2
Cls
D:
CD D:\Exam\jc018\BC\529
DEL C:\WLKS\language\TC3\TCDEF.DSK
DEL D:\Exam\jc018\BC\529\TC*.SWP
C:\WLKS\language\TC3\TC.EXE D:\Exam\jc018\BC\529\Prog1.C
GoTo Main
:2
Cls
D:
CD D:\Exam\jc018\BC\529
Dir/P/W
C:\WLKS\Dos\Win2000\Command.Com
GoTo main
:3
Cls
C:
C:\WLKS\Dos\tway32.exe/U
Exit
