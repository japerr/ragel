/*
 *  Copyright 2003 Adrian Thurston <adriant@ragel.ca>
 */

/*  This file is part of Aapl.
 *
 *  Aapl is free software; you can redistribute it and/or modify it under the
 *  terms of the GNU Lesser General Public License as published by the Free
 *  Software Foundation; either version 2.1 of the License, or (at your option)
 *  any later version.
 *
 *  Aapl is distributed in the hope that it will be useful, but WITHOUT ANY
 *  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 *  FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 *  more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Aapl; if not, write to the Free Software Foundation, Inc., 59
 *  Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef _AAPL_TDLISTMEL_H
#define _AAPL_TDLISTMEL_H

#include "dlist.h"

#define BASE_EL(name) BaseEl::name
#define BASECAST(name) static_cast<TDListEl*>(static_cast<BaseEl*>(name))
#define SUPERCAST(name) static_cast<Element*>(static_cast<BaseEl*>(name))
#define TDL_TEMPDEF class Element, class BaseEl
#define TDL_TEMPUSE Element, BaseEl
#define TDList TDListMel

#include "tdlcommon.h"

#undef BASE_EL
#undef BASECAST
#undef SUPERCAST
#undef TDL_TEMPDEF
#undef TDL_TEMPUSE
#undef TDList

#endif /* _AAPL_TDLISTMEL_H */
