// Copyright 2021 ISP RAS
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
////////////////////////////////////////////////////////////////////////////////

#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "swim/swim_proto.h"

uint32_t
tarantool_version_id()
{
    return 1;
}

void cord_on_yield() {}

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size)
{
    struct swim_member_def def;
    char *buf = malloc(size);
    memcpy(buf, data, size);
    char *pos = buf;
    swim_member_def_decode(&def, &pos, pos + size, "");
    free(buf);
    return 0;
}
