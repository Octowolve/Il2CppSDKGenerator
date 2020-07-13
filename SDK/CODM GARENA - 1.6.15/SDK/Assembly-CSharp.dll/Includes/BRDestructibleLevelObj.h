#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRDestructibleLevelObj
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRDestructibleLevelObj"));
	}

	template <typename T = bool> T& CanAttack() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& MaxHealth() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& DestructibleType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& dropPropSettings() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
