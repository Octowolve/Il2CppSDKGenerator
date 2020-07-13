#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BossKillMinTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BossKillMinTime"));
	}

	template <typename T = int32_t> T& _boss_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _kill_min_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_boss_id() {
		return ((T (*)(BossKillMinTime*))(Il2CppBase() + 0x510D5E0))(this);
	}
	template <typename T = void> T set_boss_id(int32_t value) {
		return ((T (*)(BossKillMinTime*, int32_t))(Il2CppBase() + 0x510D5E8))(this, value);
	}
	template <typename T = uint32_t> T get_kill_min_time() {
		return ((T (*)(BossKillMinTime*))(Il2CppBase() + 0x510D5F0))(this);
	}
	template <typename T = void> T set_kill_min_time(uint32_t value) {
		return ((T (*)(BossKillMinTime*, uint32_t))(Il2CppBase() + 0x510D5F8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BossKillMinTime*, bool))(Il2CppBase() + 0x510D600))(this, createIfMissing);
	}

};

}
