#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ExpertInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ExpertInfo"));
	}

	template <typename T = uint32_t> T& _expert_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _expert_lvl() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_expert_id() {
		return ((T (*)(ExpertInfo*))(Il2CppBase() + 0x5227230))(this);
	}
	template <typename T = void> T set_expert_id(uint32_t value) {
		return ((T (*)(ExpertInfo*, uint32_t))(Il2CppBase() + 0x5227238))(this, value);
	}
	template <typename T = uint32_t> T get_expert_lvl() {
		return ((T (*)(ExpertInfo*))(Il2CppBase() + 0x5227240))(this);
	}
	template <typename T = void> T set_expert_lvl(uint32_t value) {
		return ((T (*)(ExpertInfo*, uint32_t))(Il2CppBase() + 0x5227248))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ExpertInfo*, bool))(Il2CppBase() + 0x5227250))(this, createIfMissing);
	}

};

}
