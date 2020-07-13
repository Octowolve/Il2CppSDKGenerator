#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRRadarMineManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRRadarMineManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& MineSprites() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> static T& MineSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MineSpriteName_Gray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMineState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleMineEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalBRRadarMineManager*))(Il2CppBase() + 0x30BF5B0))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalBRRadarMineManager*))(Il2CppBase() + 0x30C2520))(this);
	}
	template <typename T = void> T UpdateMineState() {
		return ((T (*)(TacticalBRRadarMineManager*))(Il2CppBase() + 0x30C25DC))(this);
	}
	template <typename T = void> T HandleMineEffect(uintptr_t sprite, bool state) {
		return ((T (*)(TacticalBRRadarMineManager*, uintptr_t, bool))(Il2CppBase() + 0x30C2FD0))(this, sprite, state);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalBRRadarMineManager*))(Il2CppBase() + 0x30C3184))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalBRRadarMineManager*))(Il2CppBase() + 0x30C318C))(this);
	}

};

}
