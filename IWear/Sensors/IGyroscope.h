/*
 * Copyright (C) 2018 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * GNU Lesser General Public License v2.1 or any later version.
 */

#ifndef WEAR_IGYROSCOPE
#define WEAR_IGYROSCOPE

#include "ISensor.h"

namespace wear {
    namespace sensor {
        class IGyroscope;
    }
} // namespace wear

class wear::sensor::IGyroscope : public wear::sensor::ISensor
{
public:
    virtual ~IGyroscope() = default;
};

#endif // WEAR_IGYROSCOPE
