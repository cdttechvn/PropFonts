#ifndef Tiny3x7SqPL_font_h
#define Tiny3x7SqPL_font_h

#include "Arduino.h"

const uint8_t Tiny3x7SqPL[] PROGMEM =
{
5, 8, 32, '~'+1+18,   // -width, height, firstChar, lastChar
        0x03, 0x00, 0x00, 0x00, 0x00, 0x00,      //   
        0x01, 0x5F, 0x00, 0x00, 0x00, 0x00,      //  !
        0x03, 0x03, 0x00, 0x03, 0x00, 0x00,      //  "
        0x05, 0x14, 0x7F, 0x14, 0x7F, 0x14,      //  #
        0x03, 0x66, 0xFF, 0x5A, 0x00, 0x00,      //  $
        0x03, 0x31, 0x0C, 0x23, 0x00, 0x00,      //  %
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00,      //  &
        0x03, 0x07, 0x05, 0x07, 0x00, 0x00,      //  '
        0x02, 0x3E, 0x41, 0x00, 0x00, 0x00,      //  (
        0x02, 0x41, 0x3E, 0x00, 0x00, 0x00,      //  )
        0x05, 0x14, 0x08, 0x1C, 0x08, 0x14,      //  *
        0x03, 0x08, 0x1C, 0x08, 0x00, 0x00,      //  +
        0x01, 0xC0, 0x00, 0x00, 0x00, 0x00,      //  ,
        0x03, 0x08, 0x08, 0x08, 0x00, 0x00,      //  -
        0x01, 0x40, 0x00, 0x00, 0x00, 0x00,      //  .
        0x03, 0x70, 0x0C, 0x03, 0x00, 0x00,      //  /
        0x03, 0x7F, 0x41, 0x7F, 0x00, 0x00,      //  0
        0x02, 0x02, 0x7F, 0x00, 0x00, 0x00,      //  1
        0x03, 0x79, 0x49, 0x4F, 0x00, 0x00,      //  2
        0x03, 0x41, 0x49, 0x7F, 0x00, 0x00,      //  3
        0x03, 0x0F, 0x08, 0x7E, 0x00, 0x00,      //  4
        0x03, 0x4F, 0x49, 0x79, 0x00, 0x00,      //  5
        0x03, 0x7F, 0x49, 0x79, 0x00, 0x00,      //  6
        0x03, 0x01, 0x71, 0x0F, 0x00, 0x00,      //  7
        0x03, 0x7F, 0x49, 0x7F, 0x00, 0x00,      //  8
        0x03, 0x4F, 0x49, 0x7F, 0x00, 0x00,      //  9
        0x01, 0x28, 0x00, 0x00, 0x00, 0x00,      //  :
        0x02, 0x80, 0x48, 0x00, 0x00, 0x00,      //  ;
        0x03, 0x08, 0x14, 0x22, 0x00, 0x00,      //  <
        0x03, 0x14, 0x14, 0x14, 0x00, 0x00,      //  =
        0x03, 0x22, 0x14, 0x08, 0x00, 0x00,      //  >
        0x03, 0x02, 0x59, 0x06, 0x00, 0x00,      //  ?
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00,      //  @
        0x03, 0x7F, 0x11, 0x7F, 0x00, 0x00,      //  A
        0x03, 0x7F, 0x49, 0x36, 0x00, 0x00,      //  B
        0x03, 0x7F, 0x41, 0x41, 0x00, 0x00,      //  C
        0x03, 0x7F, 0x41, 0x3E, 0x00, 0x00,      //  D
        0x03, 0x7F, 0x49, 0x41, 0x00, 0x00,      //  E
        0x03, 0x7F, 0x09, 0x01, 0x00, 0x00,      //  F
        0x03, 0x3E, 0x41, 0x3A, 0x00, 0x00,      //  G
        0x03, 0x7F, 0x08, 0x7F, 0x00, 0x00,      //  H
        0x01, 0x7F, 0x00, 0x00, 0x00, 0x00,      //  I
        0x03, 0x21, 0x41, 0x3F, 0x00, 0x00,      //  J
        0x04, 0x7F, 0x08, 0x14, 0x63, 0x00,      //  K
        0x03, 0x7F, 0x40, 0x40, 0x00, 0x00,      //  L
        0x05, 0x7F, 0x02, 0x1C, 0x02, 0x7F,      //  M
        0x04, 0x7F, 0x02, 0x04, 0x7F, 0x00,      //  N
        0x03, 0x3E, 0x41, 0x3E, 0x00, 0x00,      //  O
        0x03, 0x7F, 0x11, 0x0E, 0x00, 0x00,      //  P
        0x03, 0x3E, 0x41, 0xBE, 0x00, 0x00,      //  Q
        0x03, 0x7F, 0x11, 0x6E, 0x00, 0x00,      //  R
        0x03, 0x26, 0x49, 0x32, 0x00, 0x00,      //  S
        0x03, 0x01, 0x7F, 0x01, 0x00, 0x00,      //  T
        0x03, 0x3F, 0x40, 0x7F, 0x00, 0x00,      //  U
        0x03, 0x1F, 0x60, 0x1F, 0x00, 0x00,      //  V
        0x05, 0x1F, 0x60, 0x18, 0x60, 0x1F,      //  W
        0x03, 0x63, 0x1C, 0x63, 0x00, 0x00,      //  X
        0x03, 0x07, 0x78, 0x07, 0x00, 0x00,      //  Y
        0x03, 0x71, 0x49, 0x47, 0x00, 0x00,      //  Z
        0x02, 0x7F, 0x41, 0x00, 0x00, 0x00,      //  [
        0x03, 0x03, 0x1C, 0x60, 0x00, 0x00,      //  BackSlash
        0x02, 0x41, 0x7F, 0x00, 0x00, 0x00,      //  ]
        0x03, 0x02, 0x01, 0x02, 0x00, 0x00,      //  ^
        0x03, 0x80, 0x80, 0x80, 0x00, 0x00,      //  _
        0x02, 0x01, 0x02, 0x00, 0x00, 0x00,      //  `
        0x03, 0x20, 0x54, 0x78, 0x00, 0x00,      //  a
        0x03, 0x3F, 0x44, 0x38, 0x00, 0x00,      //  b
        0x03, 0x38, 0x44, 0x44, 0x00, 0x00,      //  c
        0x03, 0x38, 0x44, 0x7F, 0x00, 0x00,      //  d
        0x03, 0x38, 0x54, 0x58, 0x00, 0x00,      //  e
        0x03, 0x7E, 0x09, 0x02, 0x00, 0x00,      //  f
        0x03, 0x98, 0xA4, 0x58, 0x00, 0x00,      //  g
        0x03, 0x7F, 0x04, 0x78, 0x00, 0x00,      //  h
        0x01, 0x7D, 0x00, 0x00, 0x00, 0x00,      //  i
        0x02, 0x80, 0x7D, 0x00, 0x00, 0x00,      //  j
        0x03, 0x7F, 0x10, 0x6C, 0x00, 0x00,      //  k
        0x03, 0x3F, 0x40, 0x20, 0x00, 0x00,      //  l
        0x05, 0x78, 0x04, 0x38, 0x04, 0x78,      //  m
        0x03, 0x7C, 0x04, 0x78, 0x00, 0x00,      //  n
        0x03, 0x38, 0x44, 0x38, 0x00, 0x00,      //  o
        0x03, 0xFC, 0x24, 0x18, 0x00, 0x00,      //  p
        0x03, 0x18, 0x24, 0xFC, 0x00, 0x00,      //  q
        0x03, 0x7C, 0x08, 0x04, 0x00, 0x00,      //  r
        0x03, 0x48, 0x54, 0x24, 0x00, 0x00,      //  s
        0x03, 0x04, 0x3F, 0x44, 0x00, 0x00,      //  t
        0x03, 0x3C, 0x40, 0x7C, 0x00, 0x00,      //  u
        0x03, 0x1C, 0x60, 0x1C, 0x00, 0x00,      //  v
        0x05, 0x3C, 0x40, 0x30, 0x40, 0x3C,      //  w
        0x03, 0x44, 0x38, 0x44, 0x00, 0x00,      //  x
        0x03, 0x9C, 0xA0, 0x7C, 0x00, 0x00,      //  y
        0x03, 0x64, 0x54, 0x4C, 0x00, 0x00,      //  z
        0x03, 0x08, 0x36, 0x41, 0x00, 0x00,      //  {
        0x01, 0x7F, 0x00, 0x00, 0x00, 0x00,      //  |
        0x03, 0x41, 0x36, 0x08, 0x00, 0x00,      //  }
        0x04, 0x02, 0x01, 0x02, 0x01, 0x00,      //  ~
        0x03, 0xFF, 0x81, 0xFF, 0x00, 0x00,      //  
        0x03, 0x7E, 0x91, 0x7E, 0x00, 0x00,      //  €
        0x03, 0x3C, 0x42, 0x25, 0x00, 0x00,      //  
        0x03, 0x7F, 0x49, 0x81, 0x00, 0x00,      //  ‚
        0x03, 0x7F, 0x48, 0x44, 0x00, 0x00,      //  
        0x04, 0x7E, 0x04, 0x09, 0x7E, 0x00,      //  „
        0x03, 0x3C, 0x42, 0x3D, 0x00, 0x00,      //  …
        0x03, 0x24, 0x4A, 0x33, 0x00, 0x00,      //  †
        0x03, 0x76, 0x4B, 0x46, 0x00, 0x00,      //  ‡
        0x03, 0x69, 0x5D, 0x4B, 0x00, 0x00,      //  
        0x03, 0x20, 0x54, 0xF8, 0x00, 0x00,      //  ‰
        0x03, 0x38, 0x46, 0x45, 0x00, 0x00,      //  Š
        0x03, 0x38, 0x54, 0x98, 0x00, 0x00,      //  ‹
        0x03, 0x10, 0x3F, 0x44, 0x00, 0x00,      //  Ś
        0x03, 0x7C, 0x06, 0x79, 0x00, 0x00,      //  Ť
        0x03, 0x38, 0x46, 0x39, 0x00, 0x00,      //  Ž
        0x03, 0x48, 0x56, 0x25, 0x00, 0x00,      //  Ź
        0x03, 0x64, 0x56, 0x4D, 0x00, 0x00,      //  
        0x03, 0x64, 0x55, 0x4C, 0x00, 0x00,      //  ‘
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00,      //  ’
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00,      //  “
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00,      //  ”
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00,      //  •
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00       //  –
        };

#endif

