#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BoxAward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BoxAward"));
	}

	template <typename T = uint64_t> T& _box_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _award_points() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _award_list() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_box_id() {
		return ((T (*)(BoxAward*))(Il2CppBase() + 0x510D78C))(this);
	}
	template <typename T = void> T set_box_id(uint64_t value) {
		return ((T (*)(BoxAward*, uint64_t))(Il2CppBase() + 0x510D794))(this, value);
	}
	template <typename T = int32_t> T get_award_points() {
		return ((T (*)(BoxAward*))(Il2CppBase() + 0x510D7A4))(this);
	}
	template <typename T = void> T set_award_points(int32_t value) {
		return ((T (*)(BoxAward*, int32_t))(Il2CppBase() + 0x510D7AC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_award_list() {
		return ((T (*)(BoxAward*))(Il2CppBase() + 0x510D7B4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BoxAward*, bool))(Il2CppBase() + 0x510D7BC))(this, createIfMissing);
	}

};

}
