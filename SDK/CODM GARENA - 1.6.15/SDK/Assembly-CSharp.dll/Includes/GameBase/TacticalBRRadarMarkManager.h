#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRRadarMarkManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRRadarMarkManager"));
	}

	template <typename T = uintptr_t> T& mapmarkRoot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMapMarkRootPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMapMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRelativePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalBRRadarMarkManager*))(Il2CppBase() + 0x30C1390))(this);
	}
	template <typename T = void> T UpdateMapMarkRootPosition() {
		return ((T (*)(TacticalBRRadarMarkManager*))(Il2CppBase() + 0x30C1494))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalBRRadarMarkManager*))(Il2CppBase() + 0x30C1644))(this);
	}
	template <typename T = void> T InitMapMark() {
		return ((T (*)(TacticalBRRadarMarkManager*))(Il2CppBase() + 0x30C17A8))(this);
	}
	template <typename T = void> T UpdateRelativePosition() {
		return ((T (*)(TacticalBRRadarMarkManager*))(Il2CppBase() + 0x30C1F28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalBRRadarMarkManager*))(Il2CppBase() + 0x30C2514))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalBRRadarMarkManager*))(Il2CppBase() + 0x30C2518))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateRelativePosition() {
		return ((T (*)(TacticalBRRadarMarkManager*))(Il2CppBase() + 0x30C251C))(this);
	}

};

}
