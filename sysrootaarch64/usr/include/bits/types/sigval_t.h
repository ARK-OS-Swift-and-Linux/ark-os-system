/*
 * Copyright 2026 Aarav Ravindra Kharade
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __sigval_t_defined
#define __sigval_t_defined

#include <bits/types/__sigval_t.h>

/* To avoid sigval_t (not a standard type name) having C++ name
   mangling depending on whether the selected standard includes union
   sigval, it should not be defined at all when using a standard for
   which the sigval name is not reserved; in that case, headers should
   not include <bits/types/sigval_t.h> and should use only the
   internal __sigval_t name.  */
#ifndef __USE_POSIX199309
# error "sigval_t defined for standard not including union sigval"
#endif

typedef __sigval_t sigval_t;

#endif
