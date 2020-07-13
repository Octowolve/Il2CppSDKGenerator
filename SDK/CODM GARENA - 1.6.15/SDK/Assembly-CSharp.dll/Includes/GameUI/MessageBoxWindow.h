#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class MessageBoxWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "MessageBoxWindow"));
	}

	template <typename T = uintptr_t> T& ContentWidget() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_MessageLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_OkButtonTemplate() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_CancelButtonTemplate() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& mCloseAnimator() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_ButtonsType() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& isModal() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> static T& kTitleLoc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kOkLoc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kCancelLoc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kDiscardLoc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kSaveLoc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& OkVector() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector3> T& OkCancelVector() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DontCacheFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCloseAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWindowCloseable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T DontCacheFlag() {
		return ((T (*)(MessageBoxWindow*))(Il2CppBase() + 0x1FA3B5C))(this);
	}
	template <typename T = void> T PlayCloseAnimation() {
		return ((T (*)(MessageBoxWindow*))(Il2CppBase() + 0x1FA3554))(this);
	}
	template <typename T = void> T SetData(Il2CppString* message, uintptr_t callback, Il2CppString* title, uintptr_t buttonsType, bool isModal, bool isAboveAll, Il2CppString* okButtonText, Il2CppString* cancelButtonText) {
		return ((T (*)(MessageBoxWindow*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t, bool, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1FA21EC))(this, message, callback, title, buttonsType, isModal, isAboveAll, okButtonText, cancelButtonText);
	}
	template <typename T = void> T OnViewShow() {
		return ((T (*)(MessageBoxWindow*))(Il2CppBase() + 0x1FA3BFC))(this);
	}
	template <typename T = bool> T IsWindowCloseable() {
		return ((T (*)(MessageBoxWindow*))(Il2CppBase() + 0x1FA3E6C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_DontCacheFlag() {
		return ((T (*)(MessageBoxWindow*))(Il2CppBase() + 0x1FA3F18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnViewShow() {
		return ((T (*)(MessageBoxWindow*))(Il2CppBase() + 0x1FA3F20))(this);
	}

};

}
