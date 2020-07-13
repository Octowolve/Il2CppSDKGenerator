#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class TacticalBaseViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "TacticalBaseViewController"));
	}

	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Startup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalBaseViewController*))(Il2CppBase() + 0x35AD5F0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TacticalBaseViewController*))(Il2CppBase() + 0x35AD6FC))(this);
	}
	template <typename T = void> T SetView(uintptr_t inView) {
		return ((T (*)(TacticalBaseViewController*, uintptr_t))(Il2CppBase() + 0x35AD79C))(this, inView);
	}
	template <typename T = void> T Startup(uintptr_t inGPS) {
		return ((T (*)(TacticalBaseViewController*, uintptr_t))(Il2CppBase() + 0x35AD844))(this, inGPS);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalBaseViewController*))(Il2CppBase() + 0x35AD96C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TacticalBaseViewController*))(Il2CppBase() + 0x35AD974))(this);
	}

};

}
