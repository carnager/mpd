/*
 * Copyright 2003-2017 The Music Player Daemon Project
 * http://www.musicpd.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef MPD_ALSA_HW_SETUP_HXX
#define MPD_ALSA_HW_SETUP_HXX

#include "check.h"
#include "pcm/PcmExport.hxx"

#include <alsa/asoundlib.h>

struct AudioFormat;

namespace Alsa {

/**
 * Wrapper for snd_pcm_hw_params().
 *
 * @param buffer_time the configured buffer time, or 0 if not configured
 * @param period_time the configured period time, or 0 if not configured
 * @param audio_format an #AudioFormat to be configured (or modified)
 * by this function
 * @param params to be modified by this function
 */
void
SetupHw(snd_pcm_t *pcm, snd_pcm_hw_params_t *hwparams,
	unsigned buffer_time, unsigned period_time,
	AudioFormat &audio_format, PcmExport::Params &params);

} // namespace Alsa

#endif