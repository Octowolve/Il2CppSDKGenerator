#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class MiniMapFlagPointGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "MiniMapFlagPointGroup"));
	}

	template <typename T = Il2CppString*> T& IconSpriteName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<float>*> T& IconPositions() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<float>*> T& IconRotations() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<float>*> T& IconScales() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<float>*> T& DescPositions() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<float>*> T& DescScales() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& DescDirection() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
