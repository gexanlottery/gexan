// Copyright (c) 2015-2017 The Bitcoin Core developers
// Copyright (c) 2017 The GEX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

/**
 * Functionality for communicating with GexGate.
 */
#ifndef BITCOIN_GEXCONTROL_H
#define BITCOIN_GEXCONTROL_H

#include <string>

#include <boost/function.hpp>
#include <boost/chrono/chrono.hpp>
#include <boost/thread.hpp>

extern const std::string DEFAULT_GEX_CONTROL;
static const bool DEFAULT_LISTEN_ONION = true;

void StartGexControl(boost::thread_group& threadGroup);
void InterruptGexControl();
void StopGexControl();

#endif /* BITCOIN_GEXCONTROL_H */


