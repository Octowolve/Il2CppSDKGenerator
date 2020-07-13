#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PerkSlotIndex
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PerkSlotIndex"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& PERK_SLOT_INDEX_RED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& PERK_SLOT_INDEX_GREEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& PERK_SLOT_INDEX_BLUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
