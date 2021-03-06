/*
 *      Copyright (C) 2005-2013 Team XBMC
 *      http://kodi.tv
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

#include "URL.h"
#include "PlayList.h"

namespace PLAYLIST
{
class CPlayListM3U :
      public CPlayList
{
public:
  static const char *StartMarker;
  static const char *InfoMarker;
  static const char *ArtistMarker;
  static const char *AlbumMarker;
  static const char *PropertyMarker;
  static const char *VLCOptMarker;
  static const char *StreamMarker;
  static const char *BandwidthMarker;
  static const char *OffsetMarker;

public:
  CPlayListM3U(void);
  ~CPlayListM3U(void) override;
  bool Load(const std::string& strFileName) override;
  void Save(const std::string& strFileName) const override;

  static std::map<std::string,std::string> ParseStreamLine(const std::string &streamLine);
};
}
