#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GspLikePlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GspLikePlayer"));
	}

	template <typename T = uintptr_t> T& _profile_simpleinfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _gsplike_gametype() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _match_service_module() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _gsplike_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_profile_simpleinfo() {
		return ((T (*)(GspLikePlayer*))(Il2CppBase() + 0x50CEE18))(this);
	}
	template <typename T = void> T set_profile_simpleinfo(uintptr_t value) {
		return ((T (*)(GspLikePlayer*, uintptr_t))(Il2CppBase() + 0x50CEE20))(this, value);
	}
	template <typename T = uint32_t> T get_gsplike_gametype() {
		return ((T (*)(GspLikePlayer*))(Il2CppBase() + 0x50CEE28))(this);
	}
	template <typename T = void> T set_gsplike_gametype(uint32_t value) {
		return ((T (*)(GspLikePlayer*, uint32_t))(Il2CppBase() + 0x50CEE30))(this, value);
	}
	template <typename T = int32_t> T get_match_service_module() {
		return ((T (*)(GspLikePlayer*))(Il2CppBase() + 0x50CEE38))(this);
	}
	template <typename T = void> T set_match_service_module(int32_t value) {
		return ((T (*)(GspLikePlayer*, int32_t))(Il2CppBase() + 0x50CEE40))(this, value);
	}
	template <typename T = uint32_t> T get_gsplike_time() {
		return ((T (*)(GspLikePlayer*))(Il2CppBase() + 0x50CEE48))(this);
	}
	template <typename T = void> T set_gsplike_time(uint32_t value) {
		return ((T (*)(GspLikePlayer*, uint32_t))(Il2CppBase() + 0x50CEE50))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GspLikePlayer*, bool))(Il2CppBase() + 0x50CEE58))(this, createIfMissing);
	}

};

}
