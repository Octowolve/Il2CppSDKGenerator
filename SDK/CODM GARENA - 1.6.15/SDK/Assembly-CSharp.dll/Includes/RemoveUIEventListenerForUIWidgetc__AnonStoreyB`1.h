#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveUIEventListenerForUIWidgetcAnonStoreyB1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RemoveUIEventListenerForUIWidget>c__AnonStoreyB`1"));
	}

	template <typename T = uintptr_t> T& eventType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T m__0(uintptr_t item) {
		return ((T (*)(RemoveUIEventListenerForUIWidgetcAnonStoreyB1*, uintptr_t))(Il2CppBase() + 0x48E69FC))(this, item);
	}

};

}
