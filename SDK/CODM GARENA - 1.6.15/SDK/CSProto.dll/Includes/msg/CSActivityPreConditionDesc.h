#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActivityPreConditionDesc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActivityPreConditionDesc"));
	}

	template <typename T = int32_t> T& _Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& _Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_Type() {
		return ((T (*)(CSActivityPreConditionDesc*))(Il2CppBase() + 0x5170E28))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(CSActivityPreConditionDesc*, int32_t))(Il2CppBase() + 0x5170E30))(this, value);
	}
	template <typename T = int64_t> T get_Value() {
		return ((T (*)(CSActivityPreConditionDesc*))(Il2CppBase() + 0x5170E38))(this);
	}
	template <typename T = void> T set_Value(int64_t value) {
		return ((T (*)(CSActivityPreConditionDesc*, int64_t))(Il2CppBase() + 0x5170E40))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActivityPreConditionDesc*, bool))(Il2CppBase() + 0x5170E50))(this, createIfMissing);
	}

};

}
