#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class DelAccFirstPopView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "DelAccFirstPopView"));
	}

	template <typename T = uintptr_t> T& m_UITemplate() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& btnCancel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& btnDelete() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& labelCancel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& labelDelete() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& labelContent() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T UIInit() {
		return ((T (*)(DelAccFirstPopView*))(Il2CppBase() + 0x29358AC))(this);
	}
	template <typename T = void> T SetTitle(Il2CppString* text) {
		return ((T (*)(DelAccFirstPopView*, Il2CppString*))(Il2CppBase() + 0x29363A8))(this, text);
	}
	template <typename T = void> T SetContent(Il2CppString* text) {
		return ((T (*)(DelAccFirstPopView*, Il2CppString*))(Il2CppBase() + 0x29361E4))(this, text);
	}
	template <typename T = void> T xLuaBaseProxy_SetTitle(Il2CppString* P0) {
		return ((T (*)(DelAccFirstPopView*, Il2CppString*))(Il2CppBase() + 0x293650C))(this, P0);
	}

};

}
