#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExpBuffModeItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExpBuffModeItemView"));
	}

	template <typename T = uintptr_t> T& LabelContent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& LabelPre() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T SetContent(uintptr_t data, uint32_t mode, double serverTime, uintptr_t modeCategory) {
		return ((T (*)(ExpBuffModeItemView*, uintptr_t, uint32_t, double, uintptr_t))(Il2CppBase() + 0x4BD67FC))(this, data, mode, serverTime, modeCategory);
	}

};

}
