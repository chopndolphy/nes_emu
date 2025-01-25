#ifndef MEMORY_H
#define MEMORY_H

///////////////////////////////////////////////////
// 0x0000-0x07FF is 2KB of internal RAM + mirroring
#define MEM_RAM_ZERO   = 0x0000 // faster
#define MEM_RAM_STACK  = 0x0100 // starts at 0x01FF and grows downward
#define MEM_RAM_OAMBUF = 0x0200 // typically used to coy to PPU OAM during vblank
#define MEM_RAM_REST   = 0x0300 // the rest of the ram (ends at 0x07FF)
#define MEM_RAM_MIR1   = 0x0800 // mirrors 0x0000-0x07FF
#define MEM_RAM_MIR2   = 0x1000 // mirrors 0x0000-0x07FF
#define MEM_RAM_MIR3   = 0x1800 // mirrors 0x0000-0x07FF
                              
///////////////////////////////////////
// 8 bytes of PPU registers + mirroring
#define MEM_PPU_REG    = 0x2000 
#define MEM_PPU_MIR    = 0x2008 // mirrors the ppu reg (repeating every 8 bytes)
                             
/////////////////////////////////////////////////////////////
// 24 bytes of APU and I/O registers + disabled functionality
#define MEM_APUIO_REG  = 0x4000 // APU and I/O registers
#define MEM_APUIO_DIS  = 0x4018 // normally disabled APU and I/O functionality

////////////////////////////////////////////////////////////
// 0x4020-0xFFFF is unmapped and available for cartridge use
#define MEM_CART_UNMAP = 0x4020 // start of unmapped 
#define MEM_CART_RAM   = 0x6000 // usually cartridge work RAM or battery save
#define MEM_CART_ROM   = 0x8000 // usually cartridge ROM and mapper registers

#endif // MEMORY_H
