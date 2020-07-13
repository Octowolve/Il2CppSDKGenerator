#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class BRTutorialChipsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "BRTutorialChipsController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_CurrentIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRTutorialChipsController*))(Il2CppBase() + 0x4AF94EC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRTutorialChipsController*))(Il2CppBase() + 0x4AF9590))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BRTutorialChipsController*))(Il2CppBase() + 0x4AF9714))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRTutorialChipsController*))(Il2CppBase() + 0x4AF97BC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRTutorialChipsController*))(Il2CppBase() + 0x4AF99D4))(this);
	}
	template <typename T = void> T OnToggleChange() {
		return ((T (*)(BRTutorialChipsController*))(Il2CppBase() + 0x4AF9A90))(this);
	}
	template <typename T = void> T ResetAnimation(uintptr_t Msg) {
		return ((T (*)(BRTutorialChipsController*, uintptr_t))(Il2CppBase() + 0x4AF9C74))(this, Msg);
	}
	template <typename T = void> T UpdateRound() {
		return ((T (*)(BRTutorialChipsController*))(Il2CppBase() + 0x4AF9D20))(this);
	}
	template <typename T = void> T Initm__0() {
		return ((T (*)(BRTutorialChipsController*))(Il2CppBase() + 0x4AF9F20))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRTutorialChipsController*))(Il2CppBase() + 0x4AF9F24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRTutorialChipsController*))(Il2CppBase() + 0x4AF9F2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BRTutorialChipsController*))(Il2CppBase() + 0x4AF9F34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRTutorialChipsController*))(Il2CppBase() + 0x4AF9F3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRTutorialChipsController*))(Il2CppBase() + 0x4AF9F44))(this);
	}

};

}
