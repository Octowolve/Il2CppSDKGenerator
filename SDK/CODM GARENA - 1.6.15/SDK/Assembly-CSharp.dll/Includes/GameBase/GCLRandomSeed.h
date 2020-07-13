#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GCLRandomSeed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GCLRandomSeed"));
	}

	template <typename T = int32_t> T& EventID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RandomArray() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& CurrentIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& RandomLength() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakeSeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T MakeSeed() {
		return ((T (*)(GCLRandomSeed*))(Il2CppBase() + 0x1EC4118))(this);
	}
	template <typename T = int32_t> T GetNextValue() {
		return ((T (*)(GCLRandomSeed*))(Il2CppBase() + 0x1EC4250))(this);
	}

};

}
