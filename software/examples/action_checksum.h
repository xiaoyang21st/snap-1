#ifndef __ACTION_CHECKSUM_H__
#define __ACTION_CHECKSUM_H__

/*
 * Copyright 2016, International Business Machines
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

#include <stdint.h>
#include <libdonut.h>

#define CHECKSUM_CRC32		0x1
#define CHECKSUM_ADDLER32	0x2
#define CHECKSUM_ACTION_TYPE	0x0006

struct checksum_job {
	struct dnut_addr in;	/* input data */
	uint64_t chk_type;	/* CRC32, ADDLER32 */
	uint64_t chk_in;	/* checksum input */
	uint64_t chk_out;	/* checksum output */
};

#endif	/* __ACTION_CHECKSUM_H__ */