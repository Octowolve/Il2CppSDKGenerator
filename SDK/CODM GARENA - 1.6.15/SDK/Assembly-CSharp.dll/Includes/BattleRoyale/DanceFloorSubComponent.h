#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class DanceFloorSubComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "DanceFloorSubComponent"));
	}

	template <typename T = bool> T& bTickEnabled() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTickEabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterSubComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterSubcomponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroySubcomponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = bool> T get_TickEnabled() {
		return ((T (*)(DanceFloorSubComponent*))(Il2CppBase() + 0x3D44BD8))(this);
	}
	template <typename T = void> T SetTickEabled() {
		return ((T (*)(DanceFloorSubComponent*))(Il2CppBase() + 0x3D4583C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DanceFloorSubComponent*))(Il2CppBase() + 0x3D458E0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(DanceFloorSubComponent*))(Il2CppBase() + 0x3D45990))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DanceFloorSubComponent*))(Il2CppBase() + 0x3D4022C))(this);
	}
	template <typename T = void> T InitStatus(bool bStartPlay, int32_t index, float elapseTime) {
		return ((T (*)(DanceFloorSubComponent*, bool, int32_t, float))(Il2CppBase() + 0x3D42048))(this, bStartPlay, index, elapseTime);
	}
	template <typename T = void> T RegisterSubComponent() {
		return ((T (*)(DanceFloorSubComponent*))(Il2CppBase() + 0x3D45B58))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(DanceFloorSubComponent*, float))(Il2CppBase() + 0x3D45C68))(this, deltaTime);
	}
	template <typename T = void> T UnRegisterSubcomponent() {
		return ((T (*)(DanceFloorSubComponent*))(Il2CppBase() + 0x3D45A48))(this);
	}
	template <typename T = void> T DestroySubcomponent() {
		return ((T (*)(DanceFloorSubComponent*))(Il2CppBase() + 0x3D40B98))(this);
	}

};

}
