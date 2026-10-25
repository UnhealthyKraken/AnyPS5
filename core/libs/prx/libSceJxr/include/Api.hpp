#pragma once

#include "SceTypes.hpp"
#include "prx/libSceJxr/GuestPixelInfo.h"

extern "C" {

std::int64_t APS5_VABI PKFree_nid_postfix(void** memory);
std::int64_t APS5_VABI PixelFormatLookup_nid_postfix(JxrPixelInfo* value, std::uint8_t mode);
int APS5_VABI readIS_nid_postfix(void);
int APS5_VABI writeIS_nid_postfix(void);

}
