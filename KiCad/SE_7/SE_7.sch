EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L MCU_Module:Arduino_Nano_v3.x A?
U 1 1 5E50D047
P 4650 3600
F 0 "A?" H 4650 2511 50  0000 C CNN
F 1 "Arduino_Nano_v3.x" H 4650 2420 50  0000 C CNN
F 2 "Module:Arduino_Nano" H 4800 2650 50  0001 L CNN
F 3 "http://www.mouser.com/pdfdocs/Gravitech_Arduino_Nano3_0.pdf" H 4650 2600 50  0001 C CNN
	1    4650 3600
	1    0    0    -1  
$EndComp
$Comp
L Device:Speaker LS?
U 1 1 5E51250C
P 3350 3700
F 0 "LS?" H 3313 3283 50  0000 C CNN
F 1 "Speaker" H 3313 3374 50  0000 C CNN
F 2 "" H 3350 3500 50  0001 C CNN
F 3 "~" H 3340 3650 50  0001 C CNN
	1    3350 3700
	-1   0    0    1   
$EndComp
Wire Wire Line
	3550 3700 3550 4700
Wire Wire Line
	3550 4700 4650 4700
Wire Wire Line
	4650 4700 4650 4600
Wire Wire Line
	4150 3400 3550 3400
Wire Wire Line
	3550 3400 3550 3600
$EndSCHEMATC
