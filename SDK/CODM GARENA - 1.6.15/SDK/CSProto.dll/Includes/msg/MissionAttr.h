#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class MissionAttr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "MissionAttr"));
	}

	template <typename T = int32_t> T& _mission_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _stage() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _accept_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _data() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _update_time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _pos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_mission_id() {
		return ((T (*)(MissionAttr*))(Il2CppBase() + 0x4EA523C))(this);
	}
	template <typename T = void> T set_mission_id(int32_t value) {
		return ((T (*)(MissionAttr*, int32_t))(Il2CppBase() + 0x4EA5244))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(MissionAttr*))(Il2CppBase() + 0x4EA524C))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(MissionAttr*, int32_t))(Il2CppBase() + 0x4EA5254))(this, value);
	}
	template <typename T = uintptr_t> T get_stage() {
		return ((T (*)(MissionAttr*))(Il2CppBase() + 0x4EA525C))(this);
	}
	template <typename T = void> T set_stage(uintptr_t value) {
		return ((T (*)(MissionAttr*, uintptr_t))(Il2CppBase() + 0x4EA5264))(this, value);
	}
	template <typename T = uint32_t> T get_accept_time() {
		return ((T (*)(MissionAttr*))(Il2CppBase() + 0x4EA526C))(this);
	}
	template <typename T = void> T set_accept_time(uint32_t value) {
		return ((T (*)(MissionAttr*, uint32_t))(Il2CppBase() + 0x4EA5274))(this, value);
	}
	template <typename T = uintptr_t> T get_data() {
		return ((T (*)(MissionAttr*))(Il2CppBase() + 0x4EA527C))(this);
	}
	template <typename T = void> T set_data(uintptr_t value) {
		return ((T (*)(MissionAttr*, uintptr_t))(Il2CppBase() + 0x4EA5284))(this, value);
	}
	template <typename T = uint32_t> T get_update_time() {
		return ((T (*)(MissionAttr*))(Il2CppBase() + 0x4EA528C))(this);
	}
	template <typename T = void> T set_update_time(uint32_t value) {
		return ((T (*)(MissionAttr*, uint32_t))(Il2CppBase() + 0x4EA5294))(this, value);
	}
	template <typename T = int32_t> T get_pos() {
		return ((T (*)(MissionAttr*))(Il2CppBase() + 0x4EA529C))(this);
	}
	template <typename T = void> T set_pos(int32_t value) {
		return ((T (*)(MissionAttr*, int32_t))(Il2CppBase() + 0x4EA52A4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(MissionAttr*, bool))(Il2CppBase() + 0x4EA52AC))(this, createIfMissing);
	}

};

}
