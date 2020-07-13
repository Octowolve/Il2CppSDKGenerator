#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ReplicationData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ReplicationData"));
	}

	template <typename T = int64_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& DataID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsDirty() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(ReplicationData*))(Il2CppBase() + 0x1DFE1FC))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(ReplicationData*, bool))(Il2CppBase() + 0x1DFE204))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(ReplicationData*))(Il2CppBase() + 0x1DFE20C))(this);
	}

};

}
