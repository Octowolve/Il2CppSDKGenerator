#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EBRMedicineItemType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EBRMedicineItemType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& EBRMEDICINE_ITEM_TYPE_ENERGY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EBRMEDICINE_ITEM_TYPE_HP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EBRMEDICINE_ITEM_TYPE_FUEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EBRMEDICINE_ITEM_TYPE_ULT_ENERGY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EBRMEDICINE_ITEM_TYPE_MAXHP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
