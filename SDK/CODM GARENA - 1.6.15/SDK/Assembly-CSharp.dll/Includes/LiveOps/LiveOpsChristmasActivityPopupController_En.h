#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsChristmasActivityPopupControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsChristmasActivityPopupController_En"));
	}

	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& mUrl() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInterfaceDisplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsChristmasActivityPopupControllerEn*))(Il2CppBase() + 0x34E00D4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsChristmasActivityPopupControllerEn*))(Il2CppBase() + 0x34E0178))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsChristmasActivityPopupControllerEn*))(Il2CppBase() + 0x34E027C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsChristmasActivityPopupControllerEn*))(Il2CppBase() + 0x34E0324))(this);
	}
	template <typename T = void> T SetInterfaceDisplay(uintptr_t activity) {
		return ((T (*)(LiveOpsChristmasActivityPopupControllerEn*, uintptr_t))(Il2CppBase() + 0x34E03CC))(this, activity);
	}
	template <typename T = void> T SetTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(LiveOpsChristmasActivityPopupControllerEn*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x34E0A80))(this, url, bSuccess, texture);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsChristmasActivityPopupControllerEn*))(Il2CppBase() + 0x34E0C88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsChristmasActivityPopupControllerEn*))(Il2CppBase() + 0x34E0C90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsChristmasActivityPopupControllerEn*))(Il2CppBase() + 0x34E0C98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsChristmasActivityPopupControllerEn*))(Il2CppBase() + 0x34E0CA0))(this);
	}

};

}
