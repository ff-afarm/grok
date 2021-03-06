/*
*    Copyright (C) 2016-2017 Grok Image Compression Inc.
*
*    This source code is free software: you can redistribute it and/or  modify
*    it under the terms of the GNU Affero General Public License, version 3,
*    as published by the Free Software Foundation.
*
*    This source code is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU Affero General Public License for more details.
*
*    You should have received a copy of the GNU Affero General Public License
*    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
 */

#include "t1_factory.h"
#include "t1_impl.h"

namespace grk {

t1_interface* t1_factory::get_t1(bool isEncoder, tcp_t *tcp, tcd_tile_t *tile, uint32_t maxCblkW, uint32_t maxCblkH) {
	return new t1_impl(isEncoder, tcp, tile, maxCblkW, maxCblkH);
}

}