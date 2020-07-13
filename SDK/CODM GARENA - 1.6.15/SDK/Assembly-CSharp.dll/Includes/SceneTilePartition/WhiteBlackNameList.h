#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SceneTilePartition {

class WhiteBlackNameList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SceneTilePartition", "WhiteBlackNameList"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& BlackNames() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& WhiteNames() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
