#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RankDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RankDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_RankDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeasonInfoReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeasonInfoRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_RankDS() {
		return ((T (*)(RankDataAgent*))(Il2CppBase() + 0x37E99C0))(this);
	}
	template <typename T = void> T GetSeasonInfoReq() {
		return ((T (*)(RankDataAgent*))(Il2CppBase() + 0x37E9A70))(this);
	}
	template <typename T = bool> T GetSeasonInfoRes(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(RankDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x37E9BA0))(this, message, errStr);
	}

};

}
