#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RecentKDStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RecentKDStatis"));
	}

	template <typename T = int32_t> T& _kill() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _dead() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _end_timestamp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _is_warm() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_kill() {
		return ((T (*)(RecentKDStatis*))(Il2CppBase() + 0x507063C))(this);
	}
	template <typename T = void> T set_kill(int32_t value) {
		return ((T (*)(RecentKDStatis*, int32_t))(Il2CppBase() + 0x5070644))(this, value);
	}
	template <typename T = int32_t> T get_dead() {
		return ((T (*)(RecentKDStatis*))(Il2CppBase() + 0x507064C))(this);
	}
	template <typename T = void> T set_dead(int32_t value) {
		return ((T (*)(RecentKDStatis*, int32_t))(Il2CppBase() + 0x5070654))(this, value);
	}
	template <typename T = uint32_t> T get_end_timestamp() {
		return ((T (*)(RecentKDStatis*))(Il2CppBase() + 0x507065C))(this);
	}
	template <typename T = void> T set_end_timestamp(uint32_t value) {
		return ((T (*)(RecentKDStatis*, uint32_t))(Il2CppBase() + 0x5070664))(this, value);
	}
	template <typename T = bool> T get_is_warm() {
		return ((T (*)(RecentKDStatis*))(Il2CppBase() + 0x507066C))(this);
	}
	template <typename T = void> T set_is_warm(bool value) {
		return ((T (*)(RecentKDStatis*, bool))(Il2CppBase() + 0x5070674))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RecentKDStatis*, bool))(Il2CppBase() + 0x507067C))(this, createIfMissing);
	}

};

}
