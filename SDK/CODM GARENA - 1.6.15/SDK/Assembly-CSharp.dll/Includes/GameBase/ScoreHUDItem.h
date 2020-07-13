#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ScoreHUDItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ScoreHUDItem"));
	}

	template <typename T = uintptr_t> T& label() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& scoreCategory() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& starTemplate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& star() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> static T& fadeOutTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayFinised() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Play(Il2CppString* inText, float lifeTime, int32_t inScoreCategory) {
		return ((T (*)(ScoreHUDItem*, Il2CppString*, float, int32_t))(Il2CppBase() + 0x2DFB474))(this, inText, lifeTime, inScoreCategory);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ScoreHUDItem*))(Il2CppBase() + 0x2DFA5E0))(this);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(ScoreHUDItem*))(Il2CppBase() + 0x2DFC2C0))(this);
	}
	template <typename T = void> T OnPlayFinised() {
		return ((T (*)(ScoreHUDItem*))(Il2CppBase() + 0x2DFC3DC))(this);
	}

};

}
