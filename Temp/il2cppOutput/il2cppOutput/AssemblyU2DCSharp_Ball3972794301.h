#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ball
struct  Ball_t3972794301  : public MonoBehaviour_t1158329972
{
public:
	// System.String Ball::controlledBall
	String_t* ___controlledBall_2;
	// System.String Ball::otherBall
	String_t* ___otherBall_3;
	// System.String Ball::npcBall
	String_t* ___npcBall_4;
	// UnityEngine.Rigidbody2D Ball::thisBall
	Rigidbody2D_t502193897 * ___thisBall_5;

public:
	inline static int32_t get_offset_of_controlledBall_2() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___controlledBall_2)); }
	inline String_t* get_controlledBall_2() const { return ___controlledBall_2; }
	inline String_t** get_address_of_controlledBall_2() { return &___controlledBall_2; }
	inline void set_controlledBall_2(String_t* value)
	{
		___controlledBall_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlledBall_2, value);
	}

	inline static int32_t get_offset_of_otherBall_3() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___otherBall_3)); }
	inline String_t* get_otherBall_3() const { return ___otherBall_3; }
	inline String_t** get_address_of_otherBall_3() { return &___otherBall_3; }
	inline void set_otherBall_3(String_t* value)
	{
		___otherBall_3 = value;
		Il2CppCodeGenWriteBarrier(&___otherBall_3, value);
	}

	inline static int32_t get_offset_of_npcBall_4() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___npcBall_4)); }
	inline String_t* get_npcBall_4() const { return ___npcBall_4; }
	inline String_t** get_address_of_npcBall_4() { return &___npcBall_4; }
	inline void set_npcBall_4(String_t* value)
	{
		___npcBall_4 = value;
		Il2CppCodeGenWriteBarrier(&___npcBall_4, value);
	}

	inline static int32_t get_offset_of_thisBall_5() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___thisBall_5)); }
	inline Rigidbody2D_t502193897 * get_thisBall_5() const { return ___thisBall_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_thisBall_5() { return &___thisBall_5; }
	inline void set_thisBall_5(Rigidbody2D_t502193897 * value)
	{
		___thisBall_5 = value;
		Il2CppCodeGenWriteBarrier(&___thisBall_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
