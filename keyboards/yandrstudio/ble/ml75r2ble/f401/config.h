/* Copyright 2021 JasonRen(biu)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#ifdef BOOTLOADER_TINYUF2
#        define FEE_FLASH_BASE 0x8000000
#        define FEE_PAGE_BASE_ADDRESS ((uintptr_t)(FEE_FLASH_BASE) + FEE_MCU_FLASH_SIZE * 1024 - (FEE_PAGE_COUNT * FEE_PAGE_SIZE))
#endif
