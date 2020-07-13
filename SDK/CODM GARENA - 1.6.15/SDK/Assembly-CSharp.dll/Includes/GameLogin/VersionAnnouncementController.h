#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class VersionAnnouncementController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "VersionAnnouncementController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_Callback() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(VersionAnnouncementController*))(Il2CppBase() + 0x253F340))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(VersionAnnouncementController*))(Il2CppBase() + 0x253F3E4))(this);
	}
	template <typename T = bool> T SetData(Il2CppString* title, Il2CppString* body, void* callback) {
		return ((T (*)(VersionAnnouncementController*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x253F5EC))(this, title, body, callback);
	}
	template <typename T = void> T OnConfirmBtnClick() {
		return ((T (*)(VersionAnnouncementController*))(Il2CppBase() + 0x253F880))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(VersionAnnouncementController*))(Il2CppBase() + 0x253F97C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(VersionAnnouncementController*))(Il2CppBase() + 0x253F984))(this);
	}

};

}
