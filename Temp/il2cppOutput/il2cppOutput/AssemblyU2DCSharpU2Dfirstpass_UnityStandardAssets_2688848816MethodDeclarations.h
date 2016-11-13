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

// UnityStandardAssets.Utility.CameraRefocus
struct CameraRefocus_t2688848816;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UnityStandardAssets.Utility.CameraRefocus::.ctor(UnityEngine.Camera,UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void CameraRefocus__ctor_m521485776 (CameraRefocus_t2688848816 * __this, Camera_t189460977 * ___camera0, Transform_t3275118058 * ___parent1, Vector3_t2243707580  ___origCameraPos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
extern "C"  void CameraRefocus_ChangeCamera_m1026793793 (CameraRefocus_t2688848816 * __this, Camera_t189460977 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
extern "C"  void CameraRefocus_ChangeParent_m3370050841 (CameraRefocus_t2688848816 * __this, Transform_t3275118058 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::GetFocusPoint()
extern "C"  void CameraRefocus_GetFocusPoint_m842617662 (CameraRefocus_t2688848816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::SetFocusPoint()
extern "C"  void CameraRefocus_SetFocusPoint_m402586586 (CameraRefocus_t2688848816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
