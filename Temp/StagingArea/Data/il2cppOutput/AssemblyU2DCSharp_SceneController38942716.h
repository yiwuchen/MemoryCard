#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MemoryCard
struct MemoryCard_t1289296143;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.TextMesh
struct TextMesh_t1641806576;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneController
struct  SceneController_t38942716  : public MonoBehaviour_t1158329972
{
public:
	// MemoryCard SceneController::originalCard
	MemoryCard_t1289296143 * ___originalCard_2;
	// UnityEngine.Sprite[] SceneController::images
	SpriteU5BU5D_t3359083662* ___images_3;
	// MemoryCard SceneController::_firstRevealed
	MemoryCard_t1289296143 * ____firstRevealed_8;
	// MemoryCard SceneController::_secondRevealed
	MemoryCard_t1289296143 * ____secondRevealed_9;
	// System.Int32 SceneController::_score
	int32_t ____score_10;
	// UnityEngine.TextMesh SceneController::scoreLabel
	TextMesh_t1641806576 * ___scoreLabel_11;

public:
	inline static int32_t get_offset_of_originalCard_2() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___originalCard_2)); }
	inline MemoryCard_t1289296143 * get_originalCard_2() const { return ___originalCard_2; }
	inline MemoryCard_t1289296143 ** get_address_of_originalCard_2() { return &___originalCard_2; }
	inline void set_originalCard_2(MemoryCard_t1289296143 * value)
	{
		___originalCard_2 = value;
		Il2CppCodeGenWriteBarrier(&___originalCard_2, value);
	}

	inline static int32_t get_offset_of_images_3() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___images_3)); }
	inline SpriteU5BU5D_t3359083662* get_images_3() const { return ___images_3; }
	inline SpriteU5BU5D_t3359083662** get_address_of_images_3() { return &___images_3; }
	inline void set_images_3(SpriteU5BU5D_t3359083662* value)
	{
		___images_3 = value;
		Il2CppCodeGenWriteBarrier(&___images_3, value);
	}

	inline static int32_t get_offset_of__firstRevealed_8() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ____firstRevealed_8)); }
	inline MemoryCard_t1289296143 * get__firstRevealed_8() const { return ____firstRevealed_8; }
	inline MemoryCard_t1289296143 ** get_address_of__firstRevealed_8() { return &____firstRevealed_8; }
	inline void set__firstRevealed_8(MemoryCard_t1289296143 * value)
	{
		____firstRevealed_8 = value;
		Il2CppCodeGenWriteBarrier(&____firstRevealed_8, value);
	}

	inline static int32_t get_offset_of__secondRevealed_9() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ____secondRevealed_9)); }
	inline MemoryCard_t1289296143 * get__secondRevealed_9() const { return ____secondRevealed_9; }
	inline MemoryCard_t1289296143 ** get_address_of__secondRevealed_9() { return &____secondRevealed_9; }
	inline void set__secondRevealed_9(MemoryCard_t1289296143 * value)
	{
		____secondRevealed_9 = value;
		Il2CppCodeGenWriteBarrier(&____secondRevealed_9, value);
	}

	inline static int32_t get_offset_of__score_10() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ____score_10)); }
	inline int32_t get__score_10() const { return ____score_10; }
	inline int32_t* get_address_of__score_10() { return &____score_10; }
	inline void set__score_10(int32_t value)
	{
		____score_10 = value;
	}

	inline static int32_t get_offset_of_scoreLabel_11() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___scoreLabel_11)); }
	inline TextMesh_t1641806576 * get_scoreLabel_11() const { return ___scoreLabel_11; }
	inline TextMesh_t1641806576 ** get_address_of_scoreLabel_11() { return &___scoreLabel_11; }
	inline void set_scoreLabel_11(TextMesh_t1641806576 * value)
	{
		___scoreLabel_11 = value;
		Il2CppCodeGenWriteBarrier(&___scoreLabel_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
