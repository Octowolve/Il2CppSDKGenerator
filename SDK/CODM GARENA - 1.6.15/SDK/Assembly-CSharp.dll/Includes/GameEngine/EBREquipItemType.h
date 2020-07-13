#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EBREquipItemType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EBREquipItemType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& EBREQUIP_ITEM_TYPE_HEAD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EBREQUIP_ITEM_TYPE_BAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EBREQUIP_ITEM_TYPE_BALLPROF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
