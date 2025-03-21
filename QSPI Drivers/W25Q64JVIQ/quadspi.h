/* USER CODE BEGIN Private defines */
uint8_t CSP_QUADSPI_Init(void);
uint8_t CSP_QSPI_EraseSector(uint32_t EraseStartAddress ,uint32_t EraseEndAddress);
uint8_t CSP_QSPI_WriteMemory(uint8_t* buffer, uint32_t address, uint32_t buffer_size);
uint8_t CSP_QSPI_EnableMemoryMappedMode(void);
uint8_t CSP_QSPI_Erase_Chip (void);

/* USER CODE END Private defines */


/* USER CODE BEGIN Prototypes */

/*W25Q64JVIQ memory parameters*/
#define MEMORY_FLASH_SIZE				0x0800000 /* 64 MBits => 8 MBytes */
#define MEMORY_BLOCK_SIZE				0x10000   /* 128 sectors ( Blocks ) of 64KBytes */
#define MEMORY_SECTOR_SIZE				0x1000    /* 2048 subsectors ( Sectors ) of 4kBytes */
#define MEMORY_PAGE_SIZE				0x100     /* 32768 pages of 256 bytes */


/*W25Q64JVIQ commands */
#define WRITE_ENABLE_CMD 0x06
#define READ_STATUS_REG_CMD 0x05
#define READ_STATUS_REG2_CMD 0x35
#define READ_STATUS_REG3_CMD 0x15
#define READ_FLAG_STATUS_REG_CMD 0x05
#define WRITE_STATUS_REG_CMD 0x01
#define WRITE_STATUS_REG2_CMD 0x31
#define WRITE_STATUS_REG3_CMD 0x11
#define SECTOR_ERASE_CMD 0x20
#define CHIP_ERASE_CMD 0xC7
#define QUAD_IN_FAST_PROG_CMD 0x32
#define READ_CONFIGURATION_REG_CMD 0x35			//see reg2 as cfg register
#define QUAD_READ_IO_CMD 0xEB
#define QUAD_OUT_FAST_READ_CMD 0x6B
#define QPI_ENABLE_CMD 0x35						//deprecated, this W25Q64JV device is enabled by writing status register
#define DUMMY_CLOCK_CYCLES_READ_QUAD 4
#define DUMMY_CLOCK_CYCLES_READ_QUAD_IO 6
#define RESET_ENABLE_CMD 0x66
#define RESET_EXECUTE_CMD 0x99
#define DISABLE_QIP_MODE 0xf5					//deprecated

/* USER CODE END Prototypes */