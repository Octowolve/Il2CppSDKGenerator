#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine {

class PoolableObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine", "PoolableObject"));
	}

	template <typename T = uintptr_t> T& _handler() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPoolHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Finalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetPoolHandler(uintptr_t handler) {
		return ((T (*)(PoolableObject*, uintptr_t))(Il2CppBase() + 0x476A750))(this, handler);
	}
	template <typename T = void> T OnAcquire() {
		return ((T (*)(PoolableObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnRelease() {
		return ((T (*)(PoolableObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(PoolableObject*))(Il2CppBase() + 0x4757EB4))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(PoolableObject*))(Il2CppBase() + 0x476A7F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Finalize() {
		return ((T (*)(PoolableObject*))(Il2CppBase() + 0x476A8A0))(this);
	}

};

}
