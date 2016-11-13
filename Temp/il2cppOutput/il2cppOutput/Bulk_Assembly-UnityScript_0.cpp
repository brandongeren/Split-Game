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

// rotateScript
struct rotateScript_t1120319840;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DUnityScript_rotateScript1120319840.h"
#include "AssemblyU2DUnityScript_rotateScript1120319840MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Touch407273883MethodDeclarations.h"
#include "UnityEngine_UnityEngine_TouchPhase2458120420.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Space4278750806.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void rotateScript::.ctor()
extern "C"  void rotateScript__ctor_m1995835634 (rotateScript_t1120319840 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		__this->set_horizontalSpeed_4((2.0f));
		__this->set_verticalSpeed_5((2.0f));
		return;
	}
}
// System.Void rotateScript::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const uint32_t rotateScript_Update_m1328849413_MetadataUsageId;
extern "C"  void rotateScript_Update_m1328849413 (rotateScript_t1120319840 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (rotateScript_Update_m1328849413_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t407273883  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2243707579  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2243707579  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m2050827666(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Touch_t407273883  L_1 = Input_GetTouch_m1463942798(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Touch_get_phase_m196706494((&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		float L_3 = __this->get_horizontalSpeed_4();
		Vector2_t2243707579  L_4 = Touch_get_deltaPosition_m97688791((&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_x_0();
		__this->set_h_2(((float)((float)L_3*(float)L_5)));
		Transform_t3275118058 * L_6 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		float L_7 = __this->get_h_2();
		NullCheck(L_6);
		Transform_Rotate_m2449860094(L_6, (((float)((float)0))), (((float)((float)0))), ((-L_7)), 0, /*hidden argument*/NULL);
		float L_8 = __this->get_verticalSpeed_5();
		Vector2_t2243707579  L_9 = Touch_get_deltaPosition_m97688791((&V_0), /*hidden argument*/NULL);
		V_2 = L_9;
		float L_10 = (&V_2)->get_y_1();
		__this->set_v_3(((float)((float)L_8*(float)L_10)));
		Transform_t3275118058 * L_11 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		float L_12 = __this->get_v_3();
		NullCheck(L_11);
		Transform_Rotate_m2449860094(L_11, L_12, (((float)((float)0))), (((float)((float)0))), 0, /*hidden argument*/NULL);
	}

IL_0084:
	{
		return;
	}
}
// System.Void rotateScript::Main()
extern "C"  void rotateScript_Main_m3983877751 (rotateScript_t1120319840 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
