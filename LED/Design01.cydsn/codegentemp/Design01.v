// ======================================================================
// Design01.v generated from TopDesign.cysch
// 12/11/2022 at 14:36
// This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
// ======================================================================

`define CYDEV_CHIP_FAMILY_PSOC3 1
`define CYDEV_CHIP_FAMILY_PSOC4 2
`define CYDEV_CHIP_FAMILY_PSOC5 3
`define CYDEV_CHIP_FAMILY_PSOC6 4
`define CYDEV_CHIP_FAMILY_FM0P 5
`define CYDEV_CHIP_FAMILY_FM3 6
`define CYDEV_CHIP_FAMILY_FM4 7
`define CYDEV_CHIP_FAMILY_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_3A 1
`define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
`define CYDEV_CHIP_REVISION_3A_ES3 3
`define CYDEV_CHIP_REVISION_3A_ES2 1
`define CYDEV_CHIP_REVISION_3A_ES1 0
`define CYDEV_CHIP_MEMBER_5B 2
`define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
`define CYDEV_CHIP_REVISION_5B_ES0 0
`define CYDEV_CHIP_MEMBER_5A 3
`define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
`define CYDEV_CHIP_REVISION_5A_ES1 1
`define CYDEV_CHIP_REVISION_5A_ES0 0
`define CYDEV_CHIP_MEMBER_4G 4
`define CYDEV_CHIP_REVISION_4G_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4G_ES 17
`define CYDEV_CHIP_REVISION_4G_ES2 33
`define CYDEV_CHIP_MEMBER_4U 5
`define CYDEV_CHIP_REVISION_4U_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4E 6
`define CYDEV_CHIP_REVISION_4E_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0
`define CYDEV_CHIP_MEMBER_4X 7
`define CYDEV_CHIP_REVISION_4X_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4O 8
`define CYDEV_CHIP_REVISION_4O_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4R 9
`define CYDEV_CHIP_REVISION_4R_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4T 10
`define CYDEV_CHIP_REVISION_4T_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4N 11
`define CYDEV_CHIP_REVISION_4N_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4S 12
`define CYDEV_CHIP_REVISION_4S_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4W 13
`define CYDEV_CHIP_REVISION_4W_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AC 14
`define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AD 15
`define CYDEV_CHIP_REVISION_4AD_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AE 16
`define CYDEV_CHIP_REVISION_4AE_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Q 17
`define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Y 18
`define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Z 19
`define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4D 20
`define CYDEV_CHIP_REVISION_4D_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4J 21
`define CYDEV_CHIP_REVISION_4J_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4K 22
`define CYDEV_CHIP_REVISION_4K_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4V 23
`define CYDEV_CHIP_REVISION_4V_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4H 24
`define CYDEV_CHIP_REVISION_4H_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AA 25
`define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4A 26
`define CYDEV_CHIP_REVISION_4A_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4A_ES0 17
`define CYDEV_CHIP_MEMBER_4F 27
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4P 28
`define CYDEV_CHIP_REVISION_4P_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4M 29
`define CYDEV_CHIP_REVISION_4M_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AB 30
`define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4L 31
`define CYDEV_CHIP_REVISION_4L_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4I 32
`define CYDEV_CHIP_REVISION_4I_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_6A 33
`define CYDEV_CHIP_REVISION_6A_ES 17
`define CYDEV_CHIP_REVISION_6A_PRODUCTION 33
`define CYDEV_CHIP_REVISION_6A_NO_UDB 33
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 34
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 35
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 36
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM3 37
`define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM4 38
`define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0
`define CYDEV_CHIP_FAMILY_USED 2
`define CYDEV_CHIP_MEMBER_USED 23
`define CYDEV_CHIP_REVISION_USED 0
// Component: cy_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "E:\SoftLoc\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "E:\SoftLoc\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "E:\SoftLoc\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "E:\SoftLoc\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`endif

// TCPWM_P4_v2_10(Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, PinVisibility_index=false, PinVisibility_kill=false, PinVisibility_phiA=false, PinVisibility_phiB=false, PinVisibility_switch=false, PWMCompare=9900, PWMCompareBuf=65535, PWMCompareSwap=0, PWMCountMode=3, PWMCountPresent=false, PWMDeadTimeCycle=0, PWMInterruptMask=1, PWMKillEvent=0, PWMLinenSignal=0, PWMLineSignal=0, PWMMode=4, PWMPeriod=19800, PWMPeriodBuf=65535, PWMPeriodSwap=0, PWMPrescaler=0, PWMReloadMode=0, PWMReloadPresent=false, PWMRunMode=0, PWMSetAlign=0, PWMStartMode=0, PWMStartPresent=false, PWMStopEvent=0, PWMStopMode=0, PWMStopPresent=false, PWMSwitchMode=0, PWMSwitchPresent=false, QuadAutoStart=true, QuadEncodingModes=0, QuadIndexMode=0, QuadIndexPresent=false, QuadInterruptMask=1, QuadPhiAMode=3, QuadPhiBMode=3, QuadStopMode=0, QuadStopPresent=false, TCCaptureMode=0, TCCapturePresent=false, TCCompare=65535, TCCompareBuf=65535, TCCompareSwap=0, TCCompCapMode=2, TCCountingModes=0, TCCountMode=3, TCCountPresent=false, TCInterruptMask=1, TCPeriod=65535, TCPrescaler=0, TCPWMCapturePresent=false, TCPWMConfig=7, TCPWMCountPresent=false, TCPWMReloadPresent=false, TCPWMStartPresent=false, TCPWMStopPresent=false, TCReloadMode=0, TCReloadPresent=false, TCRunMode=0, TCStartMode=0, TCStartPresent=false, TCStopMode=0, TCStopPresent=false, TermMode_capture=0, TermMode_cc=0, TermMode_clock=0, TermMode_count=0, TermMode_interrupt=0, TermMode_line=0, TermMode_line_n=0, TermMode_ov=0, TermMode_reload=0, TermMode_start=0, TermMode_stop=0, TermMode_un=0, TermModeStates=, TermVisibility_capture=false, TermVisibility_cc=true, TermVisibility_clock=true, TermVisibility_count=false, TermVisibility_interrupt=true, TermVisibility_line=true, TermVisibility_line_n=true, TermVisibility_ov=true, TermVisibility_reload=false, TermVisibility_start=false, TermVisibility_stop=false, TermVisibility_un=true, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=TCPWM_P4_v2_10, CY_CONFIG_TITLE=PWM_1, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=PWM_1, CY_INSTANCE_SHORT_NAME=PWM_1, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=10, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=PWM_1, )
module TCPWM_P4_v2_10_0 (
    capture,
    cc,
    clock,
    count,
    interrupt,
    line,
    line_n,
    ov,
    reload,
    start,
    stop,
    un);
    input       capture;
    output      cc;
    input       clock;
    input       count;
    output      interrupt;
    output      line;
    output      line_n;
    output      ov;
    input       reload;
    input       start;
    input       stop;
    output      un;


          wire  Net_64;
          wire  Net_63;
          wire  Net_85;
          wire  Net_62;
          wire  Net_110;
          wire  Net_95;
          wire  Net_106;
          wire  Net_104;
          wire  Net_109;
          wire  Net_98;
          wire  Net_108;
          wire  Net_101;
          wire  Net_66;
          wire  Net_81;
          wire  Net_75;
          wire  Net_69;
          wire  Net_82;
          wire  Net_72;

    cy_m0s8_tcpwm_v1_0 cy_m0s8_tcpwm_1 (
        .capture(Net_75),
        .clock(Net_81),
        .compare_match(cc),
        .count(Net_69),
        .interrupt(interrupt),
        .line_out(line),
        .line_out_compl(line_n),
        .overflow(ov),
        .reload(Net_66),
        .start(Net_72),
        .stop(Net_82),
        .underflow(un));

	// VMux_reload (cy_virtualmux_v1_0)
	assign Net_66 = reload;

	// VMux_count (cy_virtualmux_v1_0)
	assign Net_69 = count;

	// VMux_start (cy_virtualmux_v1_0)
	assign Net_72 = start;

	// VMux_capture (cy_virtualmux_v1_0)
	assign Net_75 = capture;

	// VMux_stop (cy_virtualmux_v1_0)
	assign Net_82 = stop;

	// VMux_clock (cy_virtualmux_v1_0)
	assign Net_81 = clock;



endmodule

// SmartIO_v1_10(Clock_select=31, data0_direction=0, data0_src=Undefined, data0_sync=0, data1_direction=0, data1_src=Undefined, data1_sync=0, data2_direction=0, data2_src=Undefined, data2_sync=0, data3_direction=0, data3_src=Undefined, data3_sync=0, data4_direction=4, data4_src=Undefined, data4_sync=0, data5_direction=1, data5_src=TCPWM[2].line_compl, data5_sync=0, data6_direction=0, data6_src=Undefined, data6_sync=0, data7_direction=1, data7_src=TCPWM[3].line_compl, data7_sync=0, du_data0=0, du_data1=0, du_data1_used=true, du_details=Clock = Async (combinatorial)\r\nTR0 = Constant 0\r\nTR1 = Constant 0\r\ndu_size = Size - 1\r\nmask = (1 << (du_size + 1)) ? 1\r\ndata_eql_data1 = (data & mask) == (DATA1 & mask)\r\n\r\nCombinatorial:\r\ntr_out = data_eql_data1\r\n\r\nRegistered/Clocked:\r\ndata <= data\r\nif(TR0)\r\n    data <= DATA0 & mask\r\nelse if (TR1)\r\n    data <= data_eql_data1 ? data : (data + 1) & mask, du_in0=0, du_in1=0, du_in2=0, du_opcode=1, du_reg=0, du_reg_used=false, du_size=7, du_size_display=8, du_used=false, Fabric_bypass0=1, Fabric_bypass1=1, Fabric_bypass2=1, Fabric_bypass3=1, Fabric_bypass4=0, Fabric_bypass5=0, Fabric_bypass6=1, Fabric_bypass7=0, gpio0_direction=0, gpio0_sync=0, gpio1_direction=0, gpio1_sync=0, gpio2_direction=0, gpio2_sync=0, gpio3_direction=0, gpio3_sync=0, gpio4_direction=2, gpio4_sync=0, gpio5_direction=1, gpio5_sync=0, gpio6_direction=0, gpio6_sync=0, gpio7_direction=1, gpio7_sync=0, HsiomConnection0=Undefined, HsiomConnection1=Undefined, HsiomConnection2=Undefined, HsiomConnection3=Undefined, HsiomConnection4=Undefined, HsiomConnection5=TCPWM[2].line_compl, HsiomConnection6=Undefined, HsiomConnection7=TCPWM[3].line_compl, lut0_in0=17, lut0_in1=17, lut0_in2=17, lut0_map=0, lut0_mode=0, lut0_used=false, lut1_in0=17, lut1_in1=17, lut1_in2=17, lut1_map=0, lut1_mode=0, lut1_used=false, lut2_in0=17, lut2_in1=17, lut2_in2=17, lut2_map=0, lut2_mode=0, lut2_used=false, lut3_in0=17, lut3_in1=17, lut3_in2=17, lut3_map=0, lut3_mode=0, lut3_used=false, lut4_in0=11, lut4_in1=9, lut4_in2=9, lut4_map=102, lut4_mode=0, lut4_used=true, lut5_in0=17, lut5_in1=17, lut5_in2=17, lut5_map=0, lut5_mode=0, lut5_used=false, lut6_in0=17, lut6_in1=17, lut6_in2=17, lut6_map=0, lut6_mode=0, lut6_used=false, lut7_in0=17, lut7_in1=17, lut7_in2=17, lut7_map=0, lut7_mode=0, lut7_used=false, Target_port=3, UseHldOvr=false, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=SmartIO_v1_10, CY_CONFIG_TITLE=SmartIO_1, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=SmartIO_1, CY_INSTANCE_SHORT_NAME=SmartIO_1, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=10, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=SmartIO_1, )
module SmartIO_v1_10_1 (
    clock,
    data0_in,
    data0_inout,
    data0_out,
    data1_in,
    data1_inout,
    data1_out,
    data2_in,
    data2_inout,
    data2_out,
    data3_in,
    data3_inout,
    data3_out,
    data4_in,
    data4_inout,
    data4_out,
    data5_in,
    data5_inout,
    data5_out,
    data6_in,
    data6_inout,
    data6_out,
    data7_in,
    data7_inout,
    data7_out,
    gpio0_in,
    gpio0_inout,
    gpio0_out,
    gpio1_in,
    gpio1_inout,
    gpio1_out,
    gpio2_in,
    gpio2_inout,
    gpio2_out,
    gpio3_in,
    gpio3_inout,
    gpio3_out,
    gpio4_in,
    gpio4_inout,
    gpio4_out,
    gpio5_in,
    gpio5_inout,
    gpio5_out,
    gpio6_in,
    gpio6_inout,
    gpio6_out,
    gpio7_in,
    gpio7_inout,
    gpio7_out);
    input       clock;
    input       data0_in;
    inout       data0_inout;
    output      data0_out;
    input       data1_in;
    inout       data1_inout;
    output      data1_out;
    input       data2_in;
    inout       data2_inout;
    output      data2_out;
    input       data3_in;
    inout       data3_inout;
    output      data3_out;
    input       data4_in;
    inout       data4_inout;
    output      data4_out;
    input       data5_in;
    inout       data5_inout;
    output      data5_out;
    input       data6_in;
    inout       data6_inout;
    output      data6_out;
    input       data7_in;
    inout       data7_inout;
    output      data7_out;
    input       gpio0_in;
    inout       gpio0_inout;
    output      gpio0_out;
    input       gpio1_in;
    inout       gpio1_inout;
    output      gpio1_out;
    input       gpio2_in;
    inout       gpio2_inout;
    output      gpio2_out;
    input       gpio3_in;
    inout       gpio3_inout;
    output      gpio3_out;
    input       gpio4_in;
    inout       gpio4_inout;
    output      gpio4_out;
    input       gpio5_in;
    inout       gpio5_inout;
    output      gpio5_out;
    input       gpio6_in;
    inout       gpio6_inout;
    output      gpio6_out;
    input       gpio7_in;
    inout       gpio7_inout;
    output      gpio7_out;


          wire  Net_654;
          wire  Net_766;
          wire  Net_776;
          wire  Net_797;
          wire  Net_798;
          wire  Net_799;
          wire  Net_800;
          wire  Net_801;
          wire  Net_761;
          wire  Net_796;
          wire  Net_794;
          wire  Net_792;
          wire  Net_790;
          wire  Net_788;
          wire  Net_775;
          wire  Net_772;

    cy_m0s8_prgio_v1_0 cy_m0s8_prgio (
        .clock(clock),
        .data0_i(data0_in),
        .data0_io(data0_inout),
        .data0_o(data0_out),
        .data1_i(data1_in),
        .data1_io(data1_inout),
        .data1_o(data1_out),
        .data2_i(data2_in),
        .data2_io(data2_inout),
        .data2_o(data2_out),
        .data3_i(data3_in),
        .data3_io(data3_inout),
        .data3_o(data3_out),
        .data4_i(data4_in),
        .data4_io(data4_inout),
        .data4_o(data4_out),
        .data5_i(data5_in),
        .data5_io(data5_inout),
        .data5_o(data5_out),
        .data6_i(data6_in),
        .data6_io(data6_inout),
        .data6_o(data6_out),
        .data7_i(data7_in),
        .data7_io(data7_inout),
        .data7_o(data7_out),
        .gpio0_i(Net_654),
        .gpio0_io(gpio0_inout),
        .gpio0_o(gpio0_out),
        .gpio1_i(Net_766),
        .gpio1_io(gpio1_inout),
        .gpio1_o(gpio1_out),
        .gpio2_i(Net_776),
        .gpio2_io(gpio2_inout),
        .gpio2_o(gpio2_out),
        .gpio3_i(Net_797),
        .gpio3_io(gpio3_inout),
        .gpio3_o(gpio3_out),
        .gpio4_i(Net_798),
        .gpio4_io(gpio4_inout),
        .gpio4_o(gpio4_out),
        .gpio5_i(Net_799),
        .gpio5_io(gpio5_inout),
        .gpio5_o(gpio5_out),
        .gpio6_i(Net_800),
        .gpio6_io(gpio6_inout),
        .gpio6_o(gpio6_out),
        .gpio7_i(Net_801),
        .gpio7_io(gpio7_inout),
        .gpio7_o(gpio7_out));
    defparam cy_m0s8_prgio.port_id = 3;

	// VirtualMux_0 (cy_virtualmux_v1_0)
	assign Net_654 = gpio0_in;

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_766 = gpio1_in;

	// VirtualMux_2 (cy_virtualmux_v1_0)
	assign Net_776 = gpio2_in;

	// VirtualMux_3 (cy_virtualmux_v1_0)
	assign Net_797 = gpio3_in;

	// VirtualMux_4 (cy_virtualmux_v1_0)
	assign Net_798 = gpio4_in;

	// VirtualMux_5 (cy_virtualmux_v1_0)
	assign Net_799 = gpio5_in;

	// VirtualMux_6 (cy_virtualmux_v1_0)
	assign Net_800 = gpio6_in;

	// VirtualMux_7 (cy_virtualmux_v1_0)
	assign Net_801 = gpio7_in;



endmodule

// TCPWM_P4_v2_10(Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, PinVisibility_index=false, PinVisibility_kill=false, PinVisibility_phiA=false, PinVisibility_phiB=false, PinVisibility_switch=false, PWMCompare=10000, PWMCompareBuf=65535, PWMCompareSwap=0, PWMCountMode=3, PWMCountPresent=false, PWMDeadTimeCycle=0, PWMInterruptMask=1, PWMKillEvent=0, PWMLinenSignal=0, PWMLineSignal=0, PWMMode=4, PWMPeriod=20000, PWMPeriodBuf=65535, PWMPeriodSwap=0, PWMPrescaler=0, PWMReloadMode=0, PWMReloadPresent=false, PWMRunMode=0, PWMSetAlign=0, PWMStartMode=0, PWMStartPresent=false, PWMStopEvent=0, PWMStopMode=0, PWMStopPresent=false, PWMSwitchMode=0, PWMSwitchPresent=false, QuadAutoStart=true, QuadEncodingModes=0, QuadIndexMode=0, QuadIndexPresent=false, QuadInterruptMask=1, QuadPhiAMode=3, QuadPhiBMode=3, QuadStopMode=0, QuadStopPresent=false, TCCaptureMode=0, TCCapturePresent=false, TCCompare=65535, TCCompareBuf=65535, TCCompareSwap=0, TCCompCapMode=2, TCCountingModes=0, TCCountMode=3, TCCountPresent=false, TCInterruptMask=1, TCPeriod=65535, TCPrescaler=0, TCPWMCapturePresent=false, TCPWMConfig=7, TCPWMCountPresent=false, TCPWMReloadPresent=false, TCPWMStartPresent=false, TCPWMStopPresent=false, TCReloadMode=0, TCReloadPresent=false, TCRunMode=0, TCStartMode=0, TCStartPresent=false, TCStopMode=0, TCStopPresent=false, TermMode_capture=0, TermMode_cc=0, TermMode_clock=0, TermMode_count=0, TermMode_interrupt=0, TermMode_line=0, TermMode_line_n=0, TermMode_ov=0, TermMode_reload=0, TermMode_start=0, TermMode_stop=0, TermMode_un=0, TermModeStates=, TermVisibility_capture=false, TermVisibility_cc=true, TermVisibility_clock=true, TermVisibility_count=false, TermVisibility_interrupt=true, TermVisibility_line=true, TermVisibility_line_n=true, TermVisibility_ov=true, TermVisibility_reload=false, TermVisibility_start=false, TermVisibility_stop=false, TermVisibility_un=true, CY_API_CALLBACK_HEADER_INCLUDE=#include "cyapicallbacks.h", CY_COMMENT=, CY_COMPONENT_NAME=TCPWM_P4_v2_10, CY_CONFIG_TITLE=PWM_2, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=PWM_2, CY_INSTANCE_SHORT_NAME=PWM_2, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=10, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=PWM_2, )
module TCPWM_P4_v2_10_2 (
    capture,
    cc,
    clock,
    count,
    interrupt,
    line,
    line_n,
    ov,
    reload,
    start,
    stop,
    un);
    input       capture;
    output      cc;
    input       clock;
    input       count;
    output      interrupt;
    output      line;
    output      line_n;
    output      ov;
    input       reload;
    input       start;
    input       stop;
    output      un;


          wire  Net_64;
          wire  Net_63;
          wire  Net_85;
          wire  Net_62;
          wire  Net_110;
          wire  Net_95;
          wire  Net_106;
          wire  Net_104;
          wire  Net_109;
          wire  Net_98;
          wire  Net_108;
          wire  Net_101;
          wire  Net_66;
          wire  Net_81;
          wire  Net_75;
          wire  Net_69;
          wire  Net_82;
          wire  Net_72;

    cy_m0s8_tcpwm_v1_0 cy_m0s8_tcpwm_1 (
        .capture(Net_75),
        .clock(Net_81),
        .compare_match(cc),
        .count(Net_69),
        .interrupt(interrupt),
        .line_out(line),
        .line_out_compl(line_n),
        .overflow(ov),
        .reload(Net_66),
        .start(Net_72),
        .stop(Net_82),
        .underflow(un));

	// VMux_reload (cy_virtualmux_v1_0)
	assign Net_66 = reload;

	// VMux_count (cy_virtualmux_v1_0)
	assign Net_69 = count;

	// VMux_start (cy_virtualmux_v1_0)
	assign Net_72 = start;

	// VMux_capture (cy_virtualmux_v1_0)
	assign Net_75 = capture;

	// VMux_stop (cy_virtualmux_v1_0)
	assign Net_82 = stop;

	// VMux_clock (cy_virtualmux_v1_0)
	assign Net_81 = clock;



endmodule

// top
module top ;

          wire  Net_97;
          wire  Net_96;
          wire  Net_95;
          wire  Net_94;
          wire  Net_93;
          wire  Net_91;
          wire  Net_90;
          wire  Net_89;
          wire  Net_87;
          wire  Net_86;
          wire  Net_85;
          wire  Net_69;
          wire  Net_67;
          wire  Net_83;
          wire  Net_65;
          wire  Net_63;
          wire  Net_81;
          wire  Net_61;
          wire  Net_59;
          wire  Net_57;
          wire  Net_55;
          wire  Net_77;
          wire  Net_53;
          wire  Net_51;
          wire  Net_75;
          wire  Net_49;
          wire  Net_47;
          wire  Net_73;
          wire  Net_45;
          wire  Net_43;
          wire  Net_71;
          wire  Net_41;
          wire  Net_39;
          wire  Net_84;
          wire  Net_68;
          wire  Net_82;
          wire  Net_64;
          wire  Net_62;
          wire  Net_80;
          wire  Net_60;
          wire  Net_78;
          wire  Net_56;
          wire  Net_54;
          wire  Net_76;
          wire  Net_52;
          wire  Net_50;
          wire  Net_74;
          wire  Net_48;
          wire  Net_46;
          wire  Net_72;
          wire  Net_44;
          wire  Net_42;
          wire  Net_70;
          wire  Net_40;
          wire  Net_38;
          wire  Net_37;
          wire  Net_22;
          wire  Net_18;
          wire  Net_17;
          wire  Net_16;
          wire  Net_15;
          wire  Net_14;
          wire  Net_12;
          wire  Net_11;
          wire  Net_10;
          wire  Net_8;
          wire  Net_7;
    electrical  Net_24;
          wire  Net_99;
          wire  Net_13;
          wire  Net_92;
          wire  Net_9;
    electrical  Net_2;
    electrical  Net_4;

	wire [0:0] tmpOE__Pin_13_net;
	wire [0:0] tmpFB_0__Pin_13_net;
	wire [0:0] tmpIO_0__Pin_13_net;
	wire [0:0] tmpINTERRUPT_0__Pin_13_net;
	electrical [0:0] tmpSIOVREF__Pin_13_net;

	cy_psoc3_pins_v1_10
		#(.id("e851a3b9-efb8-48be-bbb8-b303b216c393"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Pin_13
		 (.oe(tmpOE__Pin_13_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Pin_13_net[0:0]}),
		  .io({tmpIO_0__Pin_13_net[0:0]}),
		  .siovref(tmpSIOVREF__Pin_13_net),
		  .interrupt({tmpINTERRUPT_0__Pin_13_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Pin_13_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    cy_annotation_universal_v1_0 R_1 (
        .connect({
            Net_2,
            Net_4
        })
    );
    defparam R_1.comp_name = "Resistor_v1_0";
    defparam R_1.port_names = "T1, T2";
    defparam R_1.width = 2;

    cy_annotation_universal_v1_0 D_1 (
        .connect({
            Net_4,
            Net_24
        })
    );
    defparam D_1.comp_name = "LED_v1_0";
    defparam D_1.port_names = "A, K";
    defparam D_1.width = 2;

    cy_annotation_universal_v1_0 PWR_1 (
        .connect({
            Net_2
        })
    );
    defparam PWR_1.comp_name = "Power_v1_0";
    defparam PWR_1.port_names = "T1";
    defparam PWR_1.width = 1;

    TCPWM_P4_v2_10_0 PWM_1 (
        .capture(1'b0),
        .cc(Net_8),
        .clock(Net_9),
        .count(1'b1),
        .interrupt(Net_11),
        .line(Net_12),
        .line_n(Net_13),
        .ov(Net_14),
        .reload(1'b0),
        .start(1'b0),
        .stop(1'b0),
        .un(Net_18));


	cy_clock_v1_0
		#(.id("4487be5a-4639-4f50-bbdb-fb560cbe1b99"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("500000000"),
		  .is_direct(0),
		  .is_digital(0))
		Clock_1
		 (.clock_out(Net_9));


    SmartIO_v1_10_1 SmartIO_1 (
        .clock(1'b0),
        .data0_in(1'b0),
        .data0_inout(Net_40),
        .data0_out(Net_70),
        .data1_in(1'b0),
        .data1_inout(Net_44),
        .data1_out(Net_72),
        .data2_in(1'b0),
        .data2_inout(Net_48),
        .data2_out(Net_74),
        .data3_in(1'b0),
        .data3_inout(Net_52),
        .data3_out(Net_76),
        .data4_in(1'b0),
        .data4_inout(Net_56),
        .data4_out(Net_78),
        .data5_in(Net_13),
        .data5_inout(Net_60),
        .data5_out(Net_80),
        .data6_in(1'b0),
        .data6_inout(Net_64),
        .data6_out(Net_82),
        .data7_in(Net_92),
        .data7_inout(Net_68),
        .data7_out(Net_84),
        .gpio0_in(1'b0),
        .gpio0_inout(Net_41),
        .gpio0_out(Net_71),
        .gpio1_in(1'b0),
        .gpio1_inout(Net_45),
        .gpio1_out(Net_73),
        .gpio2_in(1'b0),
        .gpio2_inout(Net_49),
        .gpio2_out(Net_75),
        .gpio3_in(1'b0),
        .gpio3_inout(Net_53),
        .gpio3_out(Net_77),
        .gpio4_in(1'b0),
        .gpio4_inout(Net_57),
        .gpio4_out(Net_99),
        .gpio5_in(1'b0),
        .gpio5_inout(Net_61),
        .gpio5_out(Net_81),
        .gpio6_in(1'b0),
        .gpio6_inout(Net_65),
        .gpio6_out(Net_83),
        .gpio7_in(1'b0),
        .gpio7_inout(Net_69),
        .gpio7_out(Net_85));

    TCPWM_P4_v2_10_2 PWM_2 (
        .capture(1'b0),
        .cc(Net_87),
        .clock(Net_9),
        .count(1'b1),
        .interrupt(Net_90),
        .line(Net_91),
        .line_n(Net_92),
        .ov(Net_93),
        .reload(1'b0),
        .start(1'b0),
        .stop(1'b0),
        .un(Net_97));

	wire [0:0] tmpOE__LED_1_net;
	wire [0:0] tmpFB_0__LED_1_net;
	wire [0:0] tmpIO_0__LED_1_net;
	wire [0:0] tmpINTERRUPT_0__LED_1_net;
	electrical [0:0] tmpSIOVREF__LED_1_net;

	cy_psoc3_pins_v1_10
		#(.id("0a187ee9-5a69-4a62-b1fe-6671d82d5646"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		LED_1
		 (.oe(tmpOE__LED_1_net),
		  .y({Net_99}),
		  .fb({tmpFB_0__LED_1_net[0:0]}),
		  .io({tmpIO_0__LED_1_net[0:0]}),
		  .siovref(tmpSIOVREF__LED_1_net),
		  .interrupt({tmpINTERRUPT_0__LED_1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LED_1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};



endmodule

