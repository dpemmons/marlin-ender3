/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

#include <stdint.h>

// Unifont Greek 32pt, capital 'A' heigth: 20px, width: 100%, range: 0x0386-0x03ce, glyphs: 63
extern const uint8_t Unifont_Greek_20[3014] = {
  129,20,134,3,206,3,28,252, // unifont_t
  // 0x0386  Ά
  12,28,56,16,2,0,12,0,12,0,48,0,48,0,192,0,192,0,0,0,0,0,15,0,15,0,48,192,48,192,48,192,48,192,192,48,192,48,192,48,192,48,255,240,255,240,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x0387  ·
  255,
  // 0x0388  Έ
  12,28,56,16,2,0,12,0,12,0,48,0,48,0,192,0,192,0,0,0,0,0,255,240,255,240,192,0,192,0,192,0,192,0,192,0,192,0,255,192,255,192,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x0389  Ή
  12,28,56,16,2,0,12,0,12,0,48,0,48,0,192,0,192,0,0,0,0,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,255,240,255,240,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x038a  Ί
  12,28,56,16,2,0,12,0,12,0,48,0,48,0,192,0,192,0,0,0,0,0,63,240,63,240,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,63,240,63,240,
  // 0x038b  ΋
  255,
  // 0x038c  Ό
  12,28,56,16,2,0,12,0,12,0,48,0,48,0,192,0,192,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x038d  ΍
  255,
  // 0x038e  Ύ
  14,28,56,16,2,0,12,0,12,0,48,0,48,0,192,0,192,0,0,0,0,0,192,12,192,12,192,12,192,12,48,48,48,48,48,48,48,48,12,192,12,192,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,
  // 0x038f  Ώ
  14,30,60,16,2,254,12,0,12,0,48,0,48,0,192,0,192,0,0,0,0,0,63,240,63,240,192,12,192,12,192,12,192,12,192,12,192,12,192,12,192,12,192,12,192,12,192,12,192,12,48,48,48,48,12,192,12,192,12,192,12,192,252,252,252,252,
  // 0x0390  ΐ
  255,
  // 0x0391  Α
  12,20,40,16,2,0,15,0,15,0,48,192,48,192,48,192,48,192,192,48,192,48,192,48,192,48,255,240,255,240,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x0392  Β
  12,20,40,16,2,0,255,192,255,192,192,48,192,48,192,48,192,48,192,48,192,48,255,192,255,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,255,192,255,192,
  // 0x0393  Γ
  12,20,40,16,2,0,255,240,255,240,192,48,192,48,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,
  // 0x0394  Δ
  14,20,40,16,2,0,3,0,3,0,3,0,3,0,12,192,12,192,12,192,12,192,48,48,48,48,48,48,48,48,48,48,48,48,192,12,192,12,192,12,192,12,255,252,255,252,
  // 0x0395  Ε
  12,20,40,16,2,0,255,240,255,240,192,0,192,0,192,0,192,0,192,0,192,0,255,192,255,192,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x0396  Ζ
  12,20,40,16,2,0,255,240,255,240,0,48,0,48,0,48,0,48,0,192,0,192,3,0,3,0,12,0,12,0,48,0,48,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x0397  Η
  12,20,40,16,2,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,255,240,255,240,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x0398  Θ
  12,20,40,16,2,0,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,207,48,207,48,207,48,207,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0399  Ι
  10,20,40,16,4,0,255,192,255,192,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,
  // 0x039a  Κ
  12,20,40,16,2,0,192,48,192,48,192,192,192,192,195,0,195,0,204,0,204,0,240,0,240,0,240,0,240,0,204,0,204,0,195,0,195,0,192,192,192,192,192,48,192,48,
  // 0x039b  Λ
  14,20,40,16,2,0,3,0,3,0,3,0,3,0,12,192,12,192,12,192,12,192,48,48,48,48,48,48,48,48,48,48,48,48,192,12,192,12,192,12,192,12,192,12,192,12,
  // 0x039c  Μ
  12,20,40,16,2,0,192,48,192,48,192,48,192,48,240,240,240,240,240,240,240,240,207,48,207,48,207,48,207,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x039d  Ν
  12,20,40,16,2,0,192,48,192,48,240,48,240,48,240,48,240,48,204,48,204,48,204,48,204,48,195,48,195,48,195,48,195,48,192,240,192,240,192,240,192,240,192,48,192,48,
  // 0x039e  Ξ
  12,20,40,16,2,0,255,240,255,240,0,0,0,0,0,0,0,0,0,0,0,0,63,192,63,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,240,255,240,
  // 0x039f  Ο
  12,20,40,16,2,0,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x03a0  Π
  14,20,40,16,2,0,255,252,255,252,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,48,
  // 0x03a1  Ρ
  12,20,40,16,2,0,255,192,255,192,192,48,192,48,192,48,192,48,192,48,192,48,255,192,255,192,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,
  // 0x03a2  ΢
  255,
  // 0x03a3  Σ
  12,20,40,16,2,0,255,240,255,240,192,0,192,0,48,0,48,0,12,0,12,0,3,0,3,0,3,0,3,0,12,0,12,0,48,0,48,0,192,0,192,0,255,240,255,240,
  // 0x03a4  Τ
  14,20,40,16,2,0,255,252,255,252,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,
  // 0x03a5  Υ
  14,20,40,16,2,0,192,12,192,12,192,12,192,12,48,48,48,48,48,48,48,48,12,192,12,192,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,
  // 0x03a6  Φ
  14,20,40,16,2,0,255,252,255,252,3,0,3,0,63,240,63,240,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,63,240,63,240,3,0,3,0,255,252,255,252,
  // 0x03a7  Χ
  12,20,40,16,2,0,192,48,192,48,192,48,192,48,48,192,48,192,48,192,48,192,15,0,15,0,15,0,15,0,48,192,48,192,48,192,48,192,192,48,192,48,192,48,192,48,
  // 0x03a8  Ψ
  14,20,40,16,2,0,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,63,240,63,240,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,
  // 0x03a9  Ω
  14,20,40,16,2,0,63,240,63,240,192,12,192,12,192,12,192,12,192,12,192,12,192,12,192,12,192,12,192,12,48,48,48,48,12,192,12,192,12,192,12,192,252,252,252,252,
  // 0x03aa  Ϊ
  255,
  // 0x03ab  Ϋ
  255,
  // 0x03ac  ά
  12,26,52,16,2,0,0,192,0,192,3,0,3,0,12,0,12,0,0,0,0,0,0,0,0,0,60,48,60,48,195,48,195,48,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,195,48,195,48,60,48,60,48,
  // 0x03ad  έ
  12,26,52,16,2,0,0,192,0,192,3,0,3,0,12,0,12,0,0,0,0,0,0,0,0,0,63,240,63,240,192,0,192,0,192,0,192,0,63,192,63,192,192,0,192,0,192,0,192,0,192,0,192,0,63,240,63,240,
  // 0x03ae  ή
  12,30,60,16,2,252,0,192,0,192,3,0,3,0,12,0,12,0,0,0,0,0,0,0,0,0,207,192,207,192,240,48,240,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,0,48,0,48,0,48,0,48,
  // 0x03af  ί
  8,26,26,16,4,0,3,3,12,12,48,48,0,0,0,0,240,240,48,48,48,48,48,48,48,48,48,48,48,48,15,15,
  // 0x03b0  ΰ
  255,
  // 0x03b1  α
  12,16,32,16,2,0,60,48,60,48,195,48,195,48,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,195,48,195,48,60,48,60,48,
  // 0x03b2  β
  12,24,48,16,2,252,63,0,63,0,192,192,192,192,192,192,192,192,192,192,192,192,255,192,255,192,192,48,192,48,192,48,192,48,192,48,192,48,240,48,240,48,207,192,207,192,192,0,192,0,192,0,192,0,
  // 0x03b3  γ
  14,16,32,16,2,0,60,12,60,12,195,12,195,12,3,48,3,48,0,192,0,192,3,0,3,0,3,0,3,0,12,0,12,0,12,0,12,0,
  // 0x03b4  δ
  12,20,40,16,2,0,15,192,15,192,48,0,48,0,48,0,48,0,48,0,48,0,15,0,15,0,48,192,48,192,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x03b5  ε
  12,16,32,16,2,0,63,192,63,192,192,48,192,48,192,0,192,0,63,192,63,192,192,0,192,0,192,0,192,0,192,48,192,48,63,192,63,192,
  // 0x03b6  ζ
  10,24,48,16,4,252,192,0,192,0,192,0,192,0,63,0,63,0,12,0,12,0,48,0,48,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,63,0,63,0,0,192,0,192,63,0,63,0,
  // 0x03b7  η
  12,20,40,16,2,252,207,192,207,192,240,48,240,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,0,48,0,48,0,48,0,48,
  // 0x03b8  θ
  12,20,40,16,2,0,15,0,15,0,48,192,48,192,48,192,48,192,192,48,192,48,255,240,255,240,192,48,192,48,192,48,192,48,48,192,48,192,48,192,48,192,15,0,15,0,
  // 0x03b9  ι
  8,16,16,16,4,0,240,240,48,48,48,48,48,48,48,48,48,48,48,48,15,15,
  // 0x03ba  κ
  10,16,32,16,4,0,192,192,192,192,195,0,195,0,204,0,204,0,240,0,240,0,240,0,240,0,204,0,204,0,195,0,195,0,192,192,192,192,
  // 0x03bb  λ
  12,20,40,16,2,0,48,0,48,0,48,0,48,0,12,0,12,0,12,0,12,0,3,0,3,0,15,0,15,0,48,192,48,192,48,192,48,192,192,48,192,48,192,48,192,48,
  // 0x03bc  μ
  12,20,40,16,2,252,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,240,240,240,240,240,240,240,240,207,48,207,48,192,48,192,48,192,0,192,0,192,0,192,0,
  // 0x03bd  ν
  12,16,32,16,2,0,192,48,192,48,192,48,192,48,192,48,192,48,192,192,192,192,192,192,192,192,195,0,195,0,204,0,204,0,240,0,240,0,
  // 0x03be  ξ
  12,24,48,16,2,252,192,0,192,0,192,0,192,0,63,192,63,192,192,0,192,0,192,0,192,0,63,192,63,192,192,0,192,0,192,0,192,0,63,192,63,192,0,48,0,48,0,48,0,48,63,192,63,192,
  // 0x03bf  ο
  12,16,32,16,2,0,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x03c0  π
  12,16,32,16,2,0,255,240,255,240,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,
  // 0x03c1  ρ
  12,20,40,16,2,252,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,240,48,240,48,207,192,207,192,192,0,192,0,192,0,192,0,
  // 0x03c2  ς
  12,20,40,16,2,252,15,240,15,240,48,0,48,0,192,0,192,0,192,0,192,0,192,0,192,0,48,0,48,0,15,192,15,192,0,48,0,48,0,48,0,48,15,192,15,192,
  // 0x03c3  σ
  14,16,32,16,2,0,63,252,63,252,195,0,195,0,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,63,0,63,0,
  // 0x03c4  τ
  12,16,32,16,2,0,255,240,255,240,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,3,192,3,192,
  // 0x03c5  υ
  12,16,32,16,2,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x03c6  φ
  14,20,40,16,2,252,48,240,48,240,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,63,240,63,240,3,0,3,0,3,0,3,0,
  // 0x03c7  χ
  16,22,44,16,0,252,240,3,240,3,12,3,12,3,12,12,12,12,3,12,3,12,3,48,3,48,3,192,3,192,12,192,12,192,48,192,48,192,48,48,48,48,192,48,192,48,192,15,192,15,
  // 0x03c8  ψ
  14,20,40,16,2,252,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,63,240,63,240,3,0,3,0,3,0,3,0,
  // 0x03c9  ω
  14,16,32,16,2,0,48,48,48,48,192,12,192,12,192,12,192,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,60,240,60,240,
  // 0x03ca  ϊ
  255,
  // 0x03cb  ϋ
  255,
  // 0x03cc  ό
  12,26,52,16,2,0,0,192,0,192,3,0,3,0,12,0,12,0,0,0,0,0,0,0,0,0,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x03cd  ύ
  12,26,52,16,2,0,0,192,0,192,3,0,3,0,12,0,12,0,0,0,0,0,0,0,0,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x03ce  ώ
  14,26,52,16,2,0,0,192,0,192,3,0,3,0,12,0,12,0,0,0,0,0,0,0,0,0,48,48,48,48,192,12,192,12,192,12,192,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,60,240,60,240,
};

#endif // HAS_GRAPHICAL_TFT