#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BundleMappingContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BundleMappingContainer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& res() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& shaders() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& scenes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& svc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(BundleMappingContainer*, uintptr_t))(Il2CppBase() + 0x418EBA0))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BundleMappingContainer*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x418EDC8))(this, bytes, position);
	}

};

}
