#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AnnouncementType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AnnouncementType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ANNOUNCEMENT_TYPE_NOTICE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ANNOUNCEMENT_TYPE_LANTERN_LOBBY_NORMAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ANNOUNCEMENT_TYPE_LANTERN_LOBBY_BOX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ANNOUNCEMENT_TYPE_LANTERN_SERVER_UPDATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ANNOUNCEMENT_TYPE_SUBSCRIBE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
