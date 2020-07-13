#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class FinishedAch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "FinishedAch"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _lvl() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(FinishedAch*))(Il2CppBase() + 0x52272E8))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(FinishedAch*, int32_t))(Il2CppBase() + 0x52272F0))(this, value);
	}
	template <typename T = int32_t> T get_lvl() {
		return ((T (*)(FinishedAch*))(Il2CppBase() + 0x52272F8))(this);
	}
	template <typename T = void> T set_lvl(int32_t value) {
		return ((T (*)(FinishedAch*, int32_t))(Il2CppBase() + 0x5227300))(this, value);
	}
	template <typename T = int32_t> T get_value() {
		return ((T (*)(FinishedAch*))(Il2CppBase() + 0x5227308))(this);
	}
	template <typename T = void> T set_value(int32_t value) {
		return ((T (*)(FinishedAch*, int32_t))(Il2CppBase() + 0x5227310))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(FinishedAch*, bool))(Il2CppBase() + 0x5227318))(this, createIfMissing);
	}

};

}
