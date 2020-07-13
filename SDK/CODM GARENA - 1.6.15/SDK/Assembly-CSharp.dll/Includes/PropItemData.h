#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PropItemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PropItemData"));
	}

	template <typename T = int32_t> T& ItemAssetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ItemBounds() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& Scale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& MaxHP() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& AliveScore() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
