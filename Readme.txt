INTRODUCTION
----------------------------------------------------------------------------
To start a program from the OS/2 workplace shell, a user may double-click
- an executable file like *.exe
- a program object create from the 'New Program' template.
The second approach will usually be used to provide a program name 
differently from the name of the executable file and additional parameters
and settings like 'start minimized'. 

Unfortunately, program objects cannot be stored on network drives. 
Executable files, however, can be stored on network drives and they can be
given arbitrary names and parameters in the same way as it is possible with
program objects. Thus, small executable files can be used to simulate the
function of program objects for network drives.

'ExecPM.exe' and 'ExecVIO.exe' are such small executable files which do
nothing but execute their parameter line via a system call. They can be
used e.g. to create folders of program start objects on network drives
allowing users to login from any machine on a network without changing
their working environment.

'ExecPM.exe' can also be used to start VIO batch files without a visible
window or icon on the screen. Any backup program or archiver able to
handle extended attributes can backup the simulated program objects.



CONTENTS OF ARCHIVE
----------------------------------------------------------------------------
The following files are contained in this archive:
  Readme.txt    	-  This file
  ExecPM.EXE    	-  Start object for PM programs and hidden batch files
  ExecVIO.EXE   	-  Start object for VIO programs
  Exec.c         	-  C source code
  OpenDrv.cmd 	-  Batch file to open a drive object



USE
----------------------------------------------------------------------------
Simply copy 'ExecPM.exe' and 'ExecVio.exe' to a place where you can easily
reach them, e.g. your templates folder. 

To create a program object 'My Program' on network folder 'X:\USER\MYSELF',
copy 'ExecPM.exe' or 'ExecVIO.exe' to 'X:\USER\MYSELF' and rename it to
'My Program'. Open the 'Properties' dialog of 'X:\USER\MYSELF\My Program'
and set the cursor to the 'Parameters' line. Enter the command line used to
start the desired program, if necessary with a leading 'start' command. You
may also provide parameters and program settings. 

A parameter '#0' will be replaced by the full path name of the simulated
program object (here: 'X:\USER\MYSELF\My Program')



EXAMPLES
----------------------------------------------------------------------------
You want to open 
- the Netscape Navigator, available from net path 'X:\INTERNET\NETSCAPE'.
- The WPS drive object for 'X:\'.
- a command line window with 'X:\USER\ROLF\BCOS2' as the default directory.
from icons stored in a folder 'X:\USER\ROLF\PROGRAMS' located on a Server.

- Copy ExecPM.exe to 'X:\USER\ROLF\PROGRAMS', rename it to 'Netscape'.
- Open the properties dialog.
- Enter 'start NETSCAPE.EXE -3' in the 'Parameters' line.
- Enter 'X:\INTERNET\NETSCAPE' in the 'Working directory' line.
- Use the 'Icon' page of the properties dialog to provide the proper icon.
- Close the dialog.
You may now start Netspace by double-clicking the 'Netscape' icon in your
network folder.

- Copy 'OpenDrv.cmd' e.g. to the network path 'X:\Bin'.
- Copy ExecPM.exe to 'X:\USER\ROLF\PROGRAMS', rename it to 'Drive X'.
- Open the properties dialog.
- Enter 'X:\BIN\OPENDRV.CMD X' in the 'Parameters' line.
- Use the 'Icon' page of the properties dialog to provide the proper icon.
- Close the dialog.
You may now open drive X: by double-clicking the 'Drive X' icon in your
network folder. This feature, the hidden start of a batch file, is also
usefull on local drives.

- Copy ExecVIO.exe to 'X:\USER\ROLF\PROGRAMS', rename it to 'OS/2 Window'.
- Open the properties dialog.
- Enter 'CMD.EXE' in the 'Parameters' line.
- Enter 'X:\USER\ROLF\BCOS2' in the 'Working directory' line.
- Close the dialog.
You may now double-click the 'OS/2 Window' icon in your network folder to
open a command line window on 'X:\USER\ROLF\BCOS2'.



DISCLAIMER 
----------------------------------------------------------------------------
The author of this program accepts no responsibility for damages that
are caused by this program and make NO WARRANTY or representation,
either express or implied, with respect to this software.  This software
is provided "AS IS," and you, its user, assume the entire risk when you
use it.

I do not promise that this software is free from any third party rights
(but actually, its only 20 lines of source code)



LIMITATIONS
----------------------------------------------------------------------------
The network drive must preserve extended attributes to store the parameters
permanetely. This is the case for Netware with OS/2 support installed and 
for pure OS/2 networks. NFS drives do not provide this feature.

Some programs do not like to be started indirectely. Use the 'start' 
command or a batch file in the parameter line. 

If you want to start DOS programs use ExecPM.exe use the start command.
Or recompile 'Exec.c' using a DOS compiler.



_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
_/ Rolf Breuning                                - using OS/2 Warp 4 -
_/ Bockerterstr. 35, 41748 Viersen, Germany
_/ breu@?.rwth-aachen.de (replace '?' by 'eecs')
_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/


