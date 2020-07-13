#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UIRichObjects
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UIRichObjects"));
	}

	template <typename T = uintptr_t> T& NormalObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& HighlightedObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& LockedObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRichState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetRichState(uintptr_t rstate) {
		return ((T (*)(UIRichObjects*, uintptr_t))(Il2CppBase() + 0x49FAB74))(this, rstate);
	}

};

}
