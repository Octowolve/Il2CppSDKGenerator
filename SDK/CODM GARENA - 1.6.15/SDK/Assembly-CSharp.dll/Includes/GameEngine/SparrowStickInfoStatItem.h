#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SparrowStickInfoStatItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SparrowStickInfoStatItem"));
	}

	template <typename T = uint32_t> T& UltID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& SkillIdx() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& ScanPawnIDList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
