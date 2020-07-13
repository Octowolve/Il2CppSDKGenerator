#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ResActivityBackTaskConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ResActivityBackTaskConf"));
	}

	template <typename T = uint64_t> T& _activity_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _day() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<int32_t>*> T& _seq_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_activity_id() {
		return ((T (*)(ResActivityBackTaskConf*))(Il2CppBase() + 0x5071174))(this);
	}
	template <typename T = void> T set_activity_id(uint64_t value) {
		return ((T (*)(ResActivityBackTaskConf*, uint64_t))(Il2CppBase() + 0x507117C))(this, value);
	}
	template <typename T = int32_t> T get_group_id() {
		return ((T (*)(ResActivityBackTaskConf*))(Il2CppBase() + 0x507118C))(this);
	}
	template <typename T = void> T set_group_id(int32_t value) {
		return ((T (*)(ResActivityBackTaskConf*, int32_t))(Il2CppBase() + 0x5071194))(this, value);
	}
	template <typename T = int32_t> T get_day() {
		return ((T (*)(ResActivityBackTaskConf*))(Il2CppBase() + 0x507119C))(this);
	}
	template <typename T = void> T set_day(int32_t value) {
		return ((T (*)(ResActivityBackTaskConf*, int32_t))(Il2CppBase() + 0x50711A4))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_seq_id() {
		return ((T (*)(ResActivityBackTaskConf*))(Il2CppBase() + 0x50711AC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ResActivityBackTaskConf*, bool))(Il2CppBase() + 0x50711B4))(this, createIfMissing);
	}

};

}
