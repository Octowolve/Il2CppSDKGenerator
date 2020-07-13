#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BRSkinPair
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BRSkinPair"));
	}

	template <typename T = uint32_t> T& SkinId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint64_t> T& RealSkinGuid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
