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

// UnityEngine.Joint
struct Joint_t454317436;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rigidbody4233889191.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
extern "C"  Rigidbody_t4233889191 * Joint_get_connectedBody_m102918198 (Joint_t454317436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
extern "C"  void Joint_set_connectedBody_m2242534827 (Joint_t454317436 * __this, Rigidbody_t4233889191 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
extern "C"  void Joint_set_anchor_m4209051050 (Joint_t454317436 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)
extern "C"  void Joint_INTERNAL_set_anchor_m3684652072 (Joint_t454317436 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
