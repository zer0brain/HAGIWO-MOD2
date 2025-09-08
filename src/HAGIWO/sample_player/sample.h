#ifndef SAMPLE_H
#define SAMPLE_H

#include <pgmspace.h>
#include <stdint.h>

/* ============================================================ */
/* ★ 18 Sample Data Arrays                                      */
/*    16-bit PCM (Little-Endian) stored as 8-bit byte sequences  */
/*    Copy the contents of each array from your converter        */
/* ============================================================ */
const uint8_t sample01[] PROGMEM = { /* <<< sample01 data >>> */ };
const uint8_t sample02[] PROGMEM = { /* <<< sample02 data >>> */ };
const uint8_t sample03[] PROGMEM = { /* <<< sample03 data >>> */ };
const uint8_t sample04[] PROGMEM = { /* <<< sample04 data >>> */ };
const uint8_t sample05[] PROGMEM = { /* <<< sample05 data >>> */ };
const uint8_t sample06[] PROGMEM = { /* <<< sample06 data >>> */ };
const uint8_t sample07[] PROGMEM = { /* <<< sample07 data >>> */ };
const uint8_t sample08[] PROGMEM = { /* <<< sample08 data >>> */ };
const uint8_t sample09[] PROGMEM = { /* <<< sample09 data >>> */ };
const uint8_t sample10[] PROGMEM = { /* <<< sample10 data >>> */ };
const uint8_t sample11[] PROGMEM = { /* <<< sample11 data >>> */ };
const uint8_t sample12[] PROGMEM = { /* <<< sample12 data >>> */ };
const uint8_t sample13[] PROGMEM = { /* <<< sample13 data >>> */ };
const uint8_t sample14[] PROGMEM = { /* <<< sample14 data >>> */ };
const uint8_t sample15[] PROGMEM = { /* <<< sample15 data >>> */ };
const uint8_t sample16[] PROGMEM = { /* <<< sample16 data >>> */ };
const uint8_t sample17[] PROGMEM = { /* <<< sample17 data >>> */ };
const uint8_t sample18[] PROGMEM = { /* <<< sample18 data >>> */ };

/* Calculate sample length in 16-bit units */
#define SAMPLEN(x) (sizeof(x) / 2)

/* Array of each sample's length (in 16-bit samples) */
const uint32_t sampleLens[18] = {
  SAMPLEN(sample01), SAMPLEN(sample02), SAMPLEN(sample03),
  SAMPLEN(sample04), SAMPLEN(sample05), SAMPLEN(sample06),
  SAMPLEN(sample07), SAMPLEN(sample08), SAMPLEN(sample09),
  SAMPLEN(sample10), SAMPLEN(sample11), SAMPLEN(sample12),
  SAMPLEN(sample13), SAMPLEN(sample14), SAMPLEN(sample15),
  SAMPLEN(sample16), SAMPLEN(sample17), SAMPLEN(sample18)
};

/* Array of pointers to sample data stored in flash */
const uint8_t* const samples[18] = {
  sample01, sample02, sample03, sample04, sample05, sample06,
  sample07, sample08, sample09, sample10, sample11, sample12,
  sample13, sample14, sample15, sample16, sample17, sample18
};

#endif // SAMPLE_H
