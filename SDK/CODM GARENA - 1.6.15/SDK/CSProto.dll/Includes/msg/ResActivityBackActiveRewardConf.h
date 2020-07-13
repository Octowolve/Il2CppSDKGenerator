#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ResActivityBackActiveRewardConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ResActivityBackActiveRewardConf"));
	}

	template <typename T = uint64_t> T& _activity_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _final_reward() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _reward() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_activity_id() {
		return ((T (*)(ResActivityBackActiveRewardConf*))(Il2CppBase() + 0x50709A4))(this);
	}
	template <typename T = void> T set_activity_id(uint64_t value) {
		return ((T (*)(ResActivityBackActiveRewardConf*, uint64_t))(Il2CppBase() + 0x50709AC))(this, value);
	}
	template <typename T = int32_t> T get_group_id() {
		return ((T (*)(ResActivityBackActiveRewardConf*))(Il2CppBase() + 0x50709BC))(this);
	}
	template <typename T = void> T set_group_id(int32_t value) {
		return ((T (*)(ResActivityBackActiveRewardConf*, int32_t))(Il2CppBase() + 0x50709C4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_final_reward() {
		return ((T (*)(ResActivityBackActiveRewardConf*))(Il2CppBase() + 0x50709CC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_reward() {
		return ((T (*)(ResActivityBackActiveRewardConf*))(Il2CppBase() + 0x50709D4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ResActivityBackActiveRewardConf*, bool))(Il2CppBase() + 0x50709DC))(this, createIfMissing);
	}

};

}
