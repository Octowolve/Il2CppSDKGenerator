#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ScoreHUDStars
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ScoreHUDStars"));
	}

	template <typename T = uintptr_t> T& StarSprite1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& StarSprite2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayByScoreCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Play() {
		return ((T (*)(ScoreHUDStars*))(Il2CppBase() + 0x2DFC540))(this);
	}
	template <typename T = void> T PlayByScoreCategory(int32_t inScoreCategory) {
		return ((T (*)(ScoreHUDStars*, int32_t))(Il2CppBase() + 0x2DFC16C))(this, inScoreCategory);
	}
	template <typename T = void> T PlayFull() {
		return ((T (*)(ScoreHUDStars*))(Il2CppBase() + 0x2DFC7C8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ScoreHUDStars*))(Il2CppBase() + 0x2DFC8C8))(this);
	}

};

}
