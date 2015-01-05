/*
 * Copyright (c) 2003-2015 Rony Shapiro <ronys@users.sourceforge.net>.
 * All rights reserved. Use of the code is allowed under the
 * Artistic License 2.0 terms, as specified in the LICENSE file
 * distributed with this code, or available from
 * http://www.opensource.org/licenses/artistic-license-2.0.php
 */

/** \file pwsclip.h
 *
 * Small wrapper for Clipboard operations
 */

#ifndef _PWSCLIP_H_
#define _PWSCLIP_H_
#include "core/StringX.h"
namespace PWSclip {
  bool SetData(const StringX &text);
  bool ClearData(); // clears clipboard iff last set by us
}

#endif /* _PWSCLIP_H_ */

