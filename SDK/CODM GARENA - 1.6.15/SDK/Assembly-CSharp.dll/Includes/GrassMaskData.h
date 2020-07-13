#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GrassMaskData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GrassMaskData"));
	}

	template <typename T = float> T& mapWidth() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& mapHeight() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& mapOriginX() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& mapOriginZ() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& dataWidth() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& dataHeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasGrassAt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T HasGrassAt(int32_t x, int32_t y) {
		return ((T (*)(GrassMaskData*, int32_t, int32_t))(Il2CppBase() + 0x3E2C6AC))(this, x, y);
	}

};

}
