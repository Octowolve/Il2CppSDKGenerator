#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SPTopHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SPTopHUD"));
	}

	template <typename T = uintptr_t> T& TargetSharkGo() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_ShowTargetShark() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> static T& TARGET_SHAKE_Interval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_CacheTarget() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckTargetSharkTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TargetSharkTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopShark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T CheckTargetSharkTrigger(int32_t target) {
		return ((T (*)(SPTopHUD*, int32_t))(Il2CppBase() + 0x2998D1C))(this, target);
	}
	template <typename T = void> T TargetSharkTrigger() {
		return ((T (*)(SPTopHUD*))(Il2CppBase() + 0x2998DD8))(this);
	}
	template <typename T = uintptr_t> T StopShark() {
		return ((T (*)(SPTopHUD*))(Il2CppBase() + 0x2998F1C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SPTopHUD*))(Il2CppBase() + 0x2999004))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(SPTopHUD*))(Il2CppBase() + 0x2999248))(this);
	}

};

}
