#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventBehaviour"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Invoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T Invoke(uintptr_t inGO) {
		return ((T (*)(EventBehaviour*, uintptr_t))(Il2CppBase() + 0x170C9AC))(this, inGO);
	}

};

}
