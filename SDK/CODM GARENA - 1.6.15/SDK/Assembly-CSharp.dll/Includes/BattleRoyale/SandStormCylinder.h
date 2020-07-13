#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SandStormCylinder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SandStormCylinder"));
	}

	template <typename T = uintptr_t> T& WallObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& MeshRadius() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_StartShow() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWallRendererEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SandStormCylinder*))(Il2CppBase() + 0x35730D8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SandStormCylinder*))(Il2CppBase() + 0x35732B0))(this);
	}
	template <typename T = bool> T IsShowArea(float radius, uintptr_t siGameInfo, uintptr_t gas) {
		return ((T (*)(SandStormCylinder*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x357357C))(this, radius, siGameInfo, gas);
	}
	template <typename T = void> T SetWallRendererEnabled(bool isEnable) {
		return ((T (*)(SandStormCylinder*, bool))(Il2CppBase() + 0x3573180))(this, isEnable);
	}

};

}
