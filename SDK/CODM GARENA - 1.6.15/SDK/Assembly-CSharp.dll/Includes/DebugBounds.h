#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DebugBounds
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DebugBounds"));
	}

	template <typename T = uintptr_t> T& bounds() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& size() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& volume() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& uniformSize() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmosSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(DebugBounds*))(Il2CppBase() + 0x4161E80))(this);
	}

};

}
