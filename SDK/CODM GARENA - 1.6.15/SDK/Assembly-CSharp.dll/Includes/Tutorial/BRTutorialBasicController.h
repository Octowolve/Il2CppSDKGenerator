#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class BRTutorialBasicController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "BRTutorialBasicController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnChildToggle1Change() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChildToggle2Change() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRTutorialBasicToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRTutorialBasicController*))(Il2CppBase() + 0x4AF8820))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRTutorialBasicController*))(Il2CppBase() + 0x4AF88C4))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BRTutorialBasicController*))(Il2CppBase() + 0x4AF89D0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRTutorialBasicController*))(Il2CppBase() + 0x4AF8A78))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRTutorialBasicController*))(Il2CppBase() + 0x4AF8CA4))(this);
	}
	template <typename T = void> T OnChildToggle1Change() {
		return ((T (*)(BRTutorialBasicController*))(Il2CppBase() + 0x4AF8E70))(this);
	}
	template <typename T = void> T OnChildToggle2Change() {
		return ((T (*)(BRTutorialBasicController*))(Il2CppBase() + 0x4AF9000))(this);
	}
	template <typename T = void> T OnBRTutorialBasicToggleChange(uintptr_t Msg) {
		return ((T (*)(BRTutorialBasicController*, uintptr_t))(Il2CppBase() + 0x4AF9190))(this, Msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRTutorialBasicController*))(Il2CppBase() + 0x4AF937C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRTutorialBasicController*))(Il2CppBase() + 0x4AF9384))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BRTutorialBasicController*))(Il2CppBase() + 0x4AF938C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRTutorialBasicController*))(Il2CppBase() + 0x4AF9394))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRTutorialBasicController*))(Il2CppBase() + 0x4AF939C))(this);
	}

};

}
