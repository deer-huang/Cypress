# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\Learn\Cypress\Light\Workspace01\LED\Design01.cydsn\Design01.cyprj
# Date: Sun, 11 Dec 2022 06:36:26 GMT
#set_units -time ns
create_clock -name {Clock_1(FFB)} -period 500 -waveform {0 250} [list [get_pins {ClockBlock/ff_div_6}] [get_pins {ClockBlock/ff_div_7}]]
create_clock -name {CyILO} -period 25000 -waveform {0 12500} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 25000 -waveform {0 12500} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/hfclk}] -edges {1 13 25} [list]


# Component constraints for D:\Learn\Cypress\Light\Workspace01\LED\Design01.cydsn\TopDesign\TopDesign.cysch
# Project: D:\Learn\Cypress\Light\Workspace01\LED\Design01.cydsn\Design01.cyprj
# Date: Sun, 11 Dec 2022 06:36:25 GMT
