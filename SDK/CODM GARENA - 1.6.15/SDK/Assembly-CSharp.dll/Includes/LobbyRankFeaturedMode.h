#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyRankFeaturedMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyRankFeaturedMode"));
	}

	template <typename T = Il2CppString*> T& mModeName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& mFactor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_ModeName() {
		return ((T (*)(LobbyRankFeaturedMode*))(Il2CppBase() + 0x434085C))(this);
	}
	template <typename T = void> T set_ModeName(Il2CppString* value) {
		return ((T (*)(LobbyRankFeaturedMode*, Il2CppString*))(Il2CppBase() + 0x4340864))(this, value);
	}
	template <typename T = float> T get_Factor() {
		return ((T (*)(LobbyRankFeaturedMode*))(Il2CppBase() + 0x434086C))(this);
	}
	template <typename T = void> T set_Factor(float value) {
		return ((T (*)(LobbyRankFeaturedMode*, float))(Il2CppBase() + 0x4340874))(this, value);
	}

};

}
