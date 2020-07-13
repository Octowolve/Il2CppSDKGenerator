#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GuildLabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GuildLabel"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& GUILD_LABEL_UNLIMITED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& GUILD_LABEL_PVP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& GUILD_LABEL_ZOMBIE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& GUILD_LABEL_COMPETITION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& GUILD_LABEL_LEISURE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& GUILD_LABEL_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
