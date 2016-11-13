#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Ball
struct Ball_t3972794301;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// System.Object
struct Il2CppObject;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// exampleTouch
struct exampleTouch_t3735596907;
// movement
struct movement_t2095091517;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_Ball3972794301.h"
#include "AssemblyU2DCSharp_Ball3972794301MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "AssemblyU2DCSharp_exampleTouch3735596907.h"
#include "AssemblyU2DCSharp_exampleTouch3735596907MethodDeclarations.h"
#include "AssemblyU2DCSharp_movement2095091517.h"
#include "AssemblyU2DCSharp_movement2095091517MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m4109961936(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, method) ((  Rigidbody2D_t502193897 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ball::.ctor()
extern Il2CppCodeGenString* _stringLiteral4261098465;
extern Il2CppCodeGenString* _stringLiteral3920837375;
extern Il2CppCodeGenString* _stringLiteral3654062110;
extern const uint32_t Ball__ctor_m1073530660_MetadataUsageId;
extern "C"  void Ball__ctor_m1073530660 (Ball_t3972794301 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball__ctor_m1073530660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_controlledBall_2(_stringLiteral4261098465);
		__this->set_otherBall_3(_stringLiteral3920837375);
		__this->set_npcBall_4(_stringLiteral3654062110);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ball::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const uint32_t Ball_Start_m2511773116_MetadataUsageId;
extern "C"  void Ball_Start_m2511773116 (Ball_t3972794301 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_Start_m2511773116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t502193897 * L_0 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		__this->set_thisBall_5(L_0);
		return;
	}
}
// System.Void Ball::Update()
extern "C"  void Ball_Update_m2036524005 (Ball_t3972794301 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Ball::OnCollisionEnter2D(UnityEngine.Collider2D)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Ball_OnCollisionEnter2D_m206382580_MetadataUsageId;
extern "C"  void Ball_OnCollisionEnter2D_m206382580 (Ball_t3972794301 * __this, Collider2D_t646061738 * ___coll0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_OnCollisionEnter2D_m206382580_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t646061738 * L_0 = ___coll0;
		NullCheck(L_0);
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m1425941094(L_1, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_controlledBall_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0052;
		}
	}
	{
		Collider2D_t646061738 * L_5 = ___coll0;
		NullCheck(L_5);
		GameObject_t1756533147 * L_6 = Component_get_gameObject_m3105766835(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = GameObject_get_tag_m1425941094(L_6, /*hidden argument*/NULL);
		String_t* L_8 = __this->get_otherBall_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0052;
		}
	}
	{
		Collider2D_t646061738 * L_10 = ___coll0;
		NullCheck(L_10);
		GameObject_t1756533147 * L_11 = Component_get_gameObject_m3105766835(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = GameObject_get_tag_m1425941094(L_11, /*hidden argument*/NULL);
		String_t* L_13 = __this->get_npcBall_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0054;
		}
	}

IL_0052:
	{
	}

IL_0054:
	{
		return;
	}
}
// System.Void exampleTouch::.ctor()
extern "C"  void exampleTouch__ctor_m2701364360 (exampleTouch_t3735596907 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void exampleTouch::Start()
extern "C"  void exampleTouch_Start_m3455649932 (exampleTouch_t3735596907 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void exampleTouch::Update()
extern "C"  void exampleTouch_Update_m996802351 (exampleTouch_t3735596907 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void movement::.ctor()
extern "C"  void movement__ctor_m1477390112 (movement_t2095091517 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void movement::Start()
extern "C"  void movement_Start_m1089949544 (movement_t2095091517 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void movement::Update()
extern Il2CppClass* GameObject_t1756533147_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const uint32_t movement_Update_m2074558985_MetadataUsageId;
extern "C"  void movement_Update_m2074558985 (movement_t2095091517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (movement_Update_m2074558985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody2D_t502193897 * V_0 = NULL;
	GameObject_t1756533147 * V_1 = NULL;
	{
		Rigidbody2D_t502193897 * L_0 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		V_0 = L_0;
		GameObject_t1756533147 * L_1 = (GameObject_t1756533147 *)il2cpp_codegen_object_new(GameObject_t1756533147_il2cpp_TypeInfo_var);
		GameObject__ctor_m498247354(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		GameObject_t1756533147 * L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void movement::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void movement_OnCollisionEnter2D_m1946149070 (movement_t2095091517 * __this, Collision2D_t1539500754 * ___collision0, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
