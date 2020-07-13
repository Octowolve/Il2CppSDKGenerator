#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SimpleObjectPool1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SimpleObjectPool`1"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& mData() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Recyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T GetObject() {
		return ((T (*)(SimpleObjectPool1*))(Il2CppBase() + 0x48DDD1C))(this);
	}
	template <typename T = void> T Recyle(uintptr_t obj) {
		return ((T (*)(SimpleObjectPool1*, uintptr_t))(Il2CppBase() + 0x48DDE50))(this, obj);
	}

};

}
