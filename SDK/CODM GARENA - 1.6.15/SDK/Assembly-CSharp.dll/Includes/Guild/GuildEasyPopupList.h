#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildEasyPopupList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildEasyPopupList"));
	}

	template <typename T = uintptr_t> T& SelectedText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowPending() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnShowPending(uintptr_t obj) {
		return ((T (*)(GuildEasyPopupList*, uintptr_t))(Il2CppBase() + 0x3BB86DC))(this, obj);
	}
	template <typename T = void> T xLuaBaseProxy_OnShowPending(uintptr_t P0) {
		return ((T (*)(GuildEasyPopupList*, uintptr_t))(Il2CppBase() + 0x3BB89B4))(this, P0);
	}

};

}
