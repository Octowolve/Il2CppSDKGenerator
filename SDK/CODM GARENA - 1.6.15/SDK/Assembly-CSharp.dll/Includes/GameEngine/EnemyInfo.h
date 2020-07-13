#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EnemyInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EnemyInfo"));
	}

	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& PortPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& PortDist() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& CanLock() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(EnemyInfo*))(Il2CppBase() + 0x51B9608))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(EnemyInfo*, bool))(Il2CppBase() + 0x51B9610))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(EnemyInfo*))(Il2CppBase() + 0x51B9618))(this);
	}

};

}
