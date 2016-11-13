#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t2107922160;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
extern "C"  void CurveControlledBob__ctor_m1624125956 (CurveControlledBob_t2107922160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
extern "C"  void CurveControlledBob_Setup_m2972201010 (CurveControlledBob_t2107922160 * __this, Camera_t189460977 * ___camera0, float ___bobBaseInterval1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
extern "C"  Vector3_t2243707580  CurveControlledBob_DoHeadBob_m1976998139 (CurveControlledBob_t2107922160 * __this, float ___speed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
