#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class MiniAppMediaPathParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "MiniAppMediaPathParameters"));
	}

	template <typename T = int32_t> T& partition() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& room_gid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& isPlatId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& create_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& bus_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& password() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& modeID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& roomType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& playlistID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& iAreaID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_partition() {
		return ((T (*)(MiniAppMediaPathParameters*))(Il2CppBase() + 0x3839858))(this);
	}
	template <typename T = void> T set_partition(int32_t value) {
		return ((T (*)(MiniAppMediaPathParameters*, int32_t))(Il2CppBase() + 0x3839860))(this, value);
	}
	template <typename T = uint32_t> T get_room_gid() {
		return ((T (*)(MiniAppMediaPathParameters*))(Il2CppBase() + 0x3839868))(this);
	}
	template <typename T = void> T set_room_gid(uint32_t value) {
		return ((T (*)(MiniAppMediaPathParameters*, uint32_t))(Il2CppBase() + 0x3839870))(this, value);
	}
	template <typename T = Il2CppString*> T get_isPlatId() {
		return ((T (*)(MiniAppMediaPathParameters*))(Il2CppBase() + 0x3839878))(this);
	}
	template <typename T = void> T set_isPlatId(Il2CppString* value) {
		return ((T (*)(MiniAppMediaPathParameters*, Il2CppString*))(Il2CppBase() + 0x3839880))(this, value);
	}
	template <typename T = Il2CppString*> T get_create_time() {
		return ((T (*)(MiniAppMediaPathParameters*))(Il2CppBase() + 0x3839888))(this);
	}
	template <typename T = void> T set_create_time(Il2CppString* value) {
		return ((T (*)(MiniAppMediaPathParameters*, Il2CppString*))(Il2CppBase() + 0x3839890))(this, value);
	}
	template <typename T = uint32_t> T get_bus_id() {
		return ((T (*)(MiniAppMediaPathParameters*))(Il2CppBase() + 0x3839898))(this);
	}
	template <typename T = void> T set_bus_id(uint32_t value) {
		return ((T (*)(MiniAppMediaPathParameters*, uint32_t))(Il2CppBase() + 0x38398A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_password() {
		return ((T (*)(MiniAppMediaPathParameters*))(Il2CppBase() + 0x38398A8))(this);
	}
	template <typename T = void> T set_password(Il2CppString* value) {
		return ((T (*)(MiniAppMediaPathParameters*, Il2CppString*))(Il2CppBase() + 0x38398B0))(this, value);
	}
	template <typename T = uint32_t> T get_modeID() {
		return ((T (*)(MiniAppMediaPathParameters*))(Il2CppBase() + 0x38398B8))(this);
	}
	template <typename T = void> T set_modeID(uint32_t value) {
		return ((T (*)(MiniAppMediaPathParameters*, uint32_t))(Il2CppBase() + 0x38398C0))(this, value);
	}
	template <typename T = uint32_t> T get_roomType() {
		return ((T (*)(MiniAppMediaPathParameters*))(Il2CppBase() + 0x38398C8))(this);
	}
	template <typename T = void> T set_roomType(uint32_t value) {
		return ((T (*)(MiniAppMediaPathParameters*, uint32_t))(Il2CppBase() + 0x38398D0))(this, value);
	}
	template <typename T = int32_t> T get_playlistID() {
		return ((T (*)(MiniAppMediaPathParameters*))(Il2CppBase() + 0x38398D8))(this);
	}
	template <typename T = void> T set_playlistID(int32_t value) {
		return ((T (*)(MiniAppMediaPathParameters*, int32_t))(Il2CppBase() + 0x38398E0))(this, value);
	}
	template <typename T = int32_t> T get_iAreaID() {
		return ((T (*)(MiniAppMediaPathParameters*))(Il2CppBase() + 0x38398E8))(this);
	}
	template <typename T = void> T set_iAreaID(int32_t value) {
		return ((T (*)(MiniAppMediaPathParameters*, int32_t))(Il2CppBase() + 0x38398F0))(this, value);
	}

};

}
