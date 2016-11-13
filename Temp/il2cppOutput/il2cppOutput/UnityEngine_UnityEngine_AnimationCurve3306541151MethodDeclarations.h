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

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t449065829;
struct AnimationCurve_t3306541151_marshaled_pinvoke;
struct AnimationCurve_t3306541151_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Keyframe1449471340.h"
#include "UnityEngine_UnityEngine_AnimationCurve3306541151.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve__ctor_m2814448007 (AnimationCurve_t3306541151 * __this, KeyframeU5BU5D_t449065829* ___keys0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C"  void AnimationCurve__ctor_m3707994114 (AnimationCurve_t3306541151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C"  void AnimationCurve_Cleanup_m2190142678 (AnimationCurve_t3306541151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C"  void AnimationCurve_Finalize_m3393741894 (AnimationCurve_t3306541151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C"  float AnimationCurve_Evaluate_m3698879322 (AnimationCurve_t3306541151 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern "C"  Keyframe_t1449471340  AnimationCurve_get_Item_m3780274863 (AnimationCurve_t3306541151 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C"  int32_t AnimationCurve_get_length_m1757155287 (AnimationCurve_t3306541151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
extern "C"  Keyframe_t1449471340  AnimationCurve_GetKey_Internal_m4198730374 (AnimationCurve_t3306541151 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::INTERNAL_CALL_GetKey_Internal(UnityEngine.AnimationCurve,System.Int32,UnityEngine.Keyframe&)
extern "C"  void AnimationCurve_INTERNAL_CALL_GetKey_Internal_m4032409550 (Il2CppObject * __this /* static, unused */, AnimationCurve_t3306541151 * ___self0, int32_t ___index1, Keyframe_t1449471340 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve_Init_m1486386337 (AnimationCurve_t3306541151 * __this, KeyframeU5BU5D_t449065829* ___keys0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AnimationCurve_t3306541151;
struct AnimationCurve_t3306541151_marshaled_pinvoke;

extern "C" void AnimationCurve_t3306541151_marshal_pinvoke(const AnimationCurve_t3306541151& unmarshaled, AnimationCurve_t3306541151_marshaled_pinvoke& marshaled);
extern "C" void AnimationCurve_t3306541151_marshal_pinvoke_back(const AnimationCurve_t3306541151_marshaled_pinvoke& marshaled, AnimationCurve_t3306541151& unmarshaled);
extern "C" void AnimationCurve_t3306541151_marshal_pinvoke_cleanup(AnimationCurve_t3306541151_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AnimationCurve_t3306541151;
struct AnimationCurve_t3306541151_marshaled_com;

extern "C" void AnimationCurve_t3306541151_marshal_com(const AnimationCurve_t3306541151& unmarshaled, AnimationCurve_t3306541151_marshaled_com& marshaled);
extern "C" void AnimationCurve_t3306541151_marshal_com_back(const AnimationCurve_t3306541151_marshaled_com& marshaled, AnimationCurve_t3306541151& unmarshaled);
extern "C" void AnimationCurve_t3306541151_marshal_com_cleanup(AnimationCurve_t3306541151_marshaled_com& marshaled);
