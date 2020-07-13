#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class StatisPrizeDetailType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "StatisPrizeDetailType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& STATIS_PRIZE_DETAIL_TYPE_GUILD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& STATIS_PRIZE_DETAIL_TYPE_WEAPON_ATTR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& STATIS_PRIZE_DETAIL_TYPE_WEAPON_ATTR_TEAM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
