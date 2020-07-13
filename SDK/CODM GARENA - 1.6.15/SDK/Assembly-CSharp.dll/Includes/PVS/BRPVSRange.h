#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVS {

class BRPVSRange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVS", "BRPVSRange"));
	}

	template <typename T = uintptr_t> T& TerrainGO() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Range() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& RelevantScenePathList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
