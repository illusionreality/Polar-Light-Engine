/*
 * PLEngineScenePackage.h
 *
 *  Created on: 2009-8-4
 *      Author: DevLinux
 */
#include "PLEngineSceneH.h"
#ifndef PLENGINESCENEPACKAGE_H_
#define PLENGINESCENEPACKAGE_H_
	_ScenePLE_lib_c _CallStack_default_ PLLibraryHandle CreateLibraryPL(HPPLEngine,void_pl *);
	_CallStack_default_  bool_pl InstallLibraryPL(HPPLEngine,PLLibraryHandle,void_pl *);
	_CallStack_default_  HPL_Result UnInstallLibraryPL(HPPLEngine,PLLibraryHandle,void_pl *);
	_CallStack_default_  void_pl Destory_LibraryPL(HPPLEngine,PLLibraryHandle,void_pl *);
#endif /* PLENGINESCENEPACKAGE_H_ */
