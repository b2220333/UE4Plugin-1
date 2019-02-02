// Copyright 2019 modio. All Rights Reserved.
// Released under MIT.

#include "FModioModfile.h"

void InitializeModfile(FModioModfile &Modfile, const modio::Modfile &modio_modfile)
{
  Modfile.Id = modio_modfile.id;
  Modfile.ModId = modio_modfile.mod_id;
  Modfile.VirusStats = modio_modfile.virus_status;
  Modfile.VirusPositive = modio_modfile.virus_positive;
  Modfile.DateAdded = modio_modfile.date_added;
  Modfile.DateScanned = modio_modfile.date_scanned;
  Modfile.Filesize = modio_modfile.filesize;
  Modfile.Filename = UTF8_TO_TCHAR(modio_modfile.filename.c_str());
  Modfile.Version = UTF8_TO_TCHAR(modio_modfile.version.c_str());
  Modfile.VirustotalHash = UTF8_TO_TCHAR(modio_modfile.virustotal_hash.c_str());
  Modfile.Changelog = UTF8_TO_TCHAR(modio_modfile.changelog.c_str());
  Modfile.MetadataBlob = UTF8_TO_TCHAR(modio_modfile.metadata_blob.c_str());
  InitializeFilehash(Modfile.Filehash, modio_modfile.filehash);
  InitializeDownload(Modfile.Download, modio_modfile.download);
}

void InitializeModfileC(FModioModfile &Modfile, const ModioModfile &modio_modfile)
{
  Modfile.Id = modio_modfile.id;
  Modfile.ModId = modio_modfile.mod_id;
  Modfile.VirusStats = modio_modfile.virus_status;
  Modfile.VirusPositive = modio_modfile.virus_positive;
  Modfile.DateAdded = modio_modfile.date_added;
  Modfile.DateScanned = modio_modfile.date_scanned;
  Modfile.Filesize = modio_modfile.filesize;
  Modfile.Filename = UTF8_TO_TCHAR(modio_modfile.filename);
  Modfile.Version = UTF8_TO_TCHAR(modio_modfile.version);
  Modfile.VirustotalHash = UTF8_TO_TCHAR(modio_modfile.virustotal_hash);
  Modfile.Changelog = UTF8_TO_TCHAR(modio_modfile.changelog);
  Modfile.MetadataBlob = UTF8_TO_TCHAR(modio_modfile.metadata_blob);
  InitializeFilehashC(Modfile.Filehash, modio_modfile.filehash);
  InitializeDownloadC(Modfile.Download, modio_modfile.download);
}