#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountSetPractModeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccount_SetPractModeRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _pract_mode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSAccountSetPractModeRes*))(Il2CppBase() + 0x516F758))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSAccountSetPractModeRes*, uint32_t))(Il2CppBase() + 0x516F760))(this, value);
	}
	template <typename T = int32_t> T get_pract_mode() {
		return ((T (*)(CSAccountSetPractModeRes*))(Il2CppBase() + 0x516F768))(this);
	}
	template <typename T = void> T set_pract_mode(int32_t value) {
		return ((T (*)(CSAccountSetPractModeRes*, int32_t))(Il2CppBase() + 0x516F770))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountSetPractModeRes*, bool))(Il2CppBase() + 0x516F778))(this, createIfMissing);
	}

};

}
