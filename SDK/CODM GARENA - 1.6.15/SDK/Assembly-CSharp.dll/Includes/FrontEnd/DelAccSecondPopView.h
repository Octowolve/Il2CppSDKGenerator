#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class DelAccSecondPopView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "DelAccSecondPopView"));
	}

	template <typename T = uintptr_t> T& m_UITemplate() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BtnCancel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& BtnDelete() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BtnCancelLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BtnDeleteLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& contentLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UIInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UIInit() {
		return ((T (*)(DelAccSecondPopView*))(Il2CppBase() + 0x3672C18))(this);
	}
	template <typename T = void> T SetTitle(Il2CppString* text) {
		return ((T (*)(DelAccSecondPopView*, Il2CppString*))(Il2CppBase() + 0x3673B30))(this, text);
	}
	template <typename T = void> T xLuaBaseProxy_SetTitle(Il2CppString* P0) {
		return ((T (*)(DelAccSecondPopView*, Il2CppString*))(Il2CppBase() + 0x3673C94))(this, P0);
	}

};

}
