#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UIRichObjectsExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UIRichObjectsExtension"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetRichState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T SafeSetRichState(uintptr_t obj, uintptr_t rstate) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x49FAD70))(0, obj, rstate);
	}

};

}
