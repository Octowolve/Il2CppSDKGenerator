#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class MPAreaClearHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "MPAreaClearHUD"));
	}

	template <typename T = uintptr_t> T& Anim() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& BossHUD_StageOne() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BossHUD_StageTwo_On() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BossHUD_StageTwo_Normal() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& delayShowTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& delayLoadTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& pendingMapID() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& bossLevel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayedShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadNextStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MPAreaClearHUD*))(Il2CppBase() + 0x1FA5128))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MPAreaClearHUD*))(Il2CppBase() + 0x1FA523C))(this);
	}
	template <typename T = void> T DelayedShow() {
		return ((T (*)(MPAreaClearHUD*))(Il2CppBase() + 0x1FA52E4))(this);
	}
	template <typename T = void> T OnShow(uintptr_t msg) {
		return ((T (*)(MPAreaClearHUD*, uintptr_t))(Il2CppBase() + 0x1FA57FC))(this, msg);
	}
	template <typename T = void> T OnLoadNextStage() {
		return ((T (*)(MPAreaClearHUD*))(Il2CppBase() + 0x1FA5990))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MPAreaClearHUD*))(Il2CppBase() + 0x1FA5A8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MPAreaClearHUD*))(Il2CppBase() + 0x1FA5A94))(this);
	}

};

}
