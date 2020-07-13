#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelAccTimeoutPopView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelAccTimeoutPopView"));
	}

	template <typename T = uintptr_t> T& contentLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetContent(Il2CppString* text) {
		return ((T (*)(DelAccTimeoutPopView*, Il2CppString*))(Il2CppBase() + 0x4173C20))(this, text);
	}

};

}
