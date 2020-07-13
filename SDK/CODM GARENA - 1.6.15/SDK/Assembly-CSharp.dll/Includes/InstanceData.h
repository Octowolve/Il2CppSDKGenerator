#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InstanceData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InstanceData"));
	}

	template <typename T = uintptr_t> T& mesh() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& matrixArr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cullingIdxArr() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_isValid() {
		return ((T (*)(InstanceData*))(Il2CppBase() + 0x194A664))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(InstanceData*))(Il2CppBase() + 0x194C554))(this);
	}

};

}
