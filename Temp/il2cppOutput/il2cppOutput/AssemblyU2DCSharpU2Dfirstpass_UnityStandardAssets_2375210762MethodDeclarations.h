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

// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t2375210762;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_U318924311.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UnityStandardAssets.Utility.WaypointCircuit::.ctor()
extern "C"  void WaypointCircuit__ctor_m490251284 (WaypointCircuit_t2375210762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
extern "C"  float WaypointCircuit_get_Length_m1031043909 (WaypointCircuit_t2375210762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
extern "C"  void WaypointCircuit_set_Length_m1930377000 (WaypointCircuit_t2375210762 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
extern "C"  TransformU5BU5D_t3764228911* WaypointCircuit_get_Waypoints_m3767206777 (WaypointCircuit_t2375210762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::Awake()
extern "C"  void WaypointCircuit_Awake_m676394259 (WaypointCircuit_t2375210762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
extern "C"  RoutePoint_t318924311  WaypointCircuit_GetRoutePoint_m1188038378 (WaypointCircuit_t2375210762 * __this, float ___dist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
extern "C"  Vector3_t2243707580  WaypointCircuit_GetRoutePosition_m2432753959 (WaypointCircuit_t2375210762 * __this, float ___dist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  WaypointCircuit_CatmullRom_m2146058243 (WaypointCircuit_t2375210762 * __this, Vector3_t2243707580  ___p00, Vector3_t2243707580  ___p11, Vector3_t2243707580  ___p22, Vector3_t2243707580  ___p33, float ___i4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
extern "C"  void WaypointCircuit_CachePositionsAndDistances_m3369759891 (WaypointCircuit_t2375210762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmos()
extern "C"  void WaypointCircuit_OnDrawGizmos_m2937963150 (WaypointCircuit_t2375210762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmosSelected()
extern "C"  void WaypointCircuit_OnDrawGizmosSelected_m266782075 (WaypointCircuit_t2375210762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
extern "C"  void WaypointCircuit_DrawGizmos_m170723970 (WaypointCircuit_t2375210762 * __this, bool ___selected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
