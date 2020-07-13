#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SpectatingRelevant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SpectatingRelevant"));
	}

	template <typename T = uintptr_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ServerRelevant() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ClientRelevant() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& CurRelevant() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& NewMoveData() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ReSpawnData() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(SpectatingRelevant*))(Il2CppBase() + 0x30A0098))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(SpectatingRelevant*))(Il2CppBase() + 0x30A00A0))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(SpectatingRelevant*))(Il2CppBase() + 0x30A00AC))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(SpectatingRelevant*, float))(Il2CppBase() + 0x30A00B4))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SpectatingRelevant*, float))(Il2CppBase() + 0x30A08DC))(this, P0);
	}

};

}
