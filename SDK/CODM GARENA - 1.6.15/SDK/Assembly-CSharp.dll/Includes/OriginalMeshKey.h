#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OriginalMeshKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OriginalMeshKey"));
	}

	template <typename T = Il2CppString*> T& meshName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& vertexCount() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(OriginalMeshKey*, uintptr_t))(Il2CppBase() + 0x3EF5D64))(this, other);
	}

};

}
