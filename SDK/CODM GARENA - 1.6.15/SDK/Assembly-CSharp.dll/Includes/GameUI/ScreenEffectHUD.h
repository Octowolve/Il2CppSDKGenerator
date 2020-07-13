#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ScreenEffectHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ScreenEffectHUD"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_ScreenEffectDic() {
		return *(T*)((uintptr_t)this + 0x7C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOrHideScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowOrHideEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ScreenEffectHUD*))(Il2CppBase() + 0x44766D4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ScreenEffectHUD*))(Il2CppBase() + 0x44767E8))(this);
	}
	template <typename T = void> T ShowOrHideScreenEffect(int32_t assetID, bool active) {
		return ((T (*)(ScreenEffectHUD*, int32_t, bool))(Il2CppBase() + 0x44768A4))(this, assetID, active);
	}
	template <typename T = void> T OnNotifyShowOrHideEffect(uintptr_t msg) {
		return ((T (*)(ScreenEffectHUD*, uintptr_t))(Il2CppBase() + 0x4477038))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ScreenEffectHUD*))(Il2CppBase() + 0x44771D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ScreenEffectHUD*))(Il2CppBase() + 0x44771D8))(this);
	}

};

}
