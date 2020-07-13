#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerMissionStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerMissionStatis"));
	}

	template <typename T = uint32_t> T& _mission_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_mission_id() {
		return ((T (*)(PlayerMissionStatis*))(Il2CppBase() + 0x4EA8D7C))(this);
	}
	template <typename T = void> T set_mission_id(uint32_t value) {
		return ((T (*)(PlayerMissionStatis*, uint32_t))(Il2CppBase() + 0x4EA8D84))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerMissionStatis*, bool))(Il2CppBase() + 0x4EA8D8C))(this, createIfMissing);
	}

};

}
