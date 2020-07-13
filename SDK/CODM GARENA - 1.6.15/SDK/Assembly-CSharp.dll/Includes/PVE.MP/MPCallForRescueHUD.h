#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPCallForRescueHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPCallForRescueHUD"));
	}

	template <typename T = uintptr_t> T& playerName() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& showDuration() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& teammatePawn() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& TipHeight() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init(uint32_t playerID) {
		return ((T (*)(MPCallForRescueHUD*, uint32_t))(Il2CppBase() + 0x46015D8))(this, playerID);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MPCallForRescueHUD*))(Il2CppBase() + 0x4601790))(this);
	}

};

}
