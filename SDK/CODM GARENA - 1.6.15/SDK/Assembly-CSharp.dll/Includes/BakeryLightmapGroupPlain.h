#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BakeryLightmapGroupPlain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BakeryLightmapGroupPlain"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& resolution() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& renderMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& renderDirMode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& vertexBake() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& containsTerrains() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& probes() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& isImplicit() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = bool> T& computeSSS() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& sssSamples() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& sssDensity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& sssR() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& sssG() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& sssB() {
		return *(T*)((uintptr_t)this + 0x2C);
	}


};

}
