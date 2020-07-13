#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BakeryLightmapGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BakeryLightmapGroup"));
	}

	template <typename T = int32_t> T& resolution() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& bitmask() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isImplicit() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& area() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& totalVertexCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& vertexCounter() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& sceneLodLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& sceneName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& containsTerrains() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& probes() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& renderMode() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& renderDirMode() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& computeSSS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& sssSamples() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& sssDensity() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& sssColor() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = uintptr_t> T GetPlainStruct() {
		return ((T (*)(BakeryLightmapGroup*))(Il2CppBase() + 0x325260C))(this);
	}

};

}
