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

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t3273007553;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
extern "C"  void StandaloneInput__ctor_m1632608907 (StandaloneInput_t3273007553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetAxis(System.String,System.Boolean)
extern "C"  float StandaloneInput_GetAxis_m3629967965 (StandaloneInput_t3273007553 * __this, String_t* ___name0, bool ___raw1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButton(System.String)
extern "C"  bool StandaloneInput_GetButton_m3156560113 (StandaloneInput_t3273007553 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonDown(System.String)
extern "C"  bool StandaloneInput_GetButtonDown_m1191690639 (StandaloneInput_t3273007553 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonUp(System.String)
extern "C"  bool StandaloneInput_GetButtonUp_m362294050 (StandaloneInput_t3273007553 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonDown(System.String)
extern "C"  void StandaloneInput_SetButtonDown_m3557690243 (StandaloneInput_t3273007553 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonUp(System.String)
extern "C"  void StandaloneInput_SetButtonUp_m3517833968 (StandaloneInput_t3273007553 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisPositive(System.String)
extern "C"  void StandaloneInput_SetAxisPositive_m89836875 (StandaloneInput_t3273007553 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisNegative(System.String)
extern "C"  void StandaloneInput_SetAxisNegative_m3456398155 (StandaloneInput_t3273007553 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisZero(System.String)
extern "C"  void StandaloneInput_SetAxisZero_m3274422322 (StandaloneInput_t3273007553 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxis(System.String,System.Single)
extern "C"  void StandaloneInput_SetAxis_m1481005477 (StandaloneInput_t3273007553 * __this, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::MousePosition()
extern "C"  Vector3_t2243707580  StandaloneInput_MousePosition_m1923346933 (StandaloneInput_t3273007553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
