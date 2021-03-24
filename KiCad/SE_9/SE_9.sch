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
Wire Wire Line
	6000 5000 6000 4900
Wire Wire Line
	2900 2100 2900 3400
Wire Wire Line
	6800 5500 6800 5000
Wire Wire Line
	6800 5000 6000 5000
$Comp
L power:GND #PWR01
U 1 1 5E441232
P 6800 5500
F 0 "#PWR01" H 6800 5250 50  0001 C CNN
F 1 "GND" H 6805 5327 50  0000 C CNN
F 2 "" H 6800 5500 50  0001 C CNN
F 3 "" H 6800 5500 50  0001 C CNN
	1    6800 5500
	1    0    0    -1  
$EndComp
Connection ~ 6800 5500
$Comp
L Device:Battery BT1
U 1 1 5E441BA9
P 2900 3600
F 0 "BT1" H 3008 3646 50  0000 L CNN
F 1 "Battery" H 3008 3555 50  0000 L CNN
F 2 "Battery:BatteryHolder_Keystone_2468_2xAAA" V 2900 3660 50  0001 C CNN
F 3 "~" V 2900 3660 50  0001 C CNN
	1    2900 3600
	1    0    0    -1  
$EndComp
Wire Wire Line
	2900 3800 2900 5500
Wire Wire Line
	2900 5500 6800 5500
$Comp
L MCU_Module:Arduino_Nano_v3.x A1
U 1 1 5E42C9E2
P 5900 3900
F 0 "A1" H 5900 2811 50  0000 C CNN
F 1 "Arduino_Nano_v3.x" H 5900 2720 50  0000 C CNN
F 2 "Module:Arduino_Nano" H 6050 2950 50  0001 L CNN
F 3 "http://www.mouser.com/pdfdocs/Gravitech_Arduino_Nano3_0.pdf" H 5900 2900 50  0001 C CNN
	1    5900 3900
	1    0    0    -1  
$EndComp
Wire Wire Line
	6400 3900 6400 4000
Wire Wire Line
	6100 2900 6100 2800
$Comp
L Sensor_Motion:MPU-9250 U1
U 1 1 5E44BC2B
P 7900 3800
F 0 "U1" H 7900 2811 50  0000 C CNN
F 1 "MPU-9250" H 7900 2720 50  0000 C CNN
F 2 "Sensor_Motion:InvenSense_QFN-24_3x3mm_P0.4mm" H 7900 2800 50  0001 C CNN
F 3 "https://store.invensense.com/datasheets/invensense/MPU9250REV1.0.pdf" H 7900 3650 50  0001 C CNN
	1    7900 3800
	1    0    0    -1  
$EndComp
$Comp
L Motor:Motor_Servo M1
U 1 1 5E44D140
P 7200 2400
F 0 "M1" H 7532 2465 50  0000 L CNN
F 1 "Motor_Servo" H 7532 2374 50  0000 L CNN
F 2 "Connector_Wire:SolderWirePad_1x03_P3.81mm_Drill1.2mm" H 7200 2210 50  0001 C CNN
F 3 "http://forums.parallax.com/uploads/attachments/46831/74481.png" H 7200 2210 50  0001 C CNN
	1    7200 2400
	1    0    0    -1  
$EndComp
Wire Wire Line
	7900 4700 7900 5000
Wire Wire Line
	7900 5000 6800 5000
Connection ~ 6800 5000
Wire Wire Line
	7200 3500 6500 3500
Wire Wire Line
	6500 3500 6500 4300
Wire Wire Line
	6500 4300 6400 4300
Wire Wire Line
	6400 4400 6900 4400
Wire Wire Line
	6900 4400 6900 3700
Wire Wire Line
	6900 3700 7200 3700
Wire Wire Line
	8000 2900 8000 2800
Wire Wire Line
	8000 2800 6100 2800
Connection ~ 6100 2800
Wire Wire Line
	6100 2800 6100 2400
Wire Wire Line
	5400 4200 4900 4200
Wire Wire Line
	9200 5000 7900 5000
Connection ~ 7900 5000
Wire Wire Line
	2900 2100 6100 2100
Wire Wire Line
	6900 2400 6100 2400
Connection ~ 6100 2400
Wire Wire Line
	6100 2400 6100 2100
Wire Wire Line
	6900 2300 4900 2300
Wire Wire Line
	4900 2300 4900 4200
Wire Wire Line
	6900 2500 6900 2600
Wire Wire Line
	6900 2600 9200 2600
Wire Wire Line
	9200 2600 9200 5000
$EndSCHEMATC
