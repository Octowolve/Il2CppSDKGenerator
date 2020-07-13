#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ActRankedMatchEffectedCount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ActRankedMatchEffectedCount"));
	}

	template <typename T = uint64_t> T& _actv_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _type_use_count_infos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_actv_id() {
		return ((T (*)(ActRankedMatchEffectedCount*))(Il2CppBase() + 0x510B200))(this);
	}
	template <typename T = void> T set_actv_id(uint64_t value) {
		return ((T (*)(ActRankedMatchEffectedCount*, uint64_t))(Il2CppBase() + 0x510B208))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_type_use_count_infos() {
		return ((T (*)(ActRankedMatchEffectedCount*))(Il2CppBase() + 0x510B218))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ActRankedMatchEffectedCount*, bool))(Il2CppBase() + 0x510B220))(this, createIfMissing);
	}

};

}
