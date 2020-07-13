#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class EasyListItemWrapperController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "EasyListItemWrapperController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_ContentController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_EasyList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_EnableClick() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_EnableColider() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& width() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& height() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemInitialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEasyListItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddButtonClickedEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T get_ContentController() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FC4F4))(this);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FC4EC))(this);
	}
	template <typename T = int32_t> T get_width() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FD5A4))(this);
	}
	template <typename T = void> T set_width(int32_t value) {
		return ((T (*)(EasyListItemWrapperController*, int32_t))(Il2CppBase() + 0x46FD5AC))(this, value);
	}
	template <typename T = int32_t> T get_height() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FD5B4))(this);
	}
	template <typename T = void> T set_height(int32_t value) {
		return ((T (*)(EasyListItemWrapperController*, int32_t))(Il2CppBase() + 0x46FD5BC))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FD5C4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FD748))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FD7EC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FD994))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FDB3C))(this);
	}
	template <typename T = void> T OnButtonClick() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FDC10))(this);
	}
	template <typename T = void> T OnItemInitialize(int32_t wrapIndex, int32_t realIndex) {
		return ((T (*)(EasyListItemWrapperController*, int32_t, int32_t))(Il2CppBase() + 0x46F8530))(this, wrapIndex, realIndex);
	}
	template <typename T = void> T InitContent(uintptr_t easyList, uintptr_t contentControllerType, int32_t width, int32_t height, bool enableClick, bool enableColider, bool disableClickSound, bool considerChildren) {
		return ((T (*)(EasyListItemWrapperController*, uintptr_t, uintptr_t, int32_t, int32_t, bool, bool, bool, bool))(Il2CppBase() + 0x46FC7F0))(this, easyList, contentControllerType, width, height, enableClick, enableColider, disableClickSound, considerChildren);
	}
	template <typename T = void> T SetEasyListItemData(uintptr_t data, int32_t wrapIndex, int32_t realIndex) {
		return ((T (*)(EasyListItemWrapperController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x46FDD48))(this, data, wrapIndex, realIndex);
	}
	template <typename T = void> T SetUIActive(bool IsActive, bool recursively, bool RemoveDelegate) {
		return ((T (*)(EasyListItemWrapperController*, bool, bool, bool))(Il2CppBase() + 0x46FE4CC))(this, IsActive, recursively, RemoveDelegate);
	}
	template <typename T = void> T RefreshEasyListItemData() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FBE48))(this);
	}
	template <typename T = void> T SetDepth(int32_t depth) {
		return ((T (*)(EasyListItemWrapperController*, int32_t))(Il2CppBase() + 0x46FE5AC))(this, depth);
	}
	template <typename T = uintptr_t> T GetViewGameObject() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FE6D4))(this);
	}
	template <typename T = void> T AddButtonClickedEffect() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FE7F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FE94C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FE954))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FE95C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FE964))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(EasyListItemWrapperController*))(Il2CppBase() + 0x46FE96C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetUIActive(bool P0, bool P1, bool P2) {
		return ((T (*)(EasyListItemWrapperController*, bool, bool, bool))(Il2CppBase() + 0x46FE974))(this, P0, P1, P2);
	}

};

}
