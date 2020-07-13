#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LifelineData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LifelineData"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& LGDlist() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T HandleData(uintptr_t lifelineEvent) {
		return ((T (*)(LifelineData*, uintptr_t))(Il2CppBase() + 0x493362C))(this, lifelineEvent);
	}

};

}
