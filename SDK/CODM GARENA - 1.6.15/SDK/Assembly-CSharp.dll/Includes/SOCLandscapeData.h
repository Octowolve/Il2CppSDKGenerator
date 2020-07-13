#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SOCLandscapeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SOCLandscapeData"));
	}

	template <typename T = float> T& unitLen() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& xOffset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& zOffset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& xSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& zSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
