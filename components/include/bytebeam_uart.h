#ifndef _BYTEBEAM_UART_H_
#define _BYTEBEAM_UART_H


enum
{
	STX1_STATE=0,
	STX2_STATE,
	CMD_STATE,
	LEN1_STATE,
	LEN2_STATE,
	DATA_STATE,
	CRC1_STATE,
	CRC2_STATE,
	TIMESTAMP_STATE,
	ETX_STATE,
	STATE_MAX
}UART_PARSER_STATE;

typedef enum tork_bldr_cmds_list_te_tag
{	
	TORK_BLDR_INIT = 22,
	TORK_BLDR_CODE_SIZE_CMD,
	TORK_BLDR_ERASE_CMD,
	TORK_BLDR_SEND_DATA_CMD,
	TORK_BLDR_SEND_JMP_CMD,
	TORK_BLDR_APP_UPDATE_SUCCESS,
	TORK_BLDR_IDLE_STATE
}tork_bldr_cmds_list_te;

enum tork_bldr_cmd_ack_list_e
{
	TORK_BLDR_INIT_ACK = 17,
	TORK_BLDR_CODE_SIZE_CMD_ACK,
	TORK_BLDR_ERASE_CMD_ACK,
	TORK_BLDR_WRITE_DATA_BLOCK_ACK,
	TORK_BLDR_JMP_CMD_ACK
};

typedef enum s32_bldr_cmd_ack_list_te_tag
{
	BOOTLOADER_MODE_ENABLE_CMD_SEND = 5,
	BOOTLOADER_CONFIG_DATA_CMD_SEND,
	BOOTLOADER_1KB_CRC_DATA_SEND,
	BOOTLOADER_END_OF_DATA_CMD_SEND,
	BOOTLOADER_WHOLE_BIN_CRC_CHECK_CMD_SEND,
	BOOTLOADER_JUMPING_TO_BOOTLOADER_CMD_SEND,
	BOOTLOADER_INT_APP_ERASE_CMD_SEND,
	BOOTLOADER_INT_APP_WRITE_CMD_SEND,
	BOOTLOADER_JUMPING_APPLICATION_CMD_SEND,
	BOOTLOADER_APPLICATION_NOT_AVAILABLE_CMD_SEND,
	BOOTLOADER_TIMEOUT_ERROR_WITH_DIAG_TOOL_CMD_SEND,
    BOOTLOADER_STATE_UNKNOWN,
}s32_bldr_cmd_ack_list_te;

#endif