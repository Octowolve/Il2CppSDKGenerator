#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PandoraFacePopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PandoraFacePopupController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x58);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRootPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfShutdownWhenClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPandoraNotifyClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PandoraFacePopupController*))(Il2CppBase() + 0x3EFC368))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PandoraFacePopupController*))(Il2CppBase() + 0x3EFC474))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PandoraFacePopupController*))(Il2CppBase() + 0x3EFC518))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PandoraFacePopupController*))(Il2CppBase() + 0x3EFC5C0))(this);
	}
	template <typename T = Il2CppString*> T GetRootPath() {
		return ((T (*)(PandoraFacePopupController*))(Il2CppBase() + 0x3EFC668))(this);
	}
	template <typename T = bool> T IfShutdownWhenClose() {
		return ((T (*)(PandoraFacePopupController*))(Il2CppBase() + 0x3EFC998))(this);
	}
	template <typename T = void> T OnPandoraNotifyClose() {
		return ((T (*)(PandoraFacePopupController*))(Il2CppBase() + 0x3EFCA38))(this);
	}
	template <typename T = void> T ForceClose() {
		return ((T (*)(PandoraFacePopupController*))(Il2CppBase() + 0x3EFCAE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PandoraFacePopupController*))(Il2CppBase() + 0x3EFCB9C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PandoraFacePopupController*))(Il2CppBase() + 0x3EFCBA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PandoraFacePopupController*))(Il2CppBase() + 0x3EFCBAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PandoraFacePopupController*))(Il2CppBase() + 0x3EFCBB4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfShutdownWhenClose() {
		return ((T (*)(PandoraFacePopupController*))(Il2CppBase() + 0x3EFCBBC))(this);
	}

};

}
