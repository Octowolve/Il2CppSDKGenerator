#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIFirstPopupBigController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIFirstPopupBigController"));
	}

	template <typename T = uintptr_t> T& popupView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_IsPlayingCloseAnim() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCloseBtnCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartToClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreCloseAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(UIFirstPopupBigController*))(Il2CppBase() + 0x3AD8290))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UIFirstPopupBigController*))(Il2CppBase() + 0x3AD839C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UIFirstPopupBigController*))(Il2CppBase() + 0x3AD85C4))(this);
	}
	template <typename T = void> T SetCloseBtnCallback(uintptr_t a) {
		return ((T (*)(UIFirstPopupBigController*, uintptr_t))(Il2CppBase() + 0x3AD8494))(this, a);
	}
	template <typename T = void> T StartToClose() {
		return ((T (*)(UIFirstPopupBigController*))(Il2CppBase() + 0x3AD8750))(this);
	}
	template <typename T = void> T PreCloseAnimation() {
		return ((T (*)(UIFirstPopupBigController*))(Il2CppBase() + 0x3AD880C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(UIFirstPopupBigController*))(Il2CppBase() + 0x3AD8B34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UIFirstPopupBigController*))(Il2CppBase() + 0x3AD8BE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UIFirstPopupBigController*))(Il2CppBase() + 0x3AD8BEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UIFirstPopupBigController*))(Il2CppBase() + 0x3AD8BF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreCloseAnimation() {
		return ((T (*)(UIFirstPopupBigController*))(Il2CppBase() + 0x3AD8BFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(UIFirstPopupBigController*))(Il2CppBase() + 0x3AD8C04))(this);
	}

};

}
