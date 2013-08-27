/* Rolf Breuning, 5.9.96 */
arg driveletter
Call RxFuncAdd 'SysOpenObject', 'REXXUTIL', 'SysOpenObject'
Call SysOpenObject '<WP_DRIVE_'strip(driveletter)'>', 'default', 'true'

