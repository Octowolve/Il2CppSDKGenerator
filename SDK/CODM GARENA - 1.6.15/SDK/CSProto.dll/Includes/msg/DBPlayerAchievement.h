#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBPlayerAchievement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBPlayerAchievement"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _ach_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pve_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _selected_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _promotor_info() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _promotor_answer_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<int32_t>*> T& _selected_ach_list() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _medals() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<int32_t>*> T& _selected_medal_list() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _medal_migrate_flag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_ach_list() {
		return ((T (*)(DBPlayerAchievement*))(Il2CppBase() + 0x51B8724))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_pve_info() {
		return ((T (*)(DBPlayerAchievement*))(Il2CppBase() + 0x51B872C))(this);
	}
	template <typename T = int32_t> T get_selected_id() {
		return ((T (*)(DBPlayerAchievement*))(Il2CppBase() + 0x51B8734))(this);
	}
	template <typename T = void> T set_selected_id(int32_t value) {
		return ((T (*)(DBPlayerAchievement*, int32_t))(Il2CppBase() + 0x51B873C))(this, value);
	}
	template <typename T = uintptr_t> T get_promotor_info() {
		return ((T (*)(DBPlayerAchievement*))(Il2CppBase() + 0x51B8744))(this);
	}
	template <typename T = void> T set_promotor_info(uintptr_t value) {
		return ((T (*)(DBPlayerAchievement*, uintptr_t))(Il2CppBase() + 0x51B874C))(this, value);
	}
	template <typename T = uint32_t> T get_promotor_answer_id() {
		return ((T (*)(DBPlayerAchievement*))(Il2CppBase() + 0x51B8754))(this);
	}
	template <typename T = void> T set_promotor_answer_id(uint32_t value) {
		return ((T (*)(DBPlayerAchievement*, uint32_t))(Il2CppBase() + 0x51B875C))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_selected_ach_list() {
		return ((T (*)(DBPlayerAchievement*))(Il2CppBase() + 0x51B8764))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_medals() {
		return ((T (*)(DBPlayerAchievement*))(Il2CppBase() + 0x51B876C))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_selected_medal_list() {
		return ((T (*)(DBPlayerAchievement*))(Il2CppBase() + 0x51B8774))(this);
	}
	template <typename T = bool> T get_medal_migrate_flag() {
		return ((T (*)(DBPlayerAchievement*))(Il2CppBase() + 0x51B877C))(this);
	}
	template <typename T = void> T set_medal_migrate_flag(bool value) {
		return ((T (*)(DBPlayerAchievement*, bool))(Il2CppBase() + 0x51B8784))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBPlayerAchievement*, bool))(Il2CppBase() + 0x51B878C))(this, createIfMissing);
	}

};

}
