// Copyright (c) 2009-2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://opensource.org.

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

#include "headers.h"
#include "checkpoints.h"

namespace Checkpoints
{
    typedef std::map<int, uint256> MapCheckpoints;

    // Создаем абсолютно пустую карту без использования Boost
    static MapCheckpoints mapCheckpoints;

    bool CheckBlock(int nHeight, const uint256& hash)
    {
        return true; 
    }

    int GetTotalBlocksEstimate()
    {
        return 0;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        return NULL;
    }
}
