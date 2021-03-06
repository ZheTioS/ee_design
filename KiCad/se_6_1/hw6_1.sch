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
L power:GND #PWR01
U 1 1 5DE41761
P 3500 3850
F 0 "#PWR01" H 3500 3600 50  0001 C CNN
F 1 "GND" H 3505 3677 50  0000 C CNN
F 2 "" H 3500 3850 50  0001 C CNN
F 3 "" H 3500 3850 50  0001 C CNN
	1    3500 3850
	1    0    0    -1  
$EndComp
Wire Wire Line
	3850 3600 3650 3600
Wire Wire Line
	3500 3600 3500 3850
$Comp
L Device:Battery_Cell BT1
U 1 1 5DE4245D
P 3300 3000
F 0 "BT1" H 3418 3096 50  0000 L CNN
F 1 "Battery_Cell" H 3418 3005 50  0000 L CNN
F 2 "Battery:BatteryHolder_Keystone_3000_1x12mm" V 3300 3060 50  0001 C CNN
F 3 "~" V 3300 3060 50  0001 C CNN
	1    3300 3000
	1    0    0    -1  
$EndComp
Wire Wire Line
	3300 2500 3300 2800
Wire Wire Line
	3300 3100 3300 3600
Wire Wire Line
	3300 3600 3500 3600
Connection ~ 3500 3600
Wire Wire Line
	3300 2500 3850 2500
$Comp
L CD4011BE:CD4011BE U1
U 1 1 5DE50B84
P 4550 2900
F 0 "U1" H 4550 3670 50  0000 C CNN
F 1 "CD4011BE" H 4550 3579 50  0000 C CNN
F 2 "CD4011BE:DIP254P762X508-14" H 4550 2900 50  0001 L BNN
F 3 "CD4011BE" H 4550 2900 50  0001 L BNN
F 4 "https://www.digikey.com/product-detail/en/texas-instruments/CD4011BE/296-2031-ND/67241?utm_source=snapeda&utm_medium=aggregator&utm_campaign=symbol" H 4550 2900 50  0001 L BNN "Field4"
F 5 "DIP-14 Hynix" H 4550 2900 50  0001 L BNN "Field5"
F 6 "NAND Gate 4-Element 2-IN CMOS 14-Pin PDIP Tube" H 4550 2900 50  0001 L BNN "Field6"
F 7 "296-2031-ND" H 4550 2900 50  0001 L BNN "Field7"
F 8 "Texas Instruments" H 4550 2900 50  0001 L BNN "Field8"
	1    4550 2900
	1    0    0    -1  
$EndComp
Wire Wire Line
	5250 2500 5250 1950
Wire Wire Line
	5250 1950 3750 1950
Wire Wire Line
	3750 1950 3750 2900
Wire Wire Line
	3750 2900 3850 2900
Wire Wire Line
	3750 2900 3750 3000
Wire Wire Line
	3750 3000 3850 3000
Connection ~ 3750 2900
$Comp
L Device:LED D1
U 1 1 5DE54312
P 5700 2750
F 0 "D1" V 5739 2633 50  0000 R CNN
F 1 "LED" V 5648 2633 50  0000 R CNN
F 2 "LED_THT:LED_D1.8mm_W1.8mm_H2.4mm_Horizontal_O1.27mm_Z1.6mm" H 5700 2750 50  0001 C CNN
F 3 "~" H 5700 2750 50  0001 C CNN
	1    5700 2750
	0    -1   -1   0   
$EndComp
Wire Wire Line
	5700 2600 5550 2600
$Comp
L Device:R_Small_US R1
U 1 1 5DE56154
P 5450 2600
F 0 "R1" V 5245 2600 50  0000 C CNN
F 1 "R_Small_US" V 5336 2600 50  0000 C CNN
F 2 "Resistor_SMD:R_0201_0603Metric" H 5450 2600 50  0001 C CNN
F 3 "~" H 5450 2600 50  0001 C CNN
	1    5450 2600
	0    1    1    0   
$EndComp
Wire Wire Line
	5350 2600 5250 2600
Wire Wire Line
	5700 2900 5700 4050
Wire Wire Line
	5700 4050 3650 4050
Wire Wire Line
	3650 4050 3650 3600
Connection ~ 3650 3600
Wire Wire Line
	3650 3600 3500 3600
Wire Wire Line
	3850 2800 3300 2800
Connection ~ 3300 2800
Wire Wire Line
	3850 2700 3500 2700
Wire Wire Line
	3500 2700 3500 3600
$EndSCHEMATC
