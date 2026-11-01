#pragma once

// Windows requires four numeric components; the public version omits the zero.
#define DOA1U_VERSION_NUMERIC 0,9,5,0
#define DOA1U_VERSION_STRING "0.9.5"
#define DOA1U_WIDEN_IMPL(value) L##value
#define DOA1U_WIDEN(value) DOA1U_WIDEN_IMPL(value)
#define DOA1U_WINDOW_TITLE "Dead or Alive 1: ULTIMATE - v" DOA1U_VERSION_STRING
#define DOA1U_WINDOW_TITLE_W L"Dead or Alive 1: ULTIMATE - v" DOA1U_WIDEN(DOA1U_VERSION_STRING)
