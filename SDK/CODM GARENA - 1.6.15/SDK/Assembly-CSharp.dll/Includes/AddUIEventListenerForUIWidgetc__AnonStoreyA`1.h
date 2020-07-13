#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddUIEventListenerForUIWidgetcAnonStoreyA1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AddUIEventListenerForUIWidget>c__AnonStoreyA`1"));
	}

	template <typename T = uintptr_t> T& eventType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T m__0(uintptr_t item) {
		return ((T (*)(AddUIEventListenerForUIWidgetcAnonStoreyA1*, uintptr_t))(Il2CppBase() + 0x48E6878))(this, item);
	}

};

}
