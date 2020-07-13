#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class EMatchInviteSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "EMatchInviteSource"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& MATCH_INVITE_SOURCE_FRIEND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& MATCH_INVITE_SOURCE_GUILD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& MATCH_INVITE_SOURCE_CHAT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& MATCH_INVITE_SOURCE_TEAMMATCH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
