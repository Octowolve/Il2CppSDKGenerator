#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class DelAccCancelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "DelAccCancelView"));
	}

	template <typename T = uintptr_t> T& m_UITemplate() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BtnCancel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& BtnSure() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BtnCancelLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BtnSureLabel() {
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
		return ((T (*)(DelAccCancelView*))(Il2CppBase() + 0x33D08F0))(this);
	}
	template <typename T = void> T SetTitle(Il2CppString* text) {
		return ((T (*)(DelAccCancelView*, Il2CppString*))(Il2CppBase() + 0x33D26E8))(this, text);
	}
	template <typename T = void> T xLuaBaseProxy_SetTitle(Il2CppString* P0) {
		return ((T (*)(DelAccCancelView*, Il2CppString*))(Il2CppBase() + 0x33D284C))(this, P0);
	}

};

}
