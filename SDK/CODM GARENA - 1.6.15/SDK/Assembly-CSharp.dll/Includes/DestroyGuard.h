#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyGuard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyGuard"));
	}

	template <typename T = uintptr_t> T& Spawner() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnDestroy() {
		return ((T (*)(DestroyGuard*))(Il2CppBase() + 0x170C760))(this);
	}

};

}
