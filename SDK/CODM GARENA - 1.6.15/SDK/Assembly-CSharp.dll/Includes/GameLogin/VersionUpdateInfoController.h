#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class VersionUpdateInfoController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "VersionUpdateInfoController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_IsUpdateRes() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOKCancel_OKBtn_Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOKCancel_CancelBtn_Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOnlyOK_OKBtn_Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(VersionUpdateInfoController*))(Il2CppBase() + 0x254503C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(VersionUpdateInfoController*))(Il2CppBase() + 0x25450E0))(this);
	}
	template <typename T = void> T Show(bool isUpdateRes, Il2CppString* title, Il2CppString* body, Il2CppString* updateInfo, uintptr_t style, Il2CppString* okLabel, Il2CppString* cancelLabel, void* callback, Il2CppArray<uintptr_t>* urlList) {
		return ((T (*)(VersionUpdateInfoController*, bool, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, Il2CppString*, Il2CppString*, void*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2538478))(this, isUpdateRes, title, body, updateInfo, style, okLabel, cancelLabel, callback, urlList);
	}
	template <typename T = void> T OnOKCancel_OKBtn_Click() {
		return ((T (*)(VersionUpdateInfoController*))(Il2CppBase() + 0x2545708))(this);
	}
	template <typename T = void> T OnOKCancel_CancelBtn_Click() {
		return ((T (*)(VersionUpdateInfoController*))(Il2CppBase() + 0x2545810))(this);
	}
	template <typename T = void> T OnOnlyOK_OKBtn_Click() {
		return ((T (*)(VersionUpdateInfoController*))(Il2CppBase() + 0x254590C))(this);
	}
	template <typename T = void> T OnLeftButtonClick() {
		return ((T (*)(VersionUpdateInfoController*))(Il2CppBase() + 0x2545A14))(this);
	}
	template <typename T = void> T OnRightButtonClick() {
		return ((T (*)(VersionUpdateInfoController*))(Il2CppBase() + 0x2546178))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(VersionUpdateInfoController*))(Il2CppBase() + 0x25462CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(VersionUpdateInfoController*))(Il2CppBase() + 0x25462D4))(this);
	}

};

}
