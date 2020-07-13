#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ActvRankedMatchType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ActvRankedMatchType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ACTV_RANKED_MATCH_TEAM_MP_NO_DROP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ACTV_RANKED_MATCH_TEAM_BR_NO_DROP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ACTV_RANKED_MATCH_MP_NO_DROP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ACTV_RANKED_MATCH_BR_NO_DROP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ACTV_RANKED_MATCH_MP_ADD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ACTV_RANKED_MATCH_BR_ADD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
