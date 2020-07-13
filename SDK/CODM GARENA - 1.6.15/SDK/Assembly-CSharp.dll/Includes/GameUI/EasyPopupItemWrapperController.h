#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class EasyPopupItemWrapperController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "EasyPopupItemWrapperController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_MenuController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_Parent() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_ContentController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(EasyPopupItemWrapperController*))(Il2CppBase() + 0x46FFC24))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(EasyPopupItemWrapperController*))(Il2CppBase() + 0x46FFD30))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(EasyPopupItemWrapperController*))(Il2CppBase() + 0x46FFDD4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(EasyPopupItemWrapperController*))(Il2CppBase() + 0x46FFF08))(this);
	}
	template <typename T = void> T InitContent(uintptr_t parent, uintptr_t type, uintptr_t data, int32_t width, int32_t height, bool bShowing) {
		return ((T (*)(EasyPopupItemWrapperController*, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x4700024))(this, parent, type, data, width, height, bShowing);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(EasyPopupItemWrapperController*))(Il2CppBase() + 0x46FFA38))(this);
	}
	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(EasyPopupItemWrapperController*))(Il2CppBase() + 0x46FFA28))(this);
	}
	template <typename T = void> T set_Data(uintptr_t value) {
		return ((T (*)(EasyPopupItemWrapperController*, uintptr_t))(Il2CppBase() + 0x46FFA30))(this, value);
	}
	template <typename T = void> T OnItemClick() {
		return ((T (*)(EasyPopupItemWrapperController*))(Il2CppBase() + 0x4700448))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(EasyPopupItemWrapperController*))(Il2CppBase() + 0x4700508))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(EasyPopupItemWrapperController*))(Il2CppBase() + 0x4700510))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(EasyPopupItemWrapperController*))(Il2CppBase() + 0x4700518))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(EasyPopupItemWrapperController*))(Il2CppBase() + 0x4700520))(this);
	}

};

}
