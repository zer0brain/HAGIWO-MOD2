/*
  sample.h – Two‑sample configuration (placeholders)
  ------------------------------------------------------------
  • Sample 0: Original break‑drum loop (paste 16‑bit PCM bytes)
  • Sample 1: New break‑drum loop (paste 16‑bit PCM bytes)

  Common format
  • 16‑bit little‑endian PCM, 44.1 kHz, mono
  • Start points are specified in 16‑bit sample counts
  • Declared as const so the data is stored in flash
*/

#pragma once
#include <stdint.h>

// ---------- Sample 0 ----------
const long startTable0[6] = {
  294, 19296, 120956, 33547, 139823, 73859
};

const uint8_t sample0Data[] = {
  /* paste 16‑bit PCM little‑endian bytes here, e.g., 0x34,0x12, ... */
};
const uint32_t sample0Len16 = sizeof(sample0Data) / 2;

// ---------- Sample 1 ----------
const long startTable1[6] = {
  /* change as needed */
  294, 19296, 120956, 33547, 139823, 73859
};

const uint8_t sample1Data[] = {
  /* paste 16‑bit PCM little‑endian bytes here */
};
const uint32_t sample1Len16 = sizeof(sample1Data) / 2;

// ---------- Pointers for common access ----------
const uint8_t* const sampleDatas[2]   = { sample0Data,  sample1Data  };
const uint32_t       sampleLens16[2]  = { sample0Len16, sample1Len16 };
const long*   const  startTables[2]   = { startTable0,  startTable1  };
